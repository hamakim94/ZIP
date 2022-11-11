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
        unplacedItemBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(idx, posId, id));
    }

    // 선택한 item만 배치, 나머지 배치X 
    private void OnClickButton(int idx, long posId, long id)
    {
        changeBtn(true);
        setFuniture(posId, id);
        // 이제 기존에 것 치우고 하는식으로 해보기.
    }
    public void setFuniture(long posId, long id)
    {
        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
        target = GameObject.Find("SelectObject").transform.GetChild((int)posId - 1);
        // 선택한 item 배치 
        if (target.childCount > 1)
        {
            target.GetChild(1).gameObject.SetActive(false);
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }
        var resource = Resources.Load("Prefabs/" + itemData.img); // 여기에 이제 가구이름으로 동적 생성하기.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // 부모 정해놓기
    }
    private void Update()
    {
        if (target) { 
        // 확인 버튼이라서 기존의 것 터트리기
        // 확인 버튼 눌렀을 때 사용하기 버튼 로직 넣기 ex changeCurState(idx), changeBtn(true)
        // 그런 의미로 confirm 패널을 여기서 좀 만져야할듯???
        if (Input.GetKeyDown(KeyCode.Q))
        {
                

            // target.childCount 로 처리하기
            Destroy(target.GetChild(1).gameObject);
        }
        // 취소버튼이라서 기존의 것 액티브 활성화하고 새로 만들었던 것 터트리기
        if (Input.GetKeyDown(KeyCode.W))
        {
            // target.childCount 로 처리하기
            target.GetChild(1).gameObject.SetActive(true);
            Destroy(target.GetChild(2).gameObject);
        }
        }
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
