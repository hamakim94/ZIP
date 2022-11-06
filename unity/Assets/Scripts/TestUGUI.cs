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
        DataManager.Instance.LoadData("Data/shop_data"); // shop 관련 데이터 로드 
        var shopItemData = DataManager.Instance.dicData; // 로드된 데이터 가져옴 

        for (int i = 1; i <= shopItemData.Count; i++)
        {
            var data = (ShopItemData)shopItemData[i];

            var listItem = Instantiate(this.listItem, this.contents); // 게임 오브젝트의 복제본 생성 
            // GameObject UnityEngine.Object.Instantiate<GameObject>(GameObject original, Transform parent)
            // 특정 하이어라키 위치에서 생성하기 위해 사용할 수 있다.
            // 넣고 싶은 오브젝트를 두 번째 파라미터인 parent에 적어주면 복제 생성시 하위 자식으로 생성된다. 

            // 아이템 만들기 
            var shopListItem = listItem.GetComponent<ShopListItem>();
            shopListItem.Init(data.id, data.img, data.price);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
