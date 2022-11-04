using Exoa.Designer;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace Exoa.Designer.Utils
{
    public class ThumbnailGeneratorUtils
    {
        public static bool Exists(string filaName)
        {
            HDLogger.Log("Thumb Exists:" + filaName, HDLogger.LogCategory.Screenshot);
            if (SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).Exists(filaName, HDSettings.EXT_THUMBNAIL_FOLDER, ".png"))
                return true;
            if (SaveSystem.Create(SaveSystem.Mode.RESOURCES).Exists(filaName, HDSettings.EMBEDDED_THUMBNAIL_FOLDER, ".png"))
                return true;
            return false;
        }

        public static Texture2D Load(string filaName)
        {
            HDLogger.Log("Thumb Load:" + filaName, HDLogger.LogCategory.Screenshot);
            Texture2D extTex = SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).LoadTextureItem(filaName, HDSettings.EXT_THUMBNAIL_FOLDER, null, ".png");
            if (extTex == null)
                extTex = SaveSystem.Create(SaveSystem.Mode.RESOURCES).LoadTextureItem(filaName, HDSettings.EMBEDDED_THUMBNAIL_FOLDER, null, ".png");
            return extTex;
        }
        public static void TakeAndSaveScreenshot(Transform target, string filaName, bool orthographic, Vector3 direction)
        {
            RuntimePreviewGenerator.BackgroundColor = HDSettings.THUMBNAIL_BACKGROUND;
            RuntimePreviewGenerator.MarkTextureNonReadable = false;
            RuntimePreviewGenerator.OrthographicMode = orthographic;
            RuntimePreviewGenerator.PreviewDirection = direction;

            Texture2D tex = RuntimePreviewGenerator.GenerateModelPreview(target, 256, 256);

            try
            {
                byte[] _bytes = tex.EncodeToPNG();

                //Debug.Log("Saving Thumbnail path:" + filaName);

                SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).SaveFileItem(filaName, HDSettings.EXT_THUMBNAIL_FOLDER, _bytes);
            }
            catch (Exception e) { Debug.LogError(e.Message); }

#if UNITY_EDITOR
            AssetDatabase.Refresh();
#endif

        }

        public static void Duplicate(string v1, string v2)
        {
            try
            {
                SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).CopyFileItem(v1, v2, HDSettings.EXT_THUMBNAIL_FOLDER, null, ".png");
            }
            catch (Exception e) { Debug.LogError(e.Message); }

        }
    }
}
