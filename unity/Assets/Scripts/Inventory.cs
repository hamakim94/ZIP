using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public Button cartCloseButton;
    public GameObject mainPanel;
    public GameObject inventoryPanel;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void InventoryCloseButtonClicked(){
        mainPanel.SetActive(true);
        inventoryPanel.SetActive(false);
    }
}
