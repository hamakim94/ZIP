using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor.UIElements;

/// <summary>
/// Class UIElementsExpansionsDocuments.
/// </summary>
public class HomeDesignerWelcomeScreen : EditorWindow
{
    /// <summary>
    /// Show the EditorWindow window.
    /// </summary>
    [MenuItem("Tools/Exoa/Home Designer - Welcome Screen", false, 151)]
    public new static void Show()
    {
        HomeDesignerWelcomeScreen wnd = GetWindow<HomeDesignerWelcomeScreen>();
        wnd.titleContent = new GUIContent("Home Designer - Welcome Screen");
        EditorPrefs.SetBool("HDWS_IsHidden", true);
    }

    private void OnEnable()
    {
        this.ApplyStyle();
        Toggle toggle = this.rootVisualElement.Q<Toggle>("not_show_at_startup");
        if (toggle == null) return;
        toggle.style.display = DisplayStyle.None;
        toggle.value = EditorPrefs.HasKey("HDWS_IsHidden");
        toggle.RegisterValueChangedCallback((evt) =>
        {
            if (evt.newValue) EditorPrefs.SetBool("HDWS_IsHidden", true);
            else EditorPrefs.DeleteKey("HDWS_IsHidden");
        });
    }

    [InitializeOnLoadMethod]
    static void ShowOnInitialize()
    {
        if (EditorPrefs.HasKey("HDWS_IsHidden")) return;
        EditorApplication.delayCall += Show;
    }
}