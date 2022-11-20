using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public static class GameObjectExtensions
    {

        public static void DestroyUniversal(this GameObject current)
        {
            if (current == null) return;
            current.transform.SetParent(null);
#if UNITY_EDITOR
            if (UnityEditor.EditorApplication.isPlaying)
                GameObject.Destroy(current);
            else GameObject.DestroyImmediate(current);
#else
        GameObject.Destroy(current);
#endif
        }
        public static void ApplyLayerRecursively(this GameObject go, string layer)
        {
            Transform t = go.transform;
            go.layer = LayerMask.NameToLayer(layer);
            for (int i = 0; i < t.childCount; i++)
            {
                t.GetChild(i).gameObject.ApplyLayerRecursively(layer);
            }
        }


        public static Bounds GetBoundsRecursive(this GameObject go)
        {
            Bounds b = new Bounds();

            //Debug.Log("GetBoundsRecursive go: " + go);

            if (go == null)
                return b;

            List<Renderer> rList = go.GetComponentsInChildrenRecursive<Renderer>();

            //Debug.Log("GetBoundsRecursive list: " + rList.Count);

            if (rList.Count == 0)
                b.center = go.transform.position;
            else b.center = rList[0].bounds.center;

            foreach (Renderer r in rList)
            {
                //Debug.Log("Added Renderer bounds " + r.bounds);
                b.Encapsulate(r.bounds);
            }
            //Debug.Log("Final bounds " + b);
            return b;
        }


        public static List<T> GetComponentsInChildrenRecursive<T>(this GameObject topLevelGO) where T : Component
        {
            List<T> components = new List<T>();
            SearchForComponent_Helper<T>(topLevelGO, components);
            return (components);
        }

        private static void SearchForComponent_Helper<T>(GameObject _go, List<T> list) where T : Component
        {
            Transform t = _go.transform;
            int numChildren = t.childCount;

            if (numChildren > 0)
            {
                for (int i = 0; i < numChildren; i++)
                {
                    Transform child = t.GetChild(i);
                    SearchForComponent_Helper<T>(child.gameObject, list);
                }
            }

            T component = _go.GetComponent<T>(); //Something is going wrong here?

            if (component != null)
            {
                //Debug.Log("Adding " + component + " from " + _go.name);
                list.Add(component);
            }
        }

    }
}
