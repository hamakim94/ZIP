using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using UnityEngine.U2D;

public class InventoryUnplacedListItem : MonoBehaviour
{
    public Image imgIcon;
    public SpriteAtlas atlas;
    public Button itemButton;

    public void Init(long id, string img, long posId)
    {
        // ������ �ֱ� 
        var spriteName = atlas.GetSprite(img);
        this.imgIcon.sprite = spriteName;

        this.itemButton.onClick.AddListener(() => OnClickButton(id, posId));
    }

    public void OnClickButton(long itemId, long posId)
    {
        // ��ġ�ϱ�
        Debug.Log("inventoryitem OnClickButton: " + itemId + ", " + posId);
    }
}
