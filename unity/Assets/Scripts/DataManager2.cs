using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class item 
{
    public string id;
    public GameObject building;
    public GameObject preview;
}
public class DataManager2 : MonoBehaviour
{
    public static DataManager2 Instance;
   
    private void Awake()
    {
        DataManager2.Instance = this;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            Debug.Log("ÅÇÅ°´­·¶¾î¿ä");
            itemOnClick();
        }
    }
   public void itemOnClick()
    {
        Debug.Log("¾ÆÀÌÅÛ´­·¶¾î¿ä");
    }
}
