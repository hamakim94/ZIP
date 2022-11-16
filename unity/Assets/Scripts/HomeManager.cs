using Newtonsoft.Json;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class HomeManager : MonoBehaviour
{
    #region Private Fields
    [SerializeField]
    GameObject selectObject;
    [SerializeField]
    GameObject albumPhoto;
    private DataManager instance;
    #endregion

    #region MonoBehaviour Callbacks
    private void Awake()
    {
        if(instance == null)
        {
            instance = DataManager.Instance;
        }
    }
    #endregion

    #region Public Methods
    public void StartUpdateHome()
    {
        StartCoroutine(UpdataHome());
    }
    #endregion

    #region Private Methods
    private IEnumerator UpdataHome()
    {
        yield return StartCoroutine(LoadAlbumData());
        yield return StartCoroutine(instance.LoadUserItemData());
        yield return StartCoroutine(LoadUserAlbumData());
        selectObject.transform.GetComponent<StartBuild>().Init();
        albumPhoto.transform.GetComponent<HomeAlbumPhoto>().Init();
    }
    private IEnumerator LoadAlbumData()
    {
        instance.albumDicData = new Dictionary<long, RawData>(); // album id : AlbumData
        using UnityWebRequest www = APIManager.GetWWW("GET", "/album", null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            var json = www.downloadHandler.text; // api 통신해서 json 가져오기 
            var arrData = JsonConvert.DeserializeObject<AlbumData[]>(json);
            for (int i = 0; i < arrData.Length; i++) // album 수
            {
                for (int j = 0; j < arrData[i].pictures.Length; j++) // 해당 앨범의 사진 수 
                {
                    yield return StartCoroutine(GetTexture(arrData[i].pictures[j]));
                }
            }

            foreach (var data in arrData)
            {
                instance.albumDicData.Add(data.id, data);
            }
        }
        www.Dispose();
    }

    private IEnumerator LoadUserAlbumData()
    {
        DataManager.Instance.userAlbumDicData = new Dictionary<long, RawData>(); // 앨범 pos id : UserAlbumData
        using UnityWebRequest www = APIManager.GetWWW("GET", "/unity/album", null);
        yield return www.SendWebRequest(); // api 통신해서 json 가져오기 
        var json = www.downloadHandler.text;
        var arrData = JsonConvert.DeserializeObject<UserAlbumData[]>(json);
        var albums = DataManager.Instance.albumDicData;
        foreach (UserAlbumData data in arrData)
        {
            foreach (AlbumData Value in albums.Values)
            {
                foreach (PhotoData photo in Value.pictures)
                /*foreach(var photo in ((AlbumData)albums[albumId]).pictures)*/
                {
                    if (photo.id == data.pictureId)
                    {
                        data.texture = photo.texture;
                        break;
                    }
                }
            }
            Debug.Log(data);
            DataManager.Instance.userAlbumDicData.Add(data.id, data);
        }
        www.Dispose();
    }
    private IEnumerator GetTexture(PhotoData picture)
    {
        using UnityWebRequest www = UnityWebRequestTexture.GetTexture(picture.url);
        yield return www.SendWebRequest();

        picture.texture = DownloadHandlerTexture.GetContent(www);
        www.Dispose();
    }
    #endregion

}
