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
    public int hasItemId; // 0,1,2
    private GameObject buyConfirmPanel;
    GameObject instan;


    /*public Transform target;*/
    /*    public void Start()
        {
            this.buyConfirmPanel = GameObject.Find("Canvas").transform.GetChild(7).gameObject;
            Button cancelBtn = this.buyConfirmPanel.transform.GetChild(7).gameObject.GetComponent<Button>();
            Button confirmBtn = this.buyConfirmPanel.transform.GetChild(7).gameObject.GetComponent<Button>();

            cancelBtn.onClick.AddListener(OnClickCancelBtn);
            confirmBtn.onClick.AddListener(OnClickConfirmBtn);
        }*/

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
        Debug.Log("OnClickPriceBtn");
        GameObject panel = Resources.Load<GameObject>("BuyConfirmPanel");
        instan = Instantiate(panel);
        instan.transform.parent = GameObject.Find("Canvas").transform;
        RectTransform rt = instan.GetComponent<RectTransform>();

        rt.anchoredPosition = Vector2.zero;
        rt.localScale = Vector3.one;
        rt.sizeDelta = new Vector2(860, 450);

        instan.transform.GetChild(6).gameObject.GetComponent<Button>().onClick.AddListener(OnClickCancelBtn);
        instan.transform.GetChild(7).gameObject.GetComponent<Button>().onClick.AddListener(OnClickConfirmBtn);


        panel.SetActive(true);
        
        /*        // 구매 api 통신 
                StartCoroutine(DataManager.Instance.BuyFurniture(id, SetState));*/
    }

    public void OnClickCancelBtn()
    {
        Debug.Log("OnClickCancelBtn");
        Destroy(instan);
        /*buyConfirmPanel.SetActive(false);*/
    }

    public void OnClickConfirmBtn()
    {
        Debug.Log("OnClickConfirmBtn");

        /*buyConfirmPanel.SetActive(false);*/
        Destroy(instan);

        // 구매 api 통신 
        StartCoroutine(DataManager.Instance.BuyFurniture(id, SetState));
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

    public void setFuniture(long posId, long id)
    {
        StartCoroutine(DataManager.Instance.SetFurniture(posId, id));
        /*var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
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
            pos = new Vector3(target.position.x + 0.6f, resource.transform.position.y, target.position.z);
        }
        GameObject item = Instantiate(resource, pos, resource.transform.rotation);
        item.transform.parent = target; // 부모 정해놓기*/
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
