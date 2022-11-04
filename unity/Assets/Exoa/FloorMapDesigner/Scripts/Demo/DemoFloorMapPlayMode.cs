using Exoa.Designer;
using Exoa.Events;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DemoFloorMapPlayMode : MonoBehaviour
{
    private TMP_Dropdown dp;
    private Button loadBtn;
    public GameObject prefab;

    void Start()
    {
        dp = GetComponentInChildren<TMP_Dropdown>();
        loadBtn = GetComponentInChildren<Button>();
        loadBtn?.onClick.AddListener(OnClickLoad);

        //Loading the list of floor maps previously created with the editor scene
        SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).ListFileItems(HDSettings.EXT_FLOORMAP_FOLDER, OnFloorMapsFound);
    }

    private void OnFloorMapsFound(SaveSystem.FileList fileList)
    {
        for (int i = 0; i < fileList.list.Count; i++)
        {
            dp.options.Add(new TMP_Dropdown.OptionData(fileList.list[i].Replace(".json", "")));
        }
    }

    private void OnClickLoad()
    {
        if (dp.value == 0)
            return;

        string floormapName = dp.FindDropdownValue();

        // This is just the code you're looking for:
        // Creating the prefab instance and loading the json file
        GameObject inst = Instantiate(prefab);

        // Load the floor map json file
        FloorMapLoadByName f = inst.GetComponent<FloorMapLoadByName>();
        f.LoadFile(floormapName);

        // Place the floor map in a random postion and rotation
        inst.transform.position = new Vector3(UnityEngine.Random.Range(-20, 20), 0, UnityEngine.Random.Range(-20, 20));
        inst.transform.rotation = Quaternion.Euler(0, UnityEngine.Random.Range(0, 360), 0);


        // Focus the camera on that new object
        CameraEvents.OnRequestObjectFocus?.Invoke(inst, true);

    }

}
