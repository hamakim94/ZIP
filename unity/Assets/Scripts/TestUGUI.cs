using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.U2D;

public class TestUGUI : MonoBehaviour
{
    public SpriteAtlas atlas;
    public RectTransform contents;
    public GameObject listItem;

    // Start is called before the first frame update
    void Start()
    {
        DataManager.Instance.LoadData("Data/shop_data"); // shop ���� ������ �ε� 
        var shopItemData = DataManager.Instance.dicData; // �ε�� ������ ������ 

        for (int i = 1; i <= shopItemData.Count; i++)
        {
            var data = (ShopItemData)shopItemData[i];

            var listItem = Instantiate(this.listItem, this.contents); // ���� ������Ʈ�� ������ ���� 
            // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
            // Ư�� ���̾��Ű ��ġ���� �����ϱ� ���� ����� �� �ִ�.
            // �ְ� ���� ������Ʈ�� �� ��° �Ķ������ parent�� �����ָ� ���� ������ ���� �ڽ����� �����ȴ�. 

            // ������ ����� 
            var shopListItem = listItem.GetComponent<ShopListItem>();
            shopListItem.Init(data.id, data.img, data.price);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
