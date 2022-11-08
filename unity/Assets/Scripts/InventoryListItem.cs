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
        // 데이터 넣기 
        var spriteName = atlas.GetSprite(img);
        imgIcon.sprite = spriteName;
        changeBtn(placed);
        tabButton = go;
        unplacedItemBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(idx, posId));
    }

    // 선택한 item만 배치, 나머지 배치X 
    private void OnClickButton(int idx, long posId)
    {
        Debug.Log("OnClickButton: " + idx + ", " + posId);
        tabButton.changeCurState(idx);

        target = GameObject.Find("SelectObject").transform.GetChild((int)posId-1);
        // 선택한 item 배치 
        if(target.childCount > 1)
        {
            Destroy(target.GetChild(1).gameObject);
        }
        changeBtn(true);

        var resource = Resources.Load("Prefabs/prefab1"); // 여기에 이제 가구이름으로 동적 생성하기.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // 부모 정해놓기

        // 이제 기존에 것 치우고 하는식으로 해보기.
    }

    /*// 선택한 item만 배치, 나머지 배치X 
    private void OnClickButton(int idx, long posId)
    {
        var itemList = DataManager.Instance.userItemDicData[posId];

        // 모든 item에 대해 배치X 
        for (int i = 0; i < itemList.Length; i++)
        {
            var item = (UserItemData)itemList[i];
            if (item.hasItemCode == 2)
            {

                changeBtn(false);
                break;
            }
        }

        // 선택한 item 배치 
        changeBtn(true);
    }*/

    public void changeBtn(Boolean placed)
    {
        placedItemBtn.SetActive(placed);
        unplacedItemBtn.SetActive(!placed);
    }
}
