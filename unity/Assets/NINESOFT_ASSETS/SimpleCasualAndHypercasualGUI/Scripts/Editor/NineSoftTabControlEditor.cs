
#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
[CustomEditor(typeof(NineSoftTabControl))]

public class NineSoftTabControlEditor : UnityEditor.Editor
{


    public override void OnInspectorGUI()
    {

        DrawDefaultInspector();

        NineSoftTabControl myTarget = (NineSoftTabControl)target;

        if (myTarget != null)
            if (GUILayout.Button("ADD TAB", GUILayout.Width(200), GUILayout.Height(50)))
            {
                myTarget.AddNewTab();
            }

    }


}
#endif