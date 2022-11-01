using Exoa.Designer;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FloorMapButton : MonoBehaviour
{
    private Button btn;
    public string sceneName = "FloorMapEditor";

    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.RemoveAllListeners();
        btn.onClick.AddListener(OnClickButton);
    }

    private void OnClickButton()
    {
#if FLOORMAP_MODULE
        UISaving.instance.SaveAndExitToScene(sceneName);
#else
        AlertPopup ap = AlertPopup.ShowAlert("missingModule", "Module", "This section requires another plugin, its asset store page will open.");
        ap.OnClickOKEvent.AddListener(() =>
        {
            Application.OpenURL("https://assetstore.unity.com/packages/tools/level-design/floor-map-designer-realtime-procedural-rooms-editor-197077");
        });
#endif
    }

}
