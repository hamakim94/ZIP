using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralArea))]
    public class ProceduralAreaEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            ProceduralArea obj = target as ProceduralArea;

            DrawDefaultInspector();

            if (GUILayout.Button("Generate"))
            {
                obj.Generate();
            }
        }
    }
}
