/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PhotoPanel : MonoBehaviour
{
    public GameObject photoItem;
    public RectTransform contents;

    private void Start()
    {
        var albumData = DataManager.Instance.albumData;

        for (int i = 0; i < albumData.Length; i++) // 앨범마다
        {
            var data = (AlbumData)albumData[i];

            // 아이템 만들기 
            var listItem = Instantiate(this.albumItem, this.contents); // 게임 오브젝트의 복제본 생성 
            var album = listItem.GetComponent<AlbumListItem>();
            *//*StartCoroutine(GetTexture(data.pictures[0].url));*//*
            album.Init(data.id, data.name, data.pictures);
            *//*StartCoroutine(DataManager.GetTexture(data.pictures[data.pictures.Length - 1].url, album));*//*
        }
    }

    *//*public void OnEnable()
    {
        if (isStarted)
        {
            Debug.Log("OnEnable");
            // 로드된 데이터 가져옴
            var albumData = DataManager.Instance.albumData;

            for (int i = 0; i < albumData.Length; i++) // 앨범마다
            {
                var data = (AlbumData)albumData[i];

                // 아이템 만들기 
                var listItem = Instantiate(this.albumItem, this.contents); // 게임 오브젝트의 복제본 생성 
                var album = listItem.GetComponent<AlbumListItem>();
                *//*StartCoroutine(GetTexture(data.pictures[0].url));*//*
                album.Init(data.id, data.name, data.pictures);
                *//*StartCoroutine(DataManager.GetTexture(data.pictures[data.pictures.Length - 1].url, album));*//*
            }
        }
    }*/
/*
    public void OnDisable()
    {
        Transform[] childlist = contents.gameObject.GetComponentsInChildren<Transform>();
        if (childlist != null)
        {
            for (int i = 1; i < childlist.Length; i++)
            {
                if (childlist[i] != transform)
                    Destroy(childlist[i].gameObject);
            }
        }
    }*//*

    // Update is called once per frame
    void Update()
    {
        
    }

    *//*public static IEnumerator GetTexture(string url)
    {
        UnityWebRequest www = UnityWebRequestTexture.GetTexture(url);
        yield return www.SendWebRequest();
        if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
            Debug.Log(((DownloadHandlerTexture)www.downloadHandler).texture);
        }
    }*//*
}
*/