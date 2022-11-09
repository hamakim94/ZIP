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

        for (int i = 0; i < albumData.Length; i++) // �ٹ�����
        {
            var data = (AlbumData)albumData[i];

            // ������ ����� 
            var listItem = Instantiate(this.albumItem, this.contents); // ���� ������Ʈ�� ������ ���� 
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
            // �ε�� ������ ������
            var albumData = DataManager.Instance.albumData;

            for (int i = 0; i < albumData.Length; i++) // �ٹ�����
            {
                var data = (AlbumData)albumData[i];

                // ������ ����� 
                var listItem = Instantiate(this.albumItem, this.contents); // ���� ������Ʈ�� ������ ���� 
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