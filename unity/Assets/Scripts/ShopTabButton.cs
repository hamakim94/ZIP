using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopTabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject item;
    public GameObject ownedItem;

    void Start()
    {
        var totalItemData = DataManager.Instance.totalItemDicData[id];
        // �ε�� ������ ������
        var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)
        
        for(int i=0; i<totalItemData.Length; i++)
        {
            var data = (ItemData)totalItemData[i];
            var have = false; 

            for(int j=0; j<filteredUserItemData.Length; j++)
            {
                if (data.id == filteredUserItemData[j].id)
                {
                    have = true;
                    break;
                }
            }

            if (have) // ���� 
            {
                // ������ ����� 
                var listItem = Instantiate(this.ownedItem, this.contents); // ���� ������Ʈ�� ������ ���� 
                // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
                // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
                // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 
                var shopListItem = listItem.GetComponent<ShopOwnedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                shopListItem.Init(itemData.id, itemData.img);
            } else // ����X
            {
                // ������ ����� 
                var listItem = Instantiate(this.item, this.contents); 
                var shopListItem = listItem.GetComponent<ShopListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                shopListItem.Init(itemData.id, itemData.img, itemData.price, id);
            }
        }

        /*for(int i=0; i<filteredUserItemData.Length; i++)
        {
            var data = (UserItemData)filteredUserItemData[i]; 

            if(data.hasItemCode == 0) // �̺��� 
            {
                // ������ ����� 
                var listItem = Instantiate(this.item, this.contents); // ���� ������Ʈ�� ������ ���� 
                // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
                // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
                // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 
                var shopListItem = listItem.GetComponent<ShopListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                shopListItem.Init(itemData.id, itemData.img, itemData.price, id);
            } else // ����
            {
                // ������ ����� 
                var listItem = Instantiate(this.ownedItem, this.contents);
                var shopListItem = listItem.GetComponent<ShopOwnedListItem>();
                var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                shopListItem.Init(itemData.id, itemData.img);
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
