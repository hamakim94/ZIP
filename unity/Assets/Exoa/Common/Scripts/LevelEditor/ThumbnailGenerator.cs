using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

namespace Exoa.Designer
{
    public class ThumbnailGenerator : MonoBehaviour
    {
        public bool regenerate;
        public Color bgColor = new Color(0.3f, 0.3f, 0.3f, 0);
        public string outputPath = "/Exoa/HomeDesigner/Resources/Thumbnails/";

        void Start()
        {

            RuntimePreviewGenerator.BackgroundColor = bgColor;
            RuntimePreviewGenerator.MarkTextureNonReadable = false;
            GameObject[] prefabs = Resources.LoadAll<GameObject>(HDSettings.MODULES_FOLDER);
            foreach (GameObject prefab in prefabs)
            {
                Texture2D tex = RuntimePreviewGenerator.GenerateModelPreview(prefab.transform, 256, 256);

                try
                {
                    byte[] _bytes = tex.EncodeToPNG();
                    string path = Application.dataPath + outputPath + prefab.name + ".png";

                    if (File.Exists(path) && !regenerate)
                        continue;
                    File.WriteAllBytes(path, _bytes);
                }
                catch (Exception e) { print(e.Message); }
            }
#if UNITY_EDITOR
            AssetDatabase.Refresh();
#endif
        }

    }
}
