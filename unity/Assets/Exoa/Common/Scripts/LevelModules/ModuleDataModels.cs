using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer.Data
{
    public class ModuleDataModels
    {
        public static ModuleList cachedModuleList;
        [Serializable]
        public struct LevelList
        {
            public List<string> list;
        }

        [Serializable]
        public class Module
        {
            [SerializeField] public string prefab; // the module prefab name
            [SerializeField] public int id; // a unique id (optional)
            [SerializeField] public string sku; // SKU (optional)
            [SerializeField] public string type; // object's type (optional)
            [SerializeField] public float price; // object's price (optional)
            [SerializeField] public string title; // object's title (optional)
            [SerializeField] public string description; // object's description (optional)

            public Module(string prefab, string title)
            {
                this.prefab = prefab;
                this.title = title;
            }
        }

        [Serializable]
        public struct ModuleList
        {
            public List<Module> modules;
        }

        [Serializable]
        public struct SubmissionsItem
        {
            public Module Module;
            public int quantity;

            public SubmissionsItem(Module p, int quantity) : this()
            {
                this.Module = p;
                this.quantity = quantity;
            }
        }

        public static void GetAllModules(Action<ModuleList> pCallback = null)
        {
            TextAsset asset = Resources.Load<TextAsset>(HDSettings.MODULES_JSON);
            if (asset == null)
                return;

            cachedModuleList = JsonUtility.FromJson<ModuleList>(asset.text);
            //Debug.Log("GetAllModules " + cachedModuleList.modules.Length);
            pCallback?.Invoke(cachedModuleList);
        }
    }
}
