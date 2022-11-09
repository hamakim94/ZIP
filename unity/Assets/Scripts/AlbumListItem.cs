using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AlbumListItem : MonoBehaviour
{
    public Button albumButton;
    public TMP_Text title;
    public RawImage picture;
    private GameObject albumPanel;
    private GameObject photoPanel;

    void Start()
    {
        var canvas = GameObject.Find("Canvas");
        albumPanel = canvas.transform.Find("AlbumPanel").gameObject;
        photoPanel = canvas.transform.Find("PhotoPanel").gameObject;
    }

    public void Init(int idx, long id, string name, PhotoData[] pictures, List<GameObject> albumContentList)
    {
        // 데이터 넣기 
        title.text = name;
        picture.texture = pictures[pictures.Length - 1].texture;

        albumButton.onClick.AddListener(() => OnClickButton(idx, id, albumContentList));
    }

    private void OnClickButton(int idx, long albumId, List<GameObject> albumContentList)
    {
        albumPanel.SetActive(false);
        photoPanel.SetActive(true);

        foreach (var albumContent in albumContentList)
        {
            albumContent.SetActive(false);
        }

        albumContentList[idx].SetActive(true);
        photoPanel.transform.GetChild(0).GetComponent<ScrollRect>().content = albumContentList[idx].GetComponent<RectTransform>();

        /*for (int i = 0; i < pictures.Length; i++) // 앨범마다
        {
            var data = (PictureData)pictures[i];

            // 아이템 만들기 
            var listItem = Instantiate(this.photoItem, this.contents); // 게임 오브젝트의 복제본 생성 
            var album = listItem.GetComponent<AlbumListItem>();
            *//*StartCoroutine(GetTexture(data.pictures[0].url));*//*
            album.Init(data.id, data.name, data.pictures);
            *//*StartCoroutine(DataManager.GetTexture(data.pictures[data.pictures.Length - 1].url, album));*//*
        }*/
    }
}
