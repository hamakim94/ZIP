using Exoa.Designer;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InteriorDesignerButton : MonoBehaviour
{
    private Button btn;
    public string sceneName = "HomeDesigner";

    void Start()
    {
        btn = GetComponent<Button>();
        btn.onClick.RemoveAllListeners();
        btn.onClick.AddListener(OnClickButton);
    }

    private void OnClickButton()
    {
#if INTERIOR_MODULE
        UISaving.instance.SaveAndExitToScene(sceneName);
#else
        AlertPopup ap = AlertPopup.ShowAlert("missingModule", "Module", "This section requires another plugin, its asset store page will open.");
        ap.OnClickOKEvent.AddListener(() =>
        {
            Application.OpenURL("https://assetstore.unity.com/packages/templates/systems/home-designer-realtime-interior-designer-178561");
        });

#endif
    }

}
