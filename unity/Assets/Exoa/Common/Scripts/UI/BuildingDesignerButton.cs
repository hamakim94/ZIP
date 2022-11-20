using Exoa.Designer;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ProceduralToolkit;

public class BuildingDesignerButton : MonoBehaviour
{
    private Button btn;

    void Start()
    {
        btn = GetComponent<Button>();
        Image img = GetComponent<Image>();
        //TooltipHandler t = GetComponent<TooltipHandler>();
#if !BUILDING_MODULE
        //btn.enabled = false;
        img.color = img.color.WithA(.5f);
#endif
        btn.onClick.AddListener(OnClickButton);
    }

    private void OnClickButton()
    {
#if !BUILDING_MODULE
        AlertPopup.ShowAlert("missingModule", "Missing Module", "You need the Building Designer module to create multiple floors.");
#endif
    }

}
