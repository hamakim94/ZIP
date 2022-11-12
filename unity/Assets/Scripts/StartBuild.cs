using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon;

public class StartBuild : MonoBehaviour
{
 /*   void Start()
    {

        if (DataManager.Instance)
        {
            // �ε�� ������ ������
            for (int posId = 1; posId <= DataManager.Instance.userItemDicData.Count; posId++) // ��ü ��ġ ���̵� ����??
            {
                // contains.key ó���ϰ�
                var filteredUserItemData = DataManager.Instance.userItemDicData[posId]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)

                for (int j = 0; j < filteredUserItemData.Length; j++)
                {
                    var data = (UserItemData)filteredUserItemData[j];

    
                    if (data.hasItemCode == 2) // ����, ���O
                    {
                        *//*Debug.Log(data.id);*//*
                        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, data.id); // i ������ ���̵�
                        // �ǹ� ����
                        var target = transform.GetChild(posId - 1);
                        if (target.childCount > 1)
                        {
                            Destroy(target.GetChild(1).gameObject);
                        }
                        if (target.GetChild(0).gameObject.activeSelf)
                        {
                            target.GetChild(0).gameObject.SetActive(false);
                        }
                        var resource = Resources.Load("Prefabs/"+ itemData.img); // ���⿡ ���� �����̸����� ���� �����ϱ�.
                        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
                        item.transform.parent = target; // �θ� ���س���
                    }
                }
            }
        }
    }*/

    public static void setFuniture(long posId, long id)
    {
        Debug.Log("posId: " + posId + ", " + "id: " + id);
        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
        var target = GameObject.Find("SelectObject").transform.GetChild((int)posId - 1);
        // ������ item ��ġ 
        if (target.childCount > 1)
        {
            Destroy(target.GetChild(1).gameObject);
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }

        /*Debug.Log("itemData: " + itemData);*/
        
        var resource = Resources.Load("Furniture/"+ itemData.img.Split("(")[0] + "/" + itemData.img); // ���⿡ ���� �����̸����� ���� �����ϱ�.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // �θ� ���س���
    }

}
