using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlusButton : MonoBehaviour
{
    Vector3 m_vecMouseDownPos;
    [SerializeField]
    private Camera c;
    [SerializeField]
    private GameObject inventoryPanel;

    [SerializeField]
    private long id;
    [SerializeField]
    private string pos;
    [SerializeField]
    private RectTransform contents;
    [SerializeField]
    private GameObject inventoryItem;
    [SerializeField]
    private GameObject closeButton;
    private List<GameObject> itemGOList;
    private int currentPlacedIdx;

    public void changeCurState(int idx)
    {
        itemGOList[currentPlacedIdx].GetComponent<InventoryListItem>().changeBtn(false);
        currentPlacedIdx = idx;
    }

    public void buttonOnClick()
    {
        inventoryPanel.SetActive(true);
        Ray ray = c.ScreenPointToRay(m_vecMouseDownPos);
        RaycastHit hit;
        var itemText = inventoryPanel.transform.GetChild(0).GetChild(0);
        // 광선으로 충돌된 collider를 hit에 넣습니다.
        if (Physics.Raycast(ray, out hit))
        {
            Debug.Log(hit.transform.position);
            c.GetComponent<FollowCamera>().enabled = false;
            c.transform.position = new Vector3(hit.transform.position.x - 0.52f, c.transform.position.y, hit.transform.position.z - 6.56f);
            c.transform.LookAt(hit.transform);
        }
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
        closeButton.GetComponent<Inventory>().contents = contents;
       
    }
}
 