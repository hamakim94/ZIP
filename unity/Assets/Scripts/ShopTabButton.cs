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
            // 로드된 데이터 가져옴
            var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // 해당 위치에 있는 user item list (UserItemData type)

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

                if (have) // 보유 
                {
                    // 아이템 만들기 
                    var listItem = Instantiate(this.shopItem, this.contents); // 게임 오브젝트의 복제본 생성 
                    // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
                    // 특정 하이어라키 위치에서 생성하기 위해 사용할 수 있다.
                    // 넣고 싶은 오브젝트를 두 번째 파라미터인 parent에 적어주면 복제 생성시 하위 자식으로 생성된다. 
                    var shopListItem = listItem.GetComponent<ShopListItem>();
                    var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                    shopListItem.Init(itemData.id, itemData.img, itemData.price, id, true);
                }
                else // 보유X
                {
                // 아이템 만들기 
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
