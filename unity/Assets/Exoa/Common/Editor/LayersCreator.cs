using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;

namespace Exoa.Designer
{
    [InitializeOnLoad]
    public static class LayersCreator
    {
        // static constructor is called as soon as class is initialized
        static LayersCreator()
        {
            List<string> tagNames = new List<string>(Enum.GetNames(typeof(Tags.Type)));
            List<string> layerNames = new List<string>(Enum.GetNames(typeof(Layers.Type)));
            List<int> layerValues = new List<int>((int[])Enum.GetValues(typeof(Layers.Type)));

            CheckLayers(layerNames, layerValues);

            CheckTags(tagNames.ToArray());
        }



        // will check if the specified layer names are present and add any missing ones
        // it will simply add them from the first open slots so do not depend on any
        // specific order but rather grab layers from the layer names at runtime
        public static void CheckLayers(List<string> layerNames, List<int> layerValues)
        {
            SerializedObject manager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
            SerializedProperty layersProp = manager.FindProperty("layers");

            bool allLayersFound = true;

            for (int j = 0; j < layerValues.Count; j++)
            {
                int layerId = layerValues[j];
                string layerName = layerNames[j];

                if (layerId >= 8)
                {
                    SerializedProperty sp = layersProp.GetArrayElementAtIndex(layerId);
                    if (sp == null || !layerName.Equals(sp.stringValue))
                    {
                        allLayersFound = false;
                        break;
                    }
                }
            }
            if (!allLayersFound && EditorUtility.DisplayDialog("Layers Setup", "We need to setup a few layers, please note that your current layers will be overrided, do you want to proceed ?", "Yes, let's do it!", "Cancel"))
            {
                for (int j = 0; j < layerValues.Count; j++)
                {
                    int layerId = layerValues[j];
                    string layerName = layerNames[j];

                    if (layerId >= 8)
                    {
                        SerializedProperty sp = layersProp.GetArrayElementAtIndex(layerId);
                        if (sp != null)
                        {
                            sp.stringValue = layerName;
                        }
                    }
                }
            }
            // save
            manager.ApplyModifiedProperties();
        }

        public static void CheckTags(string[] tagNames)
        {
            SerializedObject manager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
            SerializedProperty tagsProp = manager.FindProperty("tags");

            List<string> DefaultTags = new List<string>() { "Untagged", "Respawn", "Finish", "EditorOnly", "MainCamera", "Player", "GameController" };

            foreach (string name in tagNames)
            {
                if (DefaultTags.Contains(name)) continue;

                // check if tag is present
                bool found = false;
                for (int i = 0; i < tagsProp.arraySize; i++)
                {
                    SerializedProperty t = tagsProp.GetArrayElementAtIndex(i);
                    if (t.stringValue.Equals(name)) { found = true; break; }
                }

                // if not found, add it
                if (!found)
                {
                    tagsProp.InsertArrayElementAtIndex(0);
                    SerializedProperty n = tagsProp.GetArrayElementAtIndex(0);
                    n.stringValue = name;
                }
            }

            // save
            manager.ApplyModifiedProperties();
        }

        public static void CheckSortLayers(string[] tagNames)
        {
            SerializedObject manager = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/TagManager.asset")[0]);
            SerializedProperty sortLayersProp = manager.FindProperty("m_SortingLayers");

            //for (int i = 0; i < sortLayersProp.arraySize; i++)
            //{ // used to figure out how all of this works and what properties values look like
            //    SerializedProperty entry = sortLayersProp.GetArrayElementAtIndex(i);
            //    SerializedProperty name = entry.FindPropertyRelative("name");
            //    SerializedProperty unique = entry.FindPropertyRelative("uniqueID");
            //    SerializedProperty locked = entry.FindPropertyRelative("locked");
            //    Debug.Log(name.stringValue + " => " + unique.intValue + " => " + locked.boolValue);
            //}

            foreach (string name in tagNames)
            {
                // check if tag is present
                bool found = false;
                for (int i = 0; i < sortLayersProp.arraySize; i++)
                {
                    SerializedProperty entry = sortLayersProp.GetArrayElementAtIndex(i);
                    SerializedProperty t = entry.FindPropertyRelative("name");
                    if (t.stringValue.Equals(name)) { found = true; break; }
                }

                // if not found, add it
                if (!found)
                {
                    manager.ApplyModifiedProperties();
                    AddSortingLayer();
                    manager.Update();

                    int idx = sortLayersProp.arraySize - 1;
                    SerializedProperty entry = sortLayersProp.GetArrayElementAtIndex(idx);
                    SerializedProperty t = entry.FindPropertyRelative("name");
                    t.stringValue = name;
                }
            }

            // save
            manager.ApplyModifiedProperties();
        }

        // you need 'using System.Reflection;' for these
        private static Assembly editorAsm;
        private static MethodInfo AddSortingLayer_Method;

        /// <summary> add a new sorting layer with default name </summary>
        public static void AddSortingLayer()
        {
            if (AddSortingLayer_Method == null)
            {
                if (editorAsm == null) editorAsm = Assembly.GetAssembly(typeof(Editor));
                System.Type t = editorAsm.GetType("UnityEditorInternal.InternalEditorUtility");
                AddSortingLayer_Method = t.GetMethod("AddSortingLayer", (BindingFlags.Static | BindingFlags.NonPublic), null, new System.Type[0], null);
            }
            AddSortingLayer_Method.Invoke(null, null);
        }
    }
}
