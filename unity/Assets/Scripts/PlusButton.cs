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
        // �������� �浹�� collider�� hit�� �ֽ��ϴ�.
        var childObj = obj.transform.GetChild((int)id - 1);
        childObj.GetChild(0).gameObject.SetActive(true);
        closeButton.GetComponent<Inventory>().getObj(childObj);
        c.GetComponent<FollowCamera>().enabled = false;
        c.transform.position = new Vector3(childObj.position.x - 0.52f, c.transform.position.y, childObj.position.z - 6.56f);
        c.transform.LookAt(childObj);
        if (DataManager.Instance)
        {
            // �ε�� ������ ������
            if (DataManager.Instance.userItemDicData.ContainsKey(id))
            {
                itemText.gameObject.SetActive(false);
                var filteredUserItemData = DataManager.Instance.userItemDicData[id]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)

                itemGOList = new List<GameObject>(new GameObject[filteredUserItemData.Length]);

                for (int i = 0; i < filteredUserItemData.Length; i++)
                {
                    var data = (UserItemData)filteredUserItemData[i];

                    if (data.hasItemCode == 1) // ����, ���X
                    {
                        // ������ ����� 
                        var listItem = Instantiate(this.inventoryItem, this.contents); // ���� ������Ʈ�� ������ ���� 
                        var inventoryListItem = listItem.GetComponent<InventoryListItem>();
                        var itemData = (ItemData)DataManager.Instance.itemIdToItem(id, data.id);

                        inventoryListItem.Init(i, itemData.id, itemData.img, id, false, this);
                        itemGOList[i] = listItem;
                    }
                    else if (data.hasItemCode == 2) // ����, ���O
                    {
                        // ������ ����� 
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
 