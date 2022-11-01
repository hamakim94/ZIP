using Exoa.Designer;
using Exoa.Events;
using System;
using UnityEngine;

public class FloorMapLoadByName : MonoBehaviour
{
    public string fileName;
    public bool buildAtStart;

    void Start()
    {
        if (buildAtStart && !string.IsNullOrEmpty(fileName))
        {
            LoadFile(fileName);
        }
    }

    public void LoadFile(string fileName)
    {
        if (AppController.Instance == null)
        {
            AppController.Instance = GetComponent<AppController>();
        }
        if (!string.IsNullOrEmpty(fileName))
        {
            FloorMapReader dataReader = GetComponent<FloorMapReader>();
            dataReader.ReplaceAndLoad(fileName, true);

        }
    }

    public void Clear()
    {
        FloorMapReader dataReader = GetComponent<FloorMapReader>();
        dataReader.Clear();
    }
}
