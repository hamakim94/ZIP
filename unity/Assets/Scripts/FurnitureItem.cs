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
        // 데이터 넣기 
        // 사진 넣기 
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

    // state에 따라서 GO를 activate, deactivate하는 함수 
    private void SetState(int state)
    {
        switch(state){
            case 0: // 소유X 
                locked.SetActive(true);
                ownedItemBtn.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 1: // 보유, 사용X
                ownedItemBtn.SetActive(true);
                locked.SetActive(false);
                usedItemBtn.SetActive(false);

                break;

            case 2: // 보유, 사용O
                usedItemBtn.SetActive(true);
                locked.SetActive(false);
                ownedItemBtn.SetActive(false);

                break;
        }
    }
}
