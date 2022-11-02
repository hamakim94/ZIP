using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PageInvert : MonoBehaviour
{
    public Button cartButton;
    public GameObject mainPanel;
    public GameObject shopPanel; 

    // Start is called before the first frame update
    void Start()
    {
        mainPanel.SetActive(true);
        shopPanel.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShopButtonClicked(){
        mainPanel.SetActive(false);
        shopPanel.SetActive(true);
    }
}
