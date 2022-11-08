using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;

public class AlbumListItem : MonoBehaviour
{
    public Button albumButton;
    public TMP_Text title;
    public RawImage picture;

    void Start()
    {
    }

    public void Init(long id, string name, PictureData[] pictures)
    {
        // ������ �ֱ� 
        title.text = name;
        picture.texture = pictures[pictures.Length - 1].texture;

        albumButton.onClick.AddListener(() => OnClickButton(id, pictures));
    }

    private void OnClickButton(long albumId, PictureData[] pictures)
    {
        Debug.Log("AlbumData: " + albumId);
        /*for (int i = 0; i < pictures.Length; i++) // �ٹ�����
        {
            var data = (PictureData)pictures[i];

            // ������ ����� 
            var listItem = Instantiate(this.photoItem, this.contents); // ���� ������Ʈ�� ������ ���� 
            var album = listItem.GetComponent<AlbumListItem>();
            *//*StartCoroutine(GetTexture(data.pictures[0].url));*//*
            album.Init(data.id, data.name, data.pictures);
            *//*StartCoroutine(DataManager.GetTexture(data.pictures[data.pictures.Length - 1].url, album));*//*
        }*/
    }
}
