using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryTabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject inventoryItem;
    private List<GameObject> itemGOList;
    private int currentPlacedIdx;

    private void OnEnable() {
        if (DataManager.Instance)
        {
            // 로드된 데이터 가져옴
            var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // 해당 위치에 있는 user item list (UserItemData type)

            itemGOList = new List<GameObject>(new GameObject[filteredUserItemData.Length]);

            for (int i = 0; i < filteredUserItemData.Length; i++)
            {
                var data = (UserItemData)filteredUserItemData[i];

                if (data.hasItemCode == 1) // 보유, 사용X
                {
                    // 아이템 만들기 
                    var listItem = Instantiate(this.inventoryItem, this.contents); // 게임 오브젝트의 복제본 생성 
                    var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                    var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                    inventoryListItem.Init(i, itemData.id, itemData.img, id, false, this);
                    itemGOList[i] = listItem;

                }
                else if (data.hasItemCode == 2) // 보유, 사용O
                {
                    // 아이템 만들기 
                    var listItem = Instantiate(this.inventoryItem, this.contents);
                    var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                    var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                    inventoryListItem.Init(i, itemData.id, itemData.img, id, true, this);
                    itemGOList[i] = listItem;
                    currentPlacedIdx = i;
                }
            }
        }
    }

    private void OnDisable()
    {
        Transform[] childlist = contents.gameObject.GetComponentsInChildren<Transform>();
        if (childlist != null)
        {
            for (int i = 1; i < childlist.Length; i++)
            {
                if (childlist[i] != transform)
                    Destroy(childlist[i].gameObject);
            }
        }
    }

    public void changeCurState(int idx)
    {
        itemGOList[currentPlacedIdx].GetComponent<InventoryListItem>().changeBtn(false);
        currentPlacedIdx = idx;
    } 
}
