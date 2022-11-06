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
        // �ε�� ������ ������
        var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)


        for (int i = 0; i < filteredUserItemData.Length; i++)
        {
            var data = (UserItemData)filteredUserItemData[i];

            if (data.hasItemCode == 1) // ����, ���X
            {
                // ������ ����� 
                var listItem = Instantiate(this.inventoryItem, this.contents); // ���� ������Ʈ�� ������ ���� 
                var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, false);
            }
            else if (data.hasItemCode == 2) // ����, ���O
            {
                // ������ ����� 
                var listItem = Instantiate(this.inventoryItem, this.contents);
                var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, true);
            }
        }

        /*for (int i=0; i<filteredUserItemData.Length; i++)
        {
            var data = (UserItemData)filteredUserItemData[i]; 

            if(data.hasItemCode == 1) // ����, ���X
            {
                // ������ ����� 
                var listItem = Instantiate(this.unplacedItem, this.contents); // ���� ������Ʈ�� ������ ���� 
                var inventoryListItem = listItem.GetComponent<InventoryUnplacedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img, id);
            } else if(data.hasItemCode == 2) // ����, ���O
            {
                // ������ ����� 
                var listItem = Instantiate(this.placedItem, this.contents);
                var inventoryListItem = listItem.GetComponent<InventoryPlacedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                inventoryListItem.Init(itemData.id, itemData.img);
            }
        }*/





       /* var filteredItemData = DataManager.Instance.totalItemDicData[id];  

        for (int i = 0; i < filteredItemData.Length; i++)
        {
            var data = (ItemData)filteredItemData[i];

            var listItem = Instantiate(this.item, this.contents); // ���� ������Ʈ�� ������ ���� 
            // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
            // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
            // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 

            // ������ ����� 
            var shopListItem = listItem.GetComponent<ShopListItem>();
            shopListItem.Init(data.id, data.img, data.price);
        }*/
    }


    /*public void OnClickButton()
    {
        Debug.Log("TabButton: " + id + ", " + pos);

    }*/
}
