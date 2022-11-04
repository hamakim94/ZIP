using System;
using System.Collections.Generic;
using UnityEngine;

public static class ListExtensions
{
    public static string Dump(this List<string> s)
    {
        string str = "";
        if (s == null || s.Count == 0) return str;
        for (int i = 0; i < s.Count; i++) str += s[i] + ", ";
        return str.Substring(0, str.Length - 2);
    }

    public static string Dump(this List<Vector3> s)
    {
        string str = "";
        if (s == null || s.Count == 0) return str;
        for (int i = 0; i < s.Count; i++) str += i + ":" + s[i].ToString() + " ";
        return str;
    }

    public static string Dump(this List<Vector2> s)
    {
        string str = "";
        if (s == null || s.Count == 0) return str;
        for (int i = 0; i < s.Count; i++) str += i + ":" + s[i].ToString() + " ";
        return str;
    }
    public static string Dump(this Vector3[] s)
    {
        string str = "";
        if (s == null || s.Length == 0) return str;
        for (int i = 0; i < s.Length; i++) str += i + ":" + s[i].ToString() + " ";
        return str;
    }
    public static string Dump(this Vector2[] s)
    {
        string str = "";
        if (s == null || s.Length == 0) return str;
        for (int i = 0; i < s.Length; i++) str += i + ":" + s[i].ToString() + " ";
        return str;
    }

    public static List<string> ReplaceText(this List<string> Source, string find, string replace)
    {
        for (int i = 0; i < Source.Count; i++)
            Source[i] = Source[i].Replace(find, replace);
        return Source;
    }
    public static void MoveUp<T>(this List<T> Source, T item)
    {
        int ind = Source.IndexOf(item);
        if (ind != 0)
        {
            Source.RemoveAt(ind);
            Source.Insert(ind - 1, item);
        }
    }

    public static void MoveDown<T>(this List<T> Source, T item)
    {
        int ind = Source.IndexOf(item);
        if (ind != Source.Count - 1)
        {
            Source.RemoveAt(ind);
            Source.Insert(ind + 1, item);
        }
    }

    public static List<T> Splice<T>(this List<T> Source, int Start, int Size)
    {
        List<T> retVal = Source.GetRange(Start, Size);
        Source.RemoveRange(Start, Size);
        return retVal;
    }
    public static void Shuffle<T>(this IList<T> list)
    {
        System.Random rng = new System.Random();
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = rng.Next(n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }
}
