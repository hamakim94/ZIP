using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;


public class DataManager : MonoBehaviour
{
    public static DataManager Instance; // 객체를 만들지 않고도 다른 곳에서 꺼내쓸 수 있음. 
    public Dictionary<long, RawData[]> totalItemDicData;
    public Dictionary<long, RawData[]> userItemDicData;
    /*public AlbumData[] albumData;*/
    public Dictionary<long, RawData> albumDicData;
    public Dictionary<long, RawData> userAlbumDicData;
    public Dictionary<long, RawData> dicData;
    public Texture texture;
    private void Awake()
    {
        DataManager.Instance = this;
       
        LoadTotalItemData();
        LoadUserItemData();
        LoadTotalAlbumData();

        this.dicData = new Dictionary<long, RawData>();
        DontDestroyOnLoad(gameObject);
    }

    // path에 있는 json 파일을 load해서 dictionary 형태로 return 
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

    private void LoadTotalItemData()
    {
        this.totalItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 가구[](가구 list)
        var ta = Resources.Load<TextAsset>("Data/total_item_data");
        var json = ta.text;
        Debug.Log(ta.text);
        var arrData = JsonConvert.DeserializeObject<PositionData[]>(json);

        foreach(var data in arrData)
        {
            this.totalItemDicData.Add(data.id, data.itemList);
        }
    }
    public void LoadUserItemData()
    {
        this.userItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 사용자가구[](사용자가구 list)
        var ta = Resources.Load<TextAsset>("Data/user_item_data2"); // api 통신해서 json 가져오기 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<PositionUserItemData[]>(json);

        foreach (var data in arrData)
        {
            this.userItemDicData.Add(data.id, data.itemList);
        }
    }

    public void LoadTotalAlbumData()
    {
        this.albumDicData = new Dictionary<long, RawData>(); // album id : AlbumData
        var ta = Resources.Load<TextAsset>("Data/total_album_data2"); // api 통신해서 json 가져오기 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<AlbumData[]>(json);

        for(int i=0; i<arrData.Length; i++) // album 수
        {
            for(int j=0; j<arrData[i].pictures.Length; j++) // 해당 앨범의 사진 수 
            {
                StartCoroutine(GetTexture(arrData[i].pictures[j]));
            }
        }

        foreach(var data in arrData)
        {
            this.albumDicData.Add(data.id, data);
        }
    }

    public void LoadUserAlbumData()
    {
        this.userAlbumDicData = new Dictionary<long, RawData>(); // 앨범 pos id : UserAlbumData
        var ta = Resources.Load<TextAsset>("Data/user_album_data2"); // api 통신해서 json 가져오기 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<UserAlbumData[]>(json);

        foreach (var data in arrData)
        {

            this.userAlbumDicData.Add(data.id, data);
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

    public void photoIdToPhoto(long albumId, long photoId) { 
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
