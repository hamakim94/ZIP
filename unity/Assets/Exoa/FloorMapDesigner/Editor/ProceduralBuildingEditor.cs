using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralBuilding))]
    public class ProceduralBuildingEditor : Editor
    {
        // Start is called before the first frame update
        public override void OnInspectorGUI()
        {
            ProceduralBuilding obj = target as ProceduralBuilding;

            DrawDefaultInspector();

            if (GUILayout.Button("Generate"))
            {
                obj.Generate();
            }
        }

    }
}
