using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tabs : MonoBehaviour
{
    public GameObject storeTabButton;
    public GameObject inventoryTabButton;

    public GameObject storeContent;
    public GameObject inventoryContent;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void HideAllTabs(){
        storeContent.SetActive(false);
        inventoryContent.SetActive(false);

        storeTabButton.GetComponent<Button>().image.color = new Color32(212, 212, 212, 255);
        inventoryTabButton.GetComponent<Button>().image.color = new Color32(212, 212, 212, 255);
    }

    public void ShowStoreTab(){
        HideAllTabs();
        // storeTabButton.GetComponent<Image>().color = Color.black;
        storeContent.SetActive(true);
        storeTabButton.GetComponent<Button>().image.color = new Color32(255, 255, 255, 255);
    }

    public void ShowInventoryTab(){
        HideAllTabs();
        // inventoryTabButton.GetComponent<Image>().color = Color.black;
        inventoryContent.SetActive(true);
        inventoryTabButton.GetComponent<Button>().image.color = new Color32(255, 255, 255, 255);
    }
}
