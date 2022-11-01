
using System.Diagnostics;
using System.IO;
using UnityEngine;

namespace Exoa.Designer
{
    public class FBXExporter
    {

        public static void ExportScene(string fileName, GameObject obj)
        {
#if UNITY_EDITOR && FBX_EXPORTER
            string folderPath = Path.Combine(Application.persistentDataPath, "Exports");
            string filePath = Path.Combine(folderPath, fileName + ".fbx");
            UnityEditor.Formats.Fbx.Exporter.ModelExporter.ExportObject(filePath, obj);
            Process.Start(folderPath);
#endif

        }
    }
}