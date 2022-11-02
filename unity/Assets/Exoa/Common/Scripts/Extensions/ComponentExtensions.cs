using UnityEngine;
using System.Reflection;
using System;
using System.Collections.Generic;

public static class ComponentExtensions
{
    public static void GetComponentsInChildren<T>(this GameObject gameObject, List<T> components, bool includeThis = false, bool includeInactive = false)
    {
        if (components == null)
        {
            return;
        }
        if (includeThis)
        {
            List<T> list = new List<T>();
            gameObject.GetComponents<T>(list);
            foreach (T current in list)
            {
                if (!components.Contains(current))
                {
                    components.Add(current);
                }
            }
            //List.Release<T>(list);
        }
        Transform[] componentsInChildren = gameObject.GetComponentsInChildren<Transform>(includeInactive);
        if (componentsInChildren != null && componentsInChildren.Length != 0)
        {
            for (int i = 0; i < componentsInChildren.Length; i++)
            {
                Transform transform = componentsInChildren[i];
                if (!(transform == gameObject.transform))
                {
                    transform.GetComponentsInChildren(components, true, false);
                }
            }
        }
    }
    public static void GetComponentsInChildren<T>(this Component component, List<T> components, bool includeThis = false, bool includeInactive = false)
    {
        if (components == null)
        {
            return;
        }
        if (includeThis)
        {
            List<T> list = new List<T>();
            component.GetComponents<T>(list);
            foreach (T current in list)
            {
                if (!components.Contains(current))
                {
                    components.Add(current);
                }
            }
            //List.Release<T>(list);
        }
        Transform[] componentsInChildren = component.GetComponentsInChildren<Transform>(includeInactive);
        if (componentsInChildren != null && componentsInChildren.Length != 0)
        {
            for (int i = 0; i < componentsInChildren.Length; i++)
            {
                Transform transform = componentsInChildren[i];
                if (!(transform == component.transform))
                {
                    transform.GetComponentsInChildren(components, true, false);
                }
            }
        }
    }



    public static void DestroyUniversal(this Component current)
    {
#if UNITY_EDITOR
        if (UnityEditor.EditorApplication.isPlaying)
            GameObject.Destroy(current);
        else GameObject.DestroyImmediate(current);
#else
        GameObject.Destroy(current);
#endif
    }
    public static T GetCopyOf<T>(this Component comp, T other) where T : Component
    {
        Type type = comp.GetType();
        if (type != other.GetType())
            return null; // type mis-match
        BindingFlags flags = BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance | BindingFlags.Default | BindingFlags.DeclaredOnly;
        PropertyInfo[] pinfos = type.GetProperties(flags);
        foreach (var pinfo in pinfos)
        {
            if (pinfo.CanWrite)
            {
                try
                {
                    pinfo.SetValue(comp, pinfo.GetValue(other, null), null);
                }
                catch
                {
                } // In case of NotImplementedException being thrown. For some reason specifying that exception didn't seem to catch it, so I didn't catch anything specific.
            }
        }
        FieldInfo[] finfos = type.GetFields(flags);
        foreach (var finfo in finfos)
        {
            finfo.SetValue(comp, finfo.GetValue(other));
        }
        return comp as T;
    }
}
