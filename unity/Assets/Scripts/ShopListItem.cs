using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using UnityEngine.U2D;

public class ShopListItem : MonoBehaviour
{
    public Image imgIcon;
    public TMP_Text priceText;
    public SpriteAtlas atlas;
    public GameObject ownedBtn;
    public GameObject unownedBtn;

    public void Init(long id, string img, int price, long posId, Boolean isOwned)
    {
        // 데이터 넣기 
        var spriteName = atlas.GetSprite(img);
        this.imgIcon.sprite = spriteName;
        this.priceText.text = price.ToString();

        unownedBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(id, posId));

        changeBtn(isOwned);
    }

    public void OnClickButton(long itemId, long posId)
    {
        // 구매 api 연동
        Debug.Log("shopitem OnClickButton: " + itemId + ", " + posId);

        changeBtn(true);
    }

    public void changeBtn(Boolean isOwned)
    {

        ownedBtn.SetActive(isOwned);
        unownedBtn.SetActive(!isOwned);
    }
}
