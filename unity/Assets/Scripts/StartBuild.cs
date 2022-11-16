using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon;

public class StartBuild : MonoBehaviour
{
    void Start()
    {
        Init();
    }

    public static void setFuniture(long posId, long id)
    {
        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
        var target = GameObject.Find("SelectObject").transform.GetChild((int)posId - 1);
        // 선택한 item 배치 
        if (target.childCount > 1)
        {
            for (int i = 1; i < target.childCount; i++)
            {
                Destroy(target.GetChild(i).gameObject);
            }
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }

        GameObject resource = Resources.Load("Furniture/" + itemData.img.Split("(")[0] + "/" + itemData.img) as GameObject; // 여기에 이제 가구이름으로 동적 생성하기.

        Vector3 pos = new Vector3(target.position.x, resource.transform.position.y, target.position.z);
        if (itemData.img.Equals("2_2X1(kids_02)"))
        {
            pos = new Vector3(target.position.x + 0.6f, resource.transform.position.y, target.position.z);
        }
        GameObject item = Instantiate(resource, pos, resource.transform.rotation);
        item.transform.parent = target; // 부모 정해놓기
        /*Debug.Log("posId: " + posId + ", " + "id: " + id);
        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
        var target = GameObject.Find("SelectObject").transform.GetChild((int)posId - 1);
        // 선택한 item 배치 
        if (target.childCount > 1)
        {
            Destroy(target.GetChild(1).gameObject);
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }

        *//*Debug.Log("itemData: " + itemData);*//*
        
        var resource = Resources.Load("Furniture/"+ itemData.img.Split("(")[0] + "/" + itemData.img); // 여기에 이제 가구이름으로 동적 생성하기.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // 부모 정해놓기*/
    }

    public void Init()
    {
        if (SceneManagerHelper.ActiveSceneName.Equals("Home"))
        {
            if (DataManager.Instance)
            {
                // 로드된 데이터 가져옴
                for (int posId = 1; posId <= DataManager.Instance.userItemDicData.Count; posId++) // 전체 위치 아이디 길이??
                {
                    // contains.key 처리하고
                    var filteredUserItemData = DataManager.Instance.userItemDicData[posId]; // 해당 위치에 있는 user item list (UserItemData type)

                    for (int j = 0; j < filteredUserItemData.Length; j++)
                    {
                        var data = (UserItemData)filteredUserItemData[j];


                        if (data.hasItemCode == 2) // 보유, 사용O
                        {
                            setFuniture(posId, data.id);
                        }
                    }
                }
            }
        }
    }

}
