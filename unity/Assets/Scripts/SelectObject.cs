using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class SelectObject : MonoBehaviour
{
    Vector3 m_vecMouseDownPos;
    [SerializeField]
    private Camera c;
    [SerializeField]
    public GameObject inventoryPanel;

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
            Ray ray = c.ScreenPointToRay(m_vecMouseDownPos);
            RaycastHit hit;
 
            // �������� �浹�� collider�� hit�� �ֽ��ϴ�.
   /*         if(Physics.Raycast(ray, out hit))
 
            {
                // � ������Ʈ���� �α׸� ����ϴ�.
                if (hit.collider.name.Contains("Left") || hit.collider.name.Contains("Mid") || hit.collider.name.Contains("Right"))
                {
                    inventoryPanel.SetActive(true);
                    c.GetComponent<FollowCamera>().enabled = false;
                    c.transform.position = new Vector3(hit.transform.position.x - 0.52f, c.transform.position.y, hit.transform.position.z - 6.56f);
                    c.transform.LookAt(hit.transform);
                    hit.transform.gameObject.SetActive(false);
                    build(hit.transform);
                }
                else { 
                    c.GetComponent<FollowCamera>().enabled = true;
                    inventoryPanel.SetActive(false);
                }
            }*/
        }
    }

    void build(Transform go)
    {   
        var resource = Resources.Load("Prefabs/prefab1");
        GameObject item = Instantiate(resource, go.position, Quaternion.identity) as GameObject;
        item.transform.parent = go.parent;
    }

    public void buttonOnClick()
    {
        inventoryPanel.SetActive(true);
        Ray ray = c.ScreenPointToRay(m_vecMouseDownPos);
        RaycastHit hit;
        // �������� �浹�� collider�� hit�� �ֽ��ϴ�.
        if (Physics.Raycast(ray, out hit))
        {
            c.GetComponent<FollowCamera>().enabled = false;
            c.transform.position = new Vector3(hit.transform.position.x - 0.52f, c.transform.position.y, hit.transform.position.z - 6.56f);
            c.transform.LookAt(hit.transform);
        }
    }
}
 