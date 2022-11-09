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
    public Transform target;
    private PlusButton tabButton;

    public void Init(int idx, long id, string img, long posId, Boolean placed, PlusButton go)
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

        target = GameObject.Find("SelectObject").transform.GetChild((int)posId-1);
        // ������ item ��ġ 
        if(target.childCount > 1)
        {
            Destroy(target.GetChild(1).gameObject);
        }
        changeBtn(true);

        var resource = Resources.Load("Prefabs/prefab1"); // ���⿡ ���� �����̸����� ���� �����ϱ�.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // �θ� ���س���

        // ���� ������ �� ġ��� �ϴ½����� �غ���.
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
