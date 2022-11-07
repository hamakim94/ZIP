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
    private InventoryTabButton tabButton;

    public void Init(int idx, long id, string img, long posId, Boolean placed, InventoryTabButton go)
    {
        // ������ �ֱ� 
        var spriteName = atlas.GetSprite(img);
        imgIcon.sprite = spriteName;
        changeBtn(placed);
        tabButton = go;
        unplacedItemBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(idx, posId));
    }

    // ������ item�� ��ġ, ������ ��ġX 
    private void OnClickButton(int idx, long posId)
    {
        Debug.Log("OnClickButton: " + idx + ", " + posId);
        tabButton.changeCurState(idx);
        // ������ item ��ġ 
        changeBtn(true);
    }

    /*// ������ item�� ��ġ, ������ ��ġX 
    private void OnClickButton(int idx, long posId)
    {
        var itemList = DataManager.Instance.userItemDicData[posId];

        // ��� item�� ���� ��ġX 
        for (int i = 0; i < itemList.Length; i++)
        {
            var item = (UserItemData)itemList[i];
            if (item.hasItemCode == 2)
            {

                changeBtn(false);
                break;
            }
        }

        // ������ item ��ġ 
        changeBtn(true);
    }*/

    public void changeBtn(Boolean placed)
    {
        placedItemBtn.SetActive(placed);
        unplacedItemBtn.SetActive(!placed);
    }
}
