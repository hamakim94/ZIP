using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartBuild : MonoBehaviour
{
    void Start()
    {
        if (DataManager.Instance)
        {
            // �ε�� ������ ������
            for (int i = 1; i <= DataManager.Instance.userItemDicData.Count; i++)
            {
                var filteredUserItemData = DataManager.Instance.userItemDicData[i]; // �ش� ��ġ�� �ִ� user item list (UserItemData type)

                for (int j = 0; j < filteredUserItemData.Length; j++)
                {
                    var data = (UserItemData)filteredUserItemData[j];

    
                    if (data.hasItemCode == 2) // ����, ���O
                    {
                        /*Debug.Log(data.id);*/
                        var itemData = (ItemData)DataManager.Instance.itemIdToItem(i, data.id);
                        // �ǹ� ����
                        var target = transform.GetChild(i - 1);
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
    }

}
