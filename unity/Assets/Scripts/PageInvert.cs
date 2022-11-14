using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class PageInvert : MonoBehaviour
{
    enum Panel{
        main, shop, inventory, album, photo, furniture
    }

    private GameObject[] panels;
    public GameObject mainPanel;
    public GameObject shopPanel;
    public GameObject inventoryPanel;
    public GameObject albumPanel;
    public GameObject photoPanel;
    public GameObject furniturePanel;
    public GameObject BtnList;
    public GameObject BuildList;
    public Vector3 m_vecMouseDownPos;
    public static GameObject photoGO;
    private bool toggle = true;

    // Start is called before the first frame update
    void Start()
    {
        panels = new GameObject[]{mainPanel, shopPanel, inventoryPanel, albumPanel, photoPanel, furniturePanel};
        MainButtonClicked();
    }

    // Update is called once per frame
    void Update()
    {
#if UNITY_EDITOR
        // ���콺 Ŭ�� ��
        if (Input.GetMouseButtonDown(0))
#else
        // ��ġ ��
        if (Input.touchCount > 0)
#endif
        {
#if UNITY_EDITOR
            m_vecMouseDownPos = Input.mousePosition;
#else
            m_vecMouseDownPos = Input.GetTouch(0).position;
            if(Input.GetTouch(0).phase != TouchPhase.Began)
                return;
#endif
            // ī�޶󿡼� ��ũ���� ���콺 Ŭ�� ��ġ�� ����ϴ� ������ ��ȯ�մϴ�.
            Ray ray = Camera.main.ScreenPointToRay(m_vecMouseDownPos);
            RaycastHit hit;

            // �������� �浹�� collider�� hit�� �ֽ��ϴ�.
            if (Physics.Raycast(ray, out hit))
            {
                // � ������Ʈ���� �α׸� ����ϴ�.
                if (hit.collider.name == "photoImg" && !furniturePanel.activeSelf)
                {
                    Debug.Log(hit.transform.GetComponent<Photo>().id);
                    photoGO = hit.transform.gameObject;
                    AlbumButtonClicked();
                }

                /*// ������Ʈ ���� �ڵ带 �ۼ��� �� �ֽ��ϴ�.
                if (hit.collider.name == "Cube")
                    Debug.Log("Cube Hit");
                else if (hit.collider.name == "Capsule")
                    Debug.Log("Capsule Hit");
                else if (hit.collider.name == "Sphere")
                    Debug.Log("Sphere Hit");
                else if (hit.collider.name == "Cylinder")
                    Debug.Log("Cylinder Hit");*/
            }
        }
    }

    public void MainButtonClicked()
    {
        setActive((int)Panel.main);
    }

    public void ShopButtonClicked(){
        DataManager.Instance.LoadUserItemData();

        setActive((int)Panel.shop);
    }

    public void InventoryButtonClicked(){
        DataManager.Instance.LoadUserItemData();

        setActive(new int[]{ (int)Panel.inventory, (int)Panel.main });
    }

    public void AlbumButtonClicked()
    {
        setActive(new int[] { (int)Panel.album, (int)Panel.main });
    }

    public void PlusButtonClicked()
    {
       // ��ġ ��ư 
       for(int i = 0; i< BtnList.transform.childCount; i++)
        {
            if(true)
            BtnList.transform.GetChild(i).gameObject.SetActive(toggle);
            BuildList.transform.GetChild(i).GetChild(0).gameObject.SetActive(toggle);
        }
        toggle = !toggle;
    }

    private void setActive(int panel){
        if (panel == 0)
        {
            //PlayerUI Ȱ��ȭ
            PlayerUI.isActive = true;
            Debug.Log("active");
        }
        else
        {
            //PlayerUI ��Ȱ��ȭ
            PlayerUI.isActive = false;
            PlayerManager.isPlayerUIVisible = false;
            Debug.Log("deactive");
        }
        for (int i=0; i<panels.Length; i++){
            if(i == panel){
                panels[i].SetActive(true);
            } else {
                panels[i].SetActive(false);
            }
        }
    }

    private void setActive(int[] panelList){
        if (Array.Exists(panelList, idx => idx == (int)Panel.main))
        {
            PlayerUI.isActive = true;
        }
        else
        {
            PlayerUI.isActive = false;
            PlayerManager.isPlayerUIVisible = false;
        }
        for (int i=0; i<panels.Length; i++){
            if(Array.Exists(panelList, idx => idx == i)){
                panels[i].SetActive(true);
            } else {
                panels[i].SetActive(false);
            }
        }
    }
}
