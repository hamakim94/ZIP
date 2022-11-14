using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
using UnityEngine.U2D;

public class InventoryListItem : MonoBehaviour
{
    public Image imgIcon;
    public SpriteAtlas atlas;
    public GameObject placedItemBtn;
    public GameObject unplacedItemBtn;
    public Transform target;
    private PlusButton tabButton;

    public void Init(int idx, long id, string img, long posId, Boolean placed, PlusButton go)
    {
        // ������ �ֱ� 
        var spriteName = atlas.GetSprite(img);
        imgIcon.sprite = spriteName;
        changeBtn(placed);
        tabButton = go;
        unplacedItemBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(idx, posId, id));
    }

    // ������ item�� ��ġ, ������ ��ġX 
    private void OnClickButton(int idx, long posId, long id)
    {
        changeBtn(true);
        setFuniture(posId, id);
        // ���� ������ �� ġ��� �ϴ½����� �غ���.
    }
    public void setFuniture(long posId, long id)
    {
        var itemData = (ItemData)DataManager.Instance.itemIdToItem(posId, id);
        target = GameObject.Find("SelectObject").transform.GetChild((int)posId - 1);
        // ������ item ��ġ 
        if (target.childCount > 1)
        {
            target.GetChild(1).gameObject.SetActive(false);
        }
        else
        {
            target.GetChild(0).gameObject.SetActive(false);
        }
        var resource = Resources.Load("Prefabs/" + itemData.img); // ���⿡ ���� �����̸����� ���� �����ϱ�.
        GameObject item = Instantiate(resource, target.position, Quaternion.identity) as GameObject;
        item.transform.parent = target; // �θ� ���س���
    }
    private void Update()
    {
        if (target) { 
        // Ȯ�� ��ư�̶� ������ �� ��Ʈ����
        // Ȯ�� ��ư ������ �� ����ϱ� ��ư ���� �ֱ� ex changeCurState(idx), changeBtn(true)
        // �׷� �ǹ̷� confirm �г��� ���⼭ �� �������ҵ�???
        if (Input.GetKeyDown(KeyCode.Q))
        {
                

            // target.childCount �� ó���ϱ�
            Destroy(target.GetChild(1).gameObject);
        }
        // ��ҹ�ư�̶� ������ �� ��Ƽ�� Ȱ��ȭ�ϰ� ���� ������� �� ��Ʈ����
        if (Input.GetKeyDown(KeyCode.W))
        {
            // target.childCount �� ó���ϱ�
            target.GetChild(1).gameObject.SetActive(true);
            Destroy(target.GetChild(2).gameObject);
        }
        }
    }
    /*// ������ item�� ��ġ, ������ ��ġX 
    private void OnClickButton(int idx, long posId)
    {
        var itemList = DataManager.Instance.userItemDicData[posId];

        // ��� item�� ���� ��ġX 
        for (int i = 0; i < itemList.Length; i++)
        {
            var item = (UserItemData)itemList[i];
            if (item.hasItemCode == 2)
            {

                changeBtn(false);
                break;
            }
        }

        // ������ item ��ġ 
        changeBtn(true);
    }*/

    public void changeBtn(Boolean placed)
    {
        placedItemBtn.SetActive(placed);
        unplacedItemBtn.SetActive(!placed);
    }
}
