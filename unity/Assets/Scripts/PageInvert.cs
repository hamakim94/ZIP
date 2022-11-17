using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class PageInvert : MonoBehaviour
{
    enum Panel{
        main, album, photo, furniture, btnlist
    }

    private GameObject[] panels;
    public GameObject mainPanel;
    public GameObject albumPanel;
    public GameObject photoPanel;
    public GameObject furniturePanel;
    public GameObject exitConfirmPanel; 
    public GameObject BtnList;
    public GameObject BuildList;
    public Camera mainCamera;
    Vector3 m_vecMouseDownPos;
    public static GameObject photoGO;
    int pointerId;

    // Start is called before the first frame update
    void Start()
    {
        panels = new GameObject[]{mainPanel, albumPanel, photoPanel, furniturePanel, BtnList};
        MainButtonClicked();
#if UNITY_EDITOR
        pointerId = -1;
#else
        pointerId = 0;
#endif

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
                return;
#endif
            // 카메라에서 스크린에 마우스 클릭 위치를 통과하는 광선을 반환합니다.
            Ray ray = mainCamera.ScreenPointToRay(m_vecMouseDownPos);
            RaycastHit hit;

            // 광선으로 충돌된 collider를 hit에 넣습니다.
            if (UnityEngine.EventSystems.EventSystem.current.IsPointerOverGameObject(pointerId) == false)
            {
                if (Physics.Raycast(ray, out hit))
                {
                    /*Debug.Log("hit.collider.name: " + hit.collider.name);*/
                    // 어떤 오브젝트인지 로그를 찍습니다.
                    if (hit.collider.name == "photoImg" && !furniturePanel.activeSelf)
                    {
                        photoGO = hit.transform.gameObject;
                        mainCamera.transform.GetComponent<FollowCamera>().enabled = false;
                        if (hit.transform.GetComponent<Photo>().id == 2 || hit.transform.GetComponent<Photo>().id == 3)
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x, hit.transform.position.y, hit.transform.position.z - 4f);
                            mainCamera.transform.LookAt(photoGO.transform);
                            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x, mainCamera.transform.position.y - 1f, mainCamera.transform.position.z);
                        }
                        else if (hit.transform.GetComponent<Photo>().id == 1)
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x + 4f, hit.transform.position.y, hit.transform.position.z);
                            mainCamera.transform.LookAt(photoGO.transform);
                            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x, mainCamera.transform.position.y - 1f, mainCamera.transform.position.z);
                        }
                        else
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x - 4f, hit.transform.position.y, hit.transform.position.z);
                            mainCamera.transform.LookAt(photoGO.transform);
                            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x, mainCamera.transform.position.y - 1f, mainCamera.transform.position.z);
                        }
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
    }

    public void MainButtonClicked()
    {
        setActive((int)Panel.main);
    }

    public void AlbumButtonClicked()
    {
        setActive(new int[] { (int)Panel.album, (int)Panel.main });
        PlayerUI.isActive = false;
    }

    public void PhotoButtonClicked()
    {
        setActive(new int[] { (int)Panel.album, (int)Panel.main });
    }

    public void PlusButtonClicked()
    {
        BtnList.SetActive(!BtnList.activeSelf);
        // 배치 버튼 
        for (int i = 0; i< BtnList.transform.childCount; i++)
        {
            if (BuildList.transform.GetChild(i).childCount == 1)
            {
                BuildList.transform.GetChild(i).GetChild(0).gameObject.SetActive(BtnList.activeSelf);
            }
        }
    }
    public void PlusCloseButtonClicked()
    {
        setActive(new int[] { (int)Panel.main, (int)Panel.btnlist});
    }

    public void DoorButtonClicked()
    {
        exitConfirmPanel.SetActive(true);
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
