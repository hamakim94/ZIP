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
    private int state; // 0, 1, 2

    /*public Transform target;*/

    public void Init(long id, string img, string name, int price, int hasItemId)
    {
        // ������ �ֱ� 
        // ���� �ֱ� 
        var spriteName = atlas.GetSprite(img);
        imgIcon.sprite = spriteName;
        imgName.text = name;
        priceText.text = price.ToString();
        state = hasItemId;
        SetState(state);


        /*hangeBtn(placed);
        tabButton = go;
        unplacedItemBtn.GetComponent<Button>().onClick.AddListener(() => OnClickButton(idx, posId, id));*/
    }

    // state�� ���� GO�� activate, deactivate�ϴ� �Լ� 
    private void SetState(int state)
    {
        switch(state){
            case 0: // ����X 
                locked.SetActive(true);
                ownedItemBtn.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 1: // ����, ���X
                ownedItemBtn.SetActive(true);
                locked.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 2: // ����, ���O
                usedItemBtn.SetActive(true);
                locked.SetActive(false);
                ownedItemBtn.SetActive(false);

                break;
        }
    }
}
