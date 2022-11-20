using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    public Button cartCloseButton;
    public GameObject mainPanel;
    public GameObject shopPanel;
    [SerializeField]
    private Camera c;


    public void ShopCloseButtonClicked(){
        mainPanel.SetActive(true);
        shopPanel.SetActive(false);
        c.GetComponent<FollowCamera>().enabled = true;
    }
}
