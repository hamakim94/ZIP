using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TabButton : MonoBehaviour
{
    public long id;
    public string pos;
    public RectTransform contents;
    public GameObject listItem;

    void Start()
    {
        // ����
        var filteredItemData = DataManager.Instance.totalItemDicData[id]; // �ε�� ������ ������ 

        for (int i = 0; i < filteredItemData.Length; i++)
        {
            var data = (ItemData)filteredItemData[i];

            var listItem = Instantiate(this.listItem, this.contents); // ���� ������Ʈ�� ������ ���� 
            // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
            // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
            // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 

            // ������ ����� 
            var shopListItem = listItem.GetComponent<ShopListItem>();
            shopListItem.Init(data.id, data.img, data.price);
        }
    }

    /*public void OnClickButton()
    {
        Debug.Log("TabButton: " + id + ", " + pos);

    }*/
}
