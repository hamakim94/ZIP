using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FurniturePanel : MonoBehaviour
{
    public RectTransform contents;
    public GameObject furnitureItem;
    public Camera mainCamera;
    private long posId;
    private ItemData usedItem; 
    private ArrayList ownedItemList;
    private ArrayList lockedItemList;
    private bool isStarted = false;
    public static int idx;

    void Start()
    {
        isStarted = true;
        gameObject.SetActive(false);
    }

    private void OnEnable()
    {
        if (isStarted && DataManager.Instance)
        {
            idx = 0;
            usedItem = null;
            ownedItemList = new ArrayList();
            lockedItemList = new ArrayList();
            // 로드된 데이터 가져옴
            var totalItemData = DataManager.Instance.totalItemDicData[posId];
            RawData[] filteredUserItemData; // 해당 위치에 있는 user item list (UserItemData type)

            if (DataManager.Instance.userItemDicData.ContainsKey(posId))
            {
                filteredUserItemData = DataManager.Instance.userItemDicData[posId];
            } else
            {
                filteredUserItemData = new RawData[] { };
            }


            // 0, 1, 2 
            // 0: 보유X 
            // 1: 보유O, 사용X 
            // 2: 보유O, 사용O
            // 데이터 모으기 
            for (var i=0; i<totalItemData.Length; i++) // 해당 위치의 item 다 돌면서 
            {
                var data = (ItemData)totalItemData[i];                
                int hasItemCode = 0; 

                for (var j = 0; j < filteredUserItemData.Length; j++) // 가지고 있는지 확인
                {
                    if(data.id == filteredUserItemData[j].id) // 가지고 있는 경우 
                    {
                        hasItemCode = ((UserItemData)filteredUserItemData[j]).hasItemCode;
                        break; 
                    }
                }

                if (hasItemCode == 0) // 보유X 
                {
                    lockedItemList.Add(data);
                } else if(hasItemCode == 1) // 보유O, 사용X 
                {
                    ownedItemList.Add(data);
                } else // hasItemCode == 2 // 보유O, 사용O
                {
                    usedItem = data;
                }
            }

            GameObject listItem;
            FurnitureItem furnitureItem; 

            // 순차적으로 게임 오브젝트 복제본 생성 
            // 사용중인 가구 아이템
            if (usedItem != null)
            {
                listItem = Instantiate(this.furnitureItem, this.contents);
                furnitureItem = listItem.GetComponent<FurnitureItem>();
                furnitureItem.Init(usedItem.id, posId, usedItem.img, usedItem.name, usedItem.price, 2);
            }

            // 보유중인 가구 아이템 
            for(var i=0; i<ownedItemList.Count; i++)
            {
                listItem = Instantiate(this.furnitureItem, this.contents);
                furnitureItem = listItem.GetComponent<FurnitureItem>();
                var ownedItem = (ItemData)ownedItemList[i];
                furnitureItem.Init(ownedItem.id, posId, ownedItem.img, ownedItem.name, ownedItem.price, 1);
            }

            // 잠겨있는 가구 아이템 
            for (var i = 0; i < lockedItemList.Count; i++)
            {
                listItem = Instantiate(this.furnitureItem, this.contents);
                furnitureItem = listItem.GetComponent<FurnitureItem>();
                var lockedItem = (ItemData)lockedItemList[i];
                furnitureItem.Init(lockedItem.id, posId, lockedItem.img, lockedItem.name, lockedItem.price, 0);
            }



            /*var listItem = Instantiate(this.shopItem, this.contents);*/ // 게임 오브젝트의 복제본 생성 
                                                                          // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
                                                                          // 특정 하이어라키 위치에서 생성하기 위해 사용할 수 있다.
                                                                          // 넣고 싶은 오브젝트를 두 번째 파라미터인 parent에 적어주면 복제 생성시 하위 자식으로 생성된다. 
            /*var shopListItem = listItem.GetComponent<ShopListItem>();*/
            /*var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

            shopListItem.Init(itemData.id, itemData.img, itemData.price, id, true);*/
        }
    }

    private void OnDisable()
    {
        mainCamera.gameObject.transform.GetComponent<FollowCamera>().enabled = true;
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

    public void SetPosId(long posId)
    {
        this.posId = posId;
    }
}
