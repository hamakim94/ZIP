using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

namespace Exoa.Designer
{
    public class SaveSystem
    {
        public enum Mode { FILE_SYSTEM, RESOURCES, ONLINE };
        public Mode mode;

        public static string defaultSubFolderName = null;
        public static string defaultFileToOpen = null;
        private string resourcesFolderLocation = "/Resources/";

        public string ResourcesFolderLocation { get => resourcesFolderLocation; set => resourcesFolderLocation = value; }

        public SaveSystem(Mode mode)
        {
            this.mode = mode;
        }



        [Serializable]
        public struct FileList
        {
            public List<string> list;
        }
        public static SaveSystem Create(Mode mode)
        {
            return new SaveSystem(mode);
        }
        public string GetBasePath(string subFolder)
        {
            string path = "";
            if (mode == Mode.RESOURCES)
                path = Application.dataPath;
            else
                path = Application.persistentDataPath + "/";

            if (!string.IsNullOrEmpty(subFolder))
                path += subFolder + "/";

            if (!Directory.Exists(path))
                Directory.CreateDirectory(path);

            return path;
        }
        public void RefreshUnityDB()
        {
#if UNITY_EDITOR
            UnityEditor.AssetDatabase.Refresh();
#endif
        }
        public T LoadFileItem<T>(string fileName, string subFolderName, Action<T> pCallback = null, string ext = ".json")
        {
            HDLogger.Log("LoadFileItem " + subFolderName + "/" + fileName, HDLogger.LogCategory.FileSystem);

            string json = LoadFileItem(fileName, subFolderName, null, ext);
            T p = JsonUtility.FromJson<T>(json);
            pCallback?.Invoke(p);
            return p;
        }
        public string LoadFileItem(string fileName, string subFolderName, Action<string> pCallback = null, string ext = ".json")
        {
            HDLogger.Log("LoadFileItem " + GetBasePath(subFolderName) + "/" + fileName, HDLogger.LogCategory.FileSystem);

            string content = null;

            try
            {
                if (mode == Mode.RESOURCES)
                {
                    TextAsset o = Resources.Load<TextAsset>(subFolderName + "/" + fileName);
                    content = o != null ? o.text : null;
                }
                else
                {
                    StreamReader stream = File.OpenText(GetBasePath(subFolderName) + fileName + ext);
                    content = stream.ReadToEnd();
                    stream.Close();
                }
            }
            catch (System.Exception e)
            {
                HDLogger.LogError("Error loading " + subFolderName + "/" + fileName + " " + e.Message, HDLogger.LogCategory.FileSystem);
                AlertPopup.ShowAlert("error", "Error", "Error loading " + subFolderName + "/" + fileName + " " + e.Message);
            }

            if (!string.IsNullOrEmpty(content))
                pCallback?.Invoke(content);

            return content;
        }

        public bool Exists(string fileName, string subFolderName, string ext = ".png")
        {
            bool exists = false;
            string path = null;
            if (mode == Mode.RESOURCES)
            {
                path = subFolderName + "/" + fileName;
                UnityEngine.Object o = Resources.Load(path);
                exists = o != null;
            }
            else
            {
                path = GetBasePath(subFolderName) + fileName + ext;
                exists = File.Exists(path);
            }
            HDLogger.Log("Exists " + path + " : " + exists, HDLogger.LogCategory.FileSystem);
            return exists;
        }

        public Texture2D LoadTextureItem(string fileName, string subFolderName, Action callback, string ext = ".png", int width = 100, int height = 100)
        {
            HDLogger.Log("LoadTextureItem " + fileName, HDLogger.LogCategory.FileSystem);
            Texture2D tex = null;

            if (mode == Mode.RESOURCES)
            {
                tex = Resources.Load<Texture2D>(subFolderName + "/" + fileName);
            }
            else
            {


                string path = GetBasePath(subFolderName) + fileName + ext;


                byte[] fileData;

                if (File.Exists(path))
                {
                    fileData = File.ReadAllBytes(path);
                    tex = new Texture2D(width, height);
                    tex.LoadImage(fileData);

                }
            }
            return tex;

        }

        public void SaveFileItem(string fileName, string subFolderName, string json, Action<string> pCallback = null)
        {
            byte[] bytes = Encoding.ASCII.GetBytes(json);
            SaveFileItem(fileName, subFolderName, bytes, pCallback);
        }
        public void SaveFileItem(string fileName, string subFolderName, byte[] bytes, Action<string> pCallback = null)
        {
            if (bytes == null)
            {
                HDLogger.LogWarning("Warning saving " + subFolderName + "/" + fileName + ", nothing to save (empty content)", HDLogger.LogCategory.FileSystem);

                return;
            }
            HDLogger.Log("SaveFileItem " + GetBasePath(subFolderName) + fileName, HDLogger.LogCategory.FileSystem);

            bool success = false;
            try
            {
                File.WriteAllBytes(GetBasePath(subFolderName) + fileName, bytes);

                if (mode == Mode.RESOURCES)
                {
                    RefreshUnityDB();
                }
                success = true;
            }
            catch (System.Exception e)
            {
                HDLogger.LogError("Error saving " + subFolderName + "/" + fileName + " " + e.Message, HDLogger.LogCategory.FileSystem);
                AlertPopup.ShowAlert("error", "Error", "Error loading " + subFolderName + "/" + fileName + " " + e.Message);
            }

            if (success)
                pCallback?.Invoke(fileName);

        }

        public void DeleteFileItem(string fileName, string subFolderName, Action pCallback = null, string ext = ".json")
        {
            HDLogger.Log("DeleteFileItem " + fileName, HDLogger.LogCategory.FileSystem);

            try
            {
                FileInfo fi = new FileInfo(GetBasePath(subFolderName) + fileName + ext);
                fi.Delete();

                pCallback?.Invoke();
            }
            catch (System.Exception e)
            {
                HDLogger.LogError("Error deleting " + subFolderName + "/" + fileName + " " + e.Message, HDLogger.LogCategory.FileSystem);
                AlertPopup.ShowAlert("error", "Error", e.Message);
            }
            RefreshUnityDB();
        }

        public void RenameFileItem(string fileName, string newName, string subFolderName, Action pCallback = null, string ext = ".json")
        {
            HDLogger.Log("RenameFileItem " + fileName + " " + newName, HDLogger.LogCategory.FileSystem);

            FileInfo fi = null;
            try
            {
                fi = new FileInfo(GetBasePath(subFolderName) + fileName + ext);
                fi.MoveTo(GetBasePath(subFolderName) + newName + ext);

                pCallback?.Invoke();
            }
            catch (System.Exception e)
            {
                AlertPopup.ShowAlert("error", "Error", e.Message);
                HDLogger.LogError("Error renaming " + subFolderName + "/" + fileName + " " + e.Message, HDLogger.LogCategory.FileSystem);
            }
            RefreshUnityDB();
        }

        public void CopyFileItem(string fileName, string newName, string subFolderName, Action pCallback = null, string ext = ".json")
        {
            HDLogger.Log("CopyFileItem " + fileName + " " + newName, HDLogger.LogCategory.FileSystem);

            FileInfo fi = null;
            try
            {
                fi = new FileInfo(GetBasePath(subFolderName) + fileName + ext);
                fi.CopyTo(GetBasePath(subFolderName) + newName + ext);

                pCallback?.Invoke();
            }
            catch (System.Exception e)
            {
                AlertPopup.ShowAlert("error", "Error", e.Message);
                HDLogger.LogError("Error copying " + subFolderName + "/" + fileName + " " + e.Message, HDLogger.LogCategory.FileSystem);
            }
            RefreshUnityDB();
        }


        public FileList ListFileItems(string subFolderName, Action<FileList> pCallback = null, string ext = "*.json")
        {
            FileList ll = new FileList();
            ll.list = new List<string>();

            if (mode == Mode.RESOURCES)
            {
                UnityEngine.Object[] files = Resources.LoadAll(subFolderName + "/");
                foreach (UnityEngine.Object o in files)
                {
                    ll.list.Add(o.name);
                }
            }
            else
            {


                DirectoryInfo dir = new DirectoryInfo(GetBasePath(subFolderName));
                FileInfo[] info = dir.GetFiles(ext);
                foreach (FileInfo f in info)
                {
                    ll.list.Add(f.Name);
                }
            }
            HDLogger.Log("ListFileItems " + GetBasePath(subFolderName) + ":" + ll.list.Count, HDLogger.LogCategory.FileSystem);

            pCallback?.Invoke(ll);
            return ll;
        }

    }
}
