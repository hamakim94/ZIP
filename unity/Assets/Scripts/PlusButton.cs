using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlusButton : MonoBehaviour
{
    Vector3 m_vecMouseDownPos;
    [SerializeField]
    private Camera c;
    private GameObject furniturePanel;
    [SerializeField]
    private long id;
    [SerializeField]
    private RectTransform contents;
    [SerializeField]
    private GameObject inventoryItem;
    [SerializeField]
    private GameObject closeButton;
    [SerializeField]
    private GameObject obj;
    private List<GameObject> itemGOList;
    private int currentPlacedIdx;
    /*private GameObject canvas;*/


    private void Start()
    {
        /*canvas = GameObject.Find("Canvas");
        Debug.Log("canvas: " + canvas);*/
        /*Debug.Log(transform.parent.parent);*/
        furniturePanel = transform.parent.parent.Find("FurniturePanel").gameObject;
    }

    public void changeCurState(int idx)
    {
        itemGOList[currentPlacedIdx].GetComponent<InventoryListItem>().changeBtn(false);
        currentPlacedIdx = idx;
    }

    public void buttonOnClick()
    {
        furniturePanel.GetComponent<FurniturePanel>().SetPosId(id);
        furniturePanel.SetActive(false);
        furniturePanel.SetActive(true);
        /*Ray ray = c.ScreenPointToRay(m_vecMouseDownPos);
        RaycastHit hit;
        var itemText = furniturePanel.transform.GetChild(0).GetChild(0);
        // 광선으로 충돌된 collider를 hit에 넣습니다.
        var childObj = obj.transform.GetChild((int)id - 1);
        childObj.GetChild(0).gameObject.SetActive(true);
        closeButton.GetComponent<Inventory>().getObj(childObj);
        c.GetComponent<FollowCamera>().enabled = false;
        c.transform.position = new Vector3(childObj.position.x - 0.52f, c.transform.position.y, childObj.position.z - 6.56f);
        c.transform.LookAt(childObj);
        if (DataManager.Instance)
        {
            // 로드된 데이터 가져옴
            if (DataManager.Instance.userItemDicData.ContainsKey(id))
            {
                itemText.gameObject.SetActive(false);
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
            else
            {
                itemText.gameObject.SetActive(true);
            }
        }
        closeButton.GetComponent<Inventory>().contents = contents;*/
       
    }
}
 