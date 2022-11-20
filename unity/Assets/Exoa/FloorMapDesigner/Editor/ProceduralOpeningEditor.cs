using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralOpening))]
    public class ProceduralOpeningEditor : Editor
    {
        // Start is called before the first frame update
        public override void OnInspectorGUI()
        {
            ProceduralOpening obj = target as ProceduralOpening;

            DrawDefaultInspector();

            if (GUILayout.Button("Generate"))
            {
                obj.Generate();
            }
        }

    }
}
