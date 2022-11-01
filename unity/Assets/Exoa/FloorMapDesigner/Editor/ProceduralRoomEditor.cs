using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(ProceduralRoom))]
    public class ProceduralRoomEditor : Editor
    {
        // Start is called before the first frame update
        public override void OnInspectorGUI()
        {
            ProceduralRoom obj = target as ProceduralRoom;

            DrawDefaultInspector();

            if (GUILayout.Button("Generate"))
            {
                obj.Generate();
            }
        }

    }
}
