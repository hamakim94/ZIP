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
    Vector3 m_vecMouseDownPos;
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
        // 마우스 클릭 시
        if (Input.GetMouseButtonDown(0))
#else
        // 터치 시
        if (Input.touchCount > 0)
#endif
        {
#if UNITY_EDITOR
            m_vecMouseDownPos = Input.mousePosition;
#else
            m_vecMouseDownPos = Input.GetTouch(0).position;
            if(Input.GetTouch(0).phase != TouchPhase.Began)
                return;z
#endif
            // 카메라에서 스크린에 마우스 클릭 위치를 통과하는 광선을 반환합니다.
            Ray ray = Camera.main.ScreenPointToRay(m_vecMouseDownPos);
            RaycastHit hit;

            // 광선으로 충돌된 collider를 hit에 넣습니다.
            if (Physics.Raycast(ray, out hit))
            {
                // 어떤 오브젝트인지 로그를 찍습니다.
                if (hit.collider.name == "photoImg" && !furniturePanel.activeSelf)
                {
                    Debug.Log(hit.transform.GetComponent<Photo>().id);
                    photoGO = hit.transform.gameObject;
                    AlbumButtonClicked();
                }

                /*// 오브젝트 별로 코드를 작성할 수 있습니다.
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

    public void PhotoButtonClicked()
    {
        setActive(new int[] { (int)Panel.album, (int)Panel.main });
    }

    public void PlusButtonClicked()
    {
       // 배치 버튼 
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
            //PlayerUI 활성화
            PlayerUI.isActive = true;
            Debug.Log("active");
        }
        else
        {
            //PlayerUI 비활성화
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
