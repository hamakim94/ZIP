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


    public void InventoryCloseButtonClicked(){
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
