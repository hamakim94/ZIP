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
    [SerializeField]
    HomeAlbumPhoto homeAlbumPhoto;
    private DataManager instance;
    #endregion

    #region MonoBehaviour Callbacks
    private void Awake()
    {
        if(instance == null)
        {
            instance = DataManager.Instance;
        }
        /*instance.LoadTotalItemData();*/
        
    }
    private void Start()
    {
        /*StartCoroutine(UpdataHome());*/
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
        yield return StartCoroutine(instance.LoadUserItemData());
        yield return StartCoroutine(LoadUserAlbumData());
        selectObject.transform.GetComponent<StartBuild>().Init();
        albumPhoto.transform.GetComponent<HomeAlbumPhoto>().Init();
    }

    private IEnumerator LoadUserAlbumData()
    {
        DataManager.Instance.userAlbumDicData = new Dictionary<long, RawData>(); // 앨범 pos id : UserAlbumData
        using UnityWebRequest www = APIManager.GetWWW("GET", "/unity/album", null);
        yield return www.SendWebRequest(); // api 통신해서 json 가져오기 
        var json = www.downloadHandler.text;
        var arrData = JsonConvert.DeserializeObject<UserAlbumData[]>(json);
        /*var albums = DataManager.Instance.albumDicData;*/
        foreach (UserAlbumData data in arrData)
        {
            /*foreach (AlbumData Value in albums.Values)
            {*/
            /*foreach (PhotoData photo in Value.pictures)
            {
                if (photo.id == data.pictureId)
                {
                    data.texture = photo.texture;
                    break;
                }
            }*/
            /*}*/
            yield return StartCoroutine(GetTexture(data));
            Debug.Log(data);
            DataManager.Instance.userAlbumDicData.Add(data.id, data);
        }
        www.Dispose();
    }
    private IEnumerator GetTexture(UserAlbumData data)
    {
        using UnityWebRequest www = UnityWebRequestTexture.GetTexture(data.url);
        Debug.Log("url : "+data.url);
        yield return www.SendWebRequest();
        
        data.texture = DownloadHandlerTexture.GetContent(www);
        www.Dispose();
    }
    #endregion

}
