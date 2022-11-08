using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    public Button cartCloseButton;
    public GameObject mainPanel;
    public GameObject shopPanel;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShopCloseButtonClicked(){
        mainPanel.SetActive(true);
        shopPanel.SetActive(false);
    }
}
