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
        // ������ �ʱ�ȭ  
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
        // ���� api ��� 
        SetState(1);
    }

    public void OnClickOwnedItemBtn()
    {
        // ���� ��ġ ���� ���

        // �� ������ ��������� �ٲٸ� ������̾��� item�� ������ ���·� �����ؾ���. (������� �������� ���� ���, �� �տ� �ִ� �ְ� �����)
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
        // ������ item ��ġ 
        if (target.childCount > 1)
        {
            Destroy(target.GetChild(1).gameObject);
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }

        GameObject resource = Resources.Load("Furniture/" + itemData.img.Split("(")[0] + "/" + itemData.img) as GameObject; // ���⿡ ���� �����̸����� ���� �����ϱ�.
        
        Vector3 pos = new Vector3(target.position.x, resource.transform.position.y, target.position.z);
        if (itemData.img.Equals("2_2X1(kids_02)"))
        {
            pos = new Vector3(target.position.x+0.6f, resource.transform.position.y, target.position.z);
        }
        GameObject item = Instantiate(resource, pos, resource.transform.rotation);
        item.transform.parent = target; // �θ� ���س���
    }

    // state�� ���� GO�� activate, deactivate�ϴ� �Լ� 
    private void SetState(int hasItemId)
    {
        switch(hasItemId)
        {
            case 0: // ����X 
                this.hasItemId = hasItemId;
                locked.SetActive(true);
                ownedItemBtn.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 1: // ����, ���X
                this.hasItemId = hasItemId;
                ownedItemBtn.SetActive(true);
                locked.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 2: // ����, ���O
                this.hasItemId = hasItemId;
                usedItemBtn.SetActive(true);
                locked.SetActive(false);
                ownedItemBtn.SetActive(false);

                break;
        }
    }
}
