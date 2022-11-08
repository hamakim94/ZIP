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
        // 데이터 넣기 
        title.text = name;
        picture.texture = pictures[pictures.Length - 1].texture;
        /*StartCoroutine(GetTexture(pictures[pictures.Length - 1].url));*/

        albumButton.onClick.AddListener(() => OnClickButton(id));
    }

    /*IEnumerator GetTexture(string url)
    {
        UnityWebRequest www = UnityWebRequestTexture.GetTexture(url);
        yield return www.SendWebRequest();

        picture.texture = DownloadHandlerTexture.GetContent(www);
    }*/

    private void OnClickButton(long id)
    {
        Debug.Log("AlbumData: " + id);
    }
}
