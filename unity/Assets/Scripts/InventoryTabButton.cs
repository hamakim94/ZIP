using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryTabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject placedItem;
    public GameObject unplacedItem;


    void Start()
    {
        // 로드된 데이터 가져옴
        var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // 해당 위치에 있는 user item list (UserItemData type)

        for(int i=0; i<filteredUserItemData.Length; i++)
        {
            var data = (UserItemData)filteredUserItemData[i]; 

            if(data.hasItemCode == 1) // 보유, 사용X
            {
                // 아이템 만들기 
                var listItem = Instantiate(this.unplacedItem, this.contents); // 게임 오브젝트의 복제본 생성 
                var inventoryListItem = listItem.GetComponent<InventoryUnplacedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, id);
            } else if(data.hasItemCode == 2) // 보유, 사용O
            {
                // 아이템 만들기 
                var listItem = Instantiate(this.placedItem, this.contents);
                var inventoryListItem = listItem.GetComponent<InventoryPlacedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img);
            }
        }

       /* var filteredItemData = DataManager.Instance.totalItemDicData[id];  

        for (int i = 0; i < filteredItemData.Length; i++)
        {
            var data = (ItemData)filteredItemData[i];

            var listItem = Instantiate(this.item, this.contents); // 게임 오브젝트의 복제본 생성 
            // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
            // 특정 하이어라키 위치에서 생성하기 위해 사용할 수 있다.
            // 넣고 싶은 오브젝트를 두 번째 파라미터인 parent에 적어주면 복제 생성시 하위 자식으로 생성된다. 

            // 아이템 만들기 
            var shopListItem = listItem.GetComponent<ShopListItem>();
            shopListItem.Init(data.id, data.img, data.price);
        }*/
    }


    /*public void OnClickButton()
    {
        Debug.Log("TabButton: " + id + ", " + pos);

    }*/
}
