using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralOutside))]
    public class ProceduralOutsideEditor : Editor
    {
        // Start is called before the first frame update
        public override void OnInspectorGUI()
        {
            ProceduralOutside obj = target as ProceduralOutside;

            DrawDefaultInspector();

            if (GUILayout.Button("Generate"))
            {
                obj.Generate();
            }
        }

    }
}
