using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;

public class ShopListItem : MonoBehaviour
{
    public Image imgIcon;
    public TMP_Text priceText;
    public Button itemButton;
    
    public void Init(long id, string img, int price)
    {
        var testUGUI = GameObject.FindObjectOfType<TestUGUI>(); // 좋은 방법은 아님 

        // 데이터 넣기 
        var spriteName = testUGUI.atlas.GetSprite(img);
        this.imgIcon.sprite = spriteName;
        this.priceText.text = price.ToString();
    }
}
