using UnityEngine;
using UnityEditor;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralRoofTop))]
    public class ProceduralRoofTopEditor : Editor
    {
        private ProceduralRoofTop generator;

        private void OnEnable()
        {
            generator = (ProceduralRoofTop)target;
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            EditorGUILayout.Space();
            if (GUILayout.Button("Generate Roof"))
            {
                generator.Clear();
                generator.Generate();
                GameObject go = generator.Render();
                Undo.RegisterCreatedObjectUndo(go, "Generate building");
            }
        }
    }
}
