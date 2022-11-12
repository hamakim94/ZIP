using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.U2D;
using TMPro;

public class FurnitureItem : MonoBehaviour
{
    public Image imgIcon;
    public TMP_Text imgName;
    public SpriteAtlas atlas;
    public GameObject ownedItemBtn;
    public GameObject usedItemBtn;
    public GameObject priceBtn;
    public GameObject locked;
    public TMP_Text priceText;
    private long id;
    private long posId;
    public int hasItemId; // 0, 1, 2


    /*public Transform target;*/

    public void Init(long id, long posId, string img, string name, int price, int hasItemId)
    {
        // 데이터 초기화  
        this.id = id;
        this.posId = posId;
        var spriteName = atlas.GetSprite(img);
        imgIcon.sprite = spriteName;
        imgName.text = name;
        priceText.text = price.ToString();
        this.hasItemId = hasItemId;
        SetState(hasItemId);
    }

    public void OnClickPriceBtn()
    {
        // 구매 api 통신 
        SetState(1);
    }

    public void OnClickOwnedItemBtn()
    {
        // 가구 배치 변경 통신

        // 이 가구를 사용중으로 바꾸면 사용중이었던 item은 보유중 상태로 변경해야함. (사용중인 아이템이 있을 경우, 맨 앞에 있는 애가 사용중)
        FurnitureItem furnitureItem = transform.parent.GetChild(FurniturePanel.idx).GetComponent<FurnitureItem>();

        if (furnitureItem.hasItemId == 2)
        {
            furnitureItem.SetState(1);
        }

        SetState(2);
        FurniturePanel.idx = transform.GetSiblingIndex();
        setFuniture(posId, id);
    }

    public static void setFuniture(long posId, long id)
    {
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

        GameObject resource = Resources.Load("Furniture/" + itemData.img.Split("(")[0] + "/" + itemData.img) as GameObject; // 여기에 이제 가구이름으로 동적 생성하기.
        
        Vector3 pos = new Vector3(target.position.x, resource.transform.position.y, target.position.z);
        if (itemData.img.Equals("2_2X1(kids_02)"))
        {
            pos = new Vector3(target.position.x+0.6f, resource.transform.position.y, target.position.z);
        }
        GameObject item = Instantiate(resource, pos, resource.transform.rotation);
        item.transform.parent = target; // 부모 정해놓기
    }

    // state에 따라서 GO를 activate, deactivate하는 함수 
    private void SetState(int hasItemId)
    {
        switch(hasItemId)
        {
            case 0: // 소유X 
                this.hasItemId = hasItemId;
                locked.SetActive(true);
                ownedItemBtn.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 1: // 보유, 사용X
                this.hasItemId = hasItemId;
                ownedItemBtn.SetActive(true);
                locked.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 2: // 보유, 사용O
                this.hasItemId = hasItemId;
                usedItemBtn.SetActive(true);
                locked.SetActive(false);
                ownedItemBtn.SetActive(false);

                break;
        }
    }
}
