using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopTabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject shopItem;
    public RawData[] totalItemData;

    private void OnEnable()
    {
        if(DataManager.Instance) {
            var totalItemData = DataManager.Instance.totalItemDicData[id];
            // �ε�� ������ ������
            var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)

            for (int i = 0; i < totalItemData.Length; i++)
            {
                var data = (ItemData)totalItemData[i];
                var have = false;

                for (int j = 0; j < filteredUserItemData.Length; j++)
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
                    var listItem = Instantiate(this.shopItem, this.contents); // ���� ������Ʈ�� ������ ���� 
                    // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
                    // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
                    // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 
                    var shopListItem = listItem.GetComponent<ShopListItem>();
                    var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                    shopListItem.Init(itemData.id, itemData.img, itemData.price, id, true);
                }
                else // ����X
                {
                // ������ ����� 
                    var listItem = Instantiate(this.shopItem, this.contents);
                    var shopListItem = listItem.GetComponent<ShopListItem>();
                    var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                    shopListItem.Init(itemData.id, itemData.img, itemData.price, id, false);
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
}
