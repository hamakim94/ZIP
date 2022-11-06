using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using UnityEngine.U2D;

public class InventoryListItem : MonoBehaviour
{
    public Image imgIcon;
    public SpriteAtlas atlas;
    public GameObject placedItemBtn;
    public GameObject unplacedItemBtn;

    public void Init(long id, string img, Boolean placed)
    {
        // ������ �ֱ� 
        var spriteName = atlas.GetSprite(img);
        this.imgIcon.sprite = spriteName;

        placedItemBtn.SetActive(placed);
        unplacedItemBtn.SetActive(!placed);
    }
}
