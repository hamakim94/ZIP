using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class RenderPipelineSwitcher : EditorWindow
{
    [MenuItem("Tools/Exoa/Render Pipeline Switcher")]
    public static void Open()
    {
        GetWindow<RenderPipelineSwitcher>();
    }

    protected string shaderError = "Hidden/InternalErrorShader";
    protected Vector2 scrollPosition = new Vector2(0, 0);

    protected List<string> errorMaterials = new List<string>();
    protected List<string> selectedMaterials = new List<string>();
    protected bool includeMaterialsWithErrors;


    void OnGUI()
    {
        EditorGUILayout.LabelField("Render Pipeline Switcher");

        if (GUILayout.Button("Switch Materials To Built-In"))
        {
            ReplaceShader("Exoa/Triplanar_URP", "Exoa/Triplanar_BuiltIn");
            ReplaceShader("Exoa/Triplanar_HDRP", "Exoa/Triplanar_BuiltIn");
            ReplaceShader("Exoa/VertexColor_URP", "Exoa/VertexColor_BuiltIn");
            ReplaceShader("Exoa/VertexColor_HDRP", "Exoa/VertexColor_BuiltIn");
            ReplaceShader("Exoa/Transparent_URP", "Exoa/Standard_BuiltIn");
            ReplaceShader("Exoa/Transparent_HDRP", "Exoa/Standard_BuiltIn");

            if (includeMaterialsWithErrors)
            {
                FindErrorMaterials();
                ReplaceShader(shaderError, "Exoa/Standard_BuiltIn");
            }
        }
        if (GUILayout.Button("Switch Materials To URP"))
        {
            ReplaceShader("Exoa/Triplanar_BuiltIn", "Exoa/Triplanar_URP");
            ReplaceShader("Exoa/Triplanar_HDRP", "Exoa/Triplanar_URP");
            ReplaceShader("Exoa/VertexColor_BuiltIn", "Exoa/VertexColor_URP");
            ReplaceShader("Exoa/VertexColor_HDRP", "Exoa/VertexColor_URP");
            ReplaceShader("Exoa/Standard_BuiltIn", "Exoa/Transparent_URP");
            ReplaceShader("Exoa/Transparent_HDRP", "Exoa/Transparent_URP");

            if (includeMaterialsWithErrors)
            {
                FindErrorMaterials();
                ReplaceShader(shaderError, "Exoa/Transparent_URP");
            }
        }
        if (GUILayout.Button("Switch Materials To HDRP"))
        {
            ReplaceShader("Exoa/Triplanar_BuiltIn", "Exoa/Triplanar_HDRP");
            ReplaceShader("Exoa/Triplanar_URP", "Exoa/Triplanar_HDRP");
            ReplaceShader("Exoa/VertexColor_BuiltIn", "Exoa/VertexColor_HDRP");
            ReplaceShader("Exoa/VertexColor_URP", "Exoa/VertexColor_HDRP");
            ReplaceShader("Exoa/Standard_BuiltIn", "Exoa/Transparent_HDRP");
            ReplaceShader("Exoa/Transparent_URP", "Exoa/Transparent_HDRP");

            if (includeMaterialsWithErrors)
            {
                FindErrorMaterials();
                ReplaceShader(shaderError, "Exoa/Transparent_HDRP");
            }
        }

        includeMaterialsWithErrors = GUILayout.Toggle(includeMaterialsWithErrors, "Include Materials with errors");
        EditorGUILayout.Space(20);

        if (GUILayout.Button("List all materials with errors"))
        {
            FindErrorMaterials();
            if (errorMaterials.Count == 0)
            {
                EditorUtility.DisplayDialog("Done!", "No material errors found", "Ok");
            }

        }
        scrollPosition = GUILayout.BeginScrollView(scrollPosition, GUIStyle.none);
        {
            for (int i = 0; i < errorMaterials.Count; i++)
            {
                GUILayout.BeginHorizontal();
                {
                    GUILayout.Label(Path.GetFileNameWithoutExtension(errorMaterials[i]));
                    GUILayout.FlexibleSpace();
                    if (GUILayout.Button("Show"))
                        EditorGUIUtility.PingObject(AssetDatabase.LoadAssetAtPath(errorMaterials[i], typeof(Material)));
                }
                GUILayout.EndHorizontal();
            }
        }

        GUILayout.EndScrollView();
    }

    private void FindErrorMaterials()
    {
        errorMaterials.Clear();

        string[] allMaterials = AssetDatabase.FindAssets("t:Material");

        for (int i = 0; i < allMaterials.Length; i++)
        {
            allMaterials[i] = AssetDatabase.GUIDToAssetPath(allMaterials[i]);
            Material mat = AssetDatabase.LoadAssetAtPath<Material>(allMaterials[i]);

            if (mat.shader.name == shaderError)
                errorMaterials.Add(allMaterials[i]);
        }
    }

    private void ReplaceShader(string shaderName, string newShaderName)
    {
        if (string.IsNullOrEmpty(shaderName) || string.IsNullOrEmpty(newShaderName))
            Debug.LogError("Shader name can not be empty");

        Shader s1 = Shader.Find(shaderName);
        Shader s2 = Shader.Find(newShaderName);

        if (s1 == null)
        {
            Debug.LogWarning("Could not find shader " + shaderName);
            return;
        }
        if (s2 == null)
        {
            Debug.LogWarning("Could not find shader " + newShaderName);
            return;
        }
        selectedMaterials.Clear();

        string shaderPath = AssetDatabase.GetAssetPath(Shader.Find(shaderName));
        string[] allMaterials = AssetDatabase.FindAssets("t:Material");

        for (int i = 0; i < allMaterials.Length; i++)
        {
            allMaterials[i] = AssetDatabase.GUIDToAssetPath(allMaterials[i]);
            string[] dep = AssetDatabase.GetDependencies(allMaterials[i]);
            //Debug.Log("allMaterials[i]:" + allMaterials[i]);
            Material mat = AssetDatabase.LoadAssetAtPath<Material>(allMaterials[i]);

            //Debug.Log("shader:" + mat.shader.name + " " + shaderName + " == " + (shaderName == mat.shader.name));
            if (mat.shader.name == shaderName)
            {
                //Debug.Log("     " + allMaterials[i] + " Contains:" + shaderPath);
                selectedMaterials.Add(allMaterials[i]);
            }
        }

        foreach (string materialPath in selectedMaterials)
        {
            Debug.Log("Changing:" + materialPath);
            Material mat = AssetDatabase.LoadAssetAtPath<Material>(materialPath);
            mat.shader = s2;
        }

        EditorUtility.DisplayDialog("Done!", $"{selectedMaterials.Count} " + shaderName + " materials replaced.", "Ok");

    }
}
