using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryTabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject inventoryItem;
    /*public GameObject placedItem;
    public GameObject unplacedItem;*/


    void Start()
    {
        // 로드된 데이터 가져옴
        var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // 해당 위치에 있는 user item list (UserItemData type)


        for (int i = 0; i < filteredUserItemData.Length; i++)
        {
            var data = (UserItemData)filteredUserItemData[i];

            if (data.hasItemCode == 1) // 보유, 사용X
            {
                // 아이템 만들기 
                var listItem = Instantiate(this.inventoryItem, this.contents); // 게임 오브젝트의 복제본 생성 
                var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, false);
            }
            else if (data.hasItemCode == 2) // 보유, 사용O
            {
                // 아이템 만들기 
                var listItem = Instantiate(this.inventoryItem, this.contents);
                var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, true);
            }
        }
    }
}
