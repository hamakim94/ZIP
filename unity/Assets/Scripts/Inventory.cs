using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public Button cartCloseButton;
    public GameObject mainPanel;
    public GameObject inventoryPanel;
    public RectTransform contents;
    [SerializeField]
    private Camera c;
    private Transform obj;

    public void getObj(Transform child)
    {
        obj = child;
    }
    public void InventoryCloseButtonClicked(){
        obj.GetChild(0).gameObject.SetActive(false);
        mainPanel.SetActive(true);
        inventoryPanel.SetActive(false);
        c.GetComponent<FollowCamera>().enabled = true;
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
