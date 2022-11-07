using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class PageInvert : MonoBehaviour
{
    enum Panel{
        main, shop, inventory
    }

    private GameObject[] panels;
    public GameObject mainPanel;
    public GameObject shopPanel;
    public GameObject inventoryPanel;

 
    // Start is called before the first frame update
    void Start()
    {
        panels = new GameObject[]{mainPanel, shopPanel, inventoryPanel};
        setActive((int)Panel.main);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShopButtonClicked(){
        DataManager.Instance.LoadUserData();

        setActive((int)Panel.shop);
    }

    public void InventoryButtonClicked(){
        DataManager.Instance.LoadUserData();

        setActive(new int[]{(int)Panel.inventory, (int)Panel.main});
    }

    private void setActive(int panel){
        for(int i=0; i<panels.Length; i++){
            if(i == panel){
                panels[i].SetActive(true);
            } else {
                panels[i].SetActive(false);
            }
        }
    }

    private void setActive(int[] panelList){
        for(int i=0; i<panels.Length; i++){
            if(Array.Exists(panelList, idx => idx == i)){
                panels[i].SetActive(true);
            } else {
                panels[i].SetActive(false);
            }
        }
    }
}
