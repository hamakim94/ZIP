using UnityEditor;
using UnityEngine;

namespace Exoa.Designer
{
    [CustomEditor(typeof(FloorMapLoadByName))]
    public class FloorMapLoadByNameEditor : Editor
    {
        // Start is called before the first frame update
        public override void OnInspectorGUI()
        {
            FloorMapLoadByName obj = target as FloorMapLoadByName;

            DrawDefaultInspector();

            if (GUILayout.Button("Pre bake"))
            {
                obj.LoadFile(obj.fileName);
                obj.buildAtStart = false;
            }
            if (GUILayout.Button("Clear"))
            {
                obj.Clear();
            }
        }

    }
}
