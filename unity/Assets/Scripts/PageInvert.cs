using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;



public class PageInvert : MonoBehaviour
{
    enum Panel{
        main, shop
    }

    private GameObject[] panels;
    public GameObject mainPanel;
    public GameObject shopPanel;
    // public GameObject inventoryPanel; 

 
    // Start is called before the first frame update
    void Start()
    {
        panels = new GameObject[]{mainPanel, shopPanel};
        setActive((int)Panel.main);
        // mainPanel.SetActive(true);
        // shopPanel.SetActive(false);
        // inventoryPanel.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShopButtonClicked(){
        setActive((int)Panel.shop);
    }

    // public void InventoryButtonClicked(){
    //     setActive((int)Panel.inventory);
    // }

    private void setActive(int panel){
        for(int i=0; i<panels.Length; i++){
            if(i == panel){
                panels[i].SetActive(true);
            } else {
                panels[i].SetActive(false);
            }
        }
    }
}
