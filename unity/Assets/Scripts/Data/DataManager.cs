using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;


public class DataManager : MonoBehaviour
{
    public static DataManager Instance; // ��ü�� ������ �ʰ� �ٸ� ������ ������ �� ����. 
    public Dictionary<long, RawData[]> totalItemDicData;
    public Dictionary<long, RawData[]> userItemDicData;
    /*public AlbumData[] albumData;*/
    public Dictionary<long, RawData> albumDicData;
    public Dictionary<long, RawData> dicData;
    public Texture texture;
    private void Awake()
    {
        DataManager.Instance = this;
       
        LoadInitData();
        LoadUserData();
        LoadAlbumData();

        this.dicData = new Dictionary<long, RawData>();
        DontDestroyOnLoad(gameObject);
    }

    // path�� �ִ� json ������ load�ؼ� dictionary ���·� return 
    public void LoadData(string path) 
    {
        var ta = Resources.Load<TextAsset>(path);
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<ShopItemData[]>(json);

        foreach(var data in arrData)
        {
            this.dicData.Add(data.id, data);
        }
    }

    private void LoadInitData()
    {
        this.totalItemDicData = new Dictionary<long, RawData[]>(); // ��ġid : ����[](���� list)
        var ta = Resources.Load<TextAsset>("Data/total_item_data");
        var json = ta.text;
        Debug.Log(ta.text);
        var arrData = JsonConvert.DeserializeObject<PositionData[]>(json);

        foreach(var data in arrData)
        {
            this.totalItemDicData.Add(data.id, data.itemList);
        }
    }

    public void LoadUserData()
    {
        this.userItemDicData = new Dictionary<long, RawData[]>(); // ��ġid : ����ڰ���[](����ڰ��� list)
        var ta = Resources.Load<TextAsset>("Data/user_item_data2"); // api ����ؼ� json �������� 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<PositionUserItemData[]>(json);

        foreach (var data in arrData)
        {
            this.userItemDicData.Add(data.id, data.itemList);
        }
    }

    public void LoadAlbumData()
    {
        this.albumDicData = new Dictionary<long, RawData>(); // album id : AlbumData
        var ta = Resources.Load<TextAsset>("Data/total_album_data2"); // api ����ؼ� json �������� 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<AlbumData[]>(json);

        for(int i=0; i<arrData.Length; i++) // album ��
        {
            for(int j=0; j<arrData[i].pictures.Length; j++) // �ش� �ٹ��� ���� �� 
            {
                StartCoroutine(GetTexture(arrData[i].pictures[j]));
            }
        }

        foreach(var data in arrData)
        {
            this.albumDicData.Add(data.id, data);
        }
    }

    public RawData itemIdToItem(long positionId, long itemId)
    {
        var itemList = totalItemDicData[positionId];

        for(int i=0; i<itemList.Length; i++)
        {
            if(itemId == itemList[i].id)
            {
                return itemList[i];
            }
        }

        return null;
    }

    IEnumerator GetTexture(PhotoData picture)
    {
        UnityWebRequest www = UnityWebRequestTexture.GetTexture(picture.url);
        yield return www.SendWebRequest();

        picture.texture = DownloadHandlerTexture.GetContent(www);
    }

    /*public static IEnumerator GetTexture(string url, AlbumListItem album)
    {
        Debug.Log(url);
        *//*UnityWebRequest www = APIManager.GetWWW("Texture", url, null);*//*
        UnityWebRequest www = APIManager.GetWWW("GET", url, null);

        *//*Debug.Log(www.SendWebRequest());*//*

        yield return www.SendWebRequest();

        if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Texture2D tex = new Texture2D(2, 2);
            byte[] data = www.downloadHandler.data;
            ImageConversion.LoadImage(tex, data, true);
            Debug.Log(www.downloadHandler.text);
            album.picture.texture = tex;
            *//*album.picture.texture = ((DownloadHandlerTexture)www.downloadHandler).texture;*/
    /*album.picture.texture = www.downloadHandler.data.;*//*
    Debug.Log(album.picture.texture);
}
}*/
}
