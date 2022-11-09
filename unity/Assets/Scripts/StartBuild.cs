using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartBuild : MonoBehaviour
{
    void Start()
    {
        if (DataManager.Instance)
        {
            // 로드된 데이터 가져옴
            for (int i = 1; i <= DataManager.Instance.userItemDicData.Count; i++)
            {
                var filteredUserItemData = DataManager.Instance.userItemDicData[i]; // 해당 위치에 있는 user item list (UserItemData type)

                for (int j = 0; j < filteredUserItemData.Length; j++)
                {
                    var data = (UserItemData)filteredUserItemData[j];

    
                    if (data.hasItemCode == 2) // 보유, 사용O
                    {
                        /*Debug.Log(data.id);*/
                        var itemData = (ItemData)DataManager.Instance.itemIdToItem(i, data.id);
                        // 건물 짓기
                        var target = transform.GetChild(i - 1);
                        if (target.childCount > 1)
                        {
                            Destroy(target.GetChild(1).gameObject);
                        }
                        if (target.GetChild(0).gameObject.activeSelf)
                        {
                            target.GetChild(0).gameObject.SetActive(false);
                        }
                        var resource = Resources.Load("Prefabs/"+ itemData.img); // 여기에 이제 가구이름으로 동적 생성하기.
                        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
                        item.transform.parent = target; // 부모 정해놓기
                    }
                }
            }
        }
    }

}
