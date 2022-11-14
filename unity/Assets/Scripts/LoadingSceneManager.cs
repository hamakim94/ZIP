using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Newtonsoft.Json;
using Photon.Pun;
using Photon.Realtime;

public class LoadingSceneManager : MonoBehaviourPunCallbacks
{
    #region  Public Fields
    public Slider slider;
    public string sceneName;
    #endregion
    #region Private Fields
    private DataManager dataManager;
    private float gage = 10000;
    private float doneGage = 0;
    private float tempGage = 0;
    private string gameVersion = "1";
    #endregion

    #region MonoBehaviour Callbacks
    void Awake()
    {
        dataManager = DataManager.Instance;
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(StartLoading());
    }
    #endregion

    #region MonoBehaviourPunCallbacks Callbacks;
    public override void OnConnectedToMaster()
    {
        Debug.Log("PUN Basics Tutorial/Launcher: OnConnectedToMaster() was called by PUN");
        Debug.Log("join room");
        /*PhotonNetwork.JoinOrCreateRoom(dataManager.user.family.id.ToString(), new RoomOptions { MaxPlayers = (byte)dataManager.user.family.memberNum }, TypedLobby.Default);*/
        PhotonNetwork.JoinRoom(dataManager.user.family.id.ToString());
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        Debug.LogWarningFormat("PUN Basics Tutorial/Launcher: OnDisconnected() was called by PUN with reason {0}", cause);
    }
    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        Debug.Log("Join failed");
        Dictionary<long, RawData[]> furnitureData = DataManager.Instance.userItemDicData;
        ExitGames.Client.Photon.Hashtable setValue = new ExitGames.Client.Photon.Hashtable();
        ExitGames.Client.Photon.Hashtable furnitureSet = new ExitGames.Client.Photon.Hashtable();
        foreach (long positionId in furnitureData.Keys)
        {
            foreach (RawData data in furnitureData[positionId])
            {
                if (((UserItemData)data).hasItemCode == 2)
                {
                    if (furnitureSet.ContainsKey(positionId))
                    {
                        furnitureSet.Remove(positionId);
                    }
                    furnitureSet.Add(positionId, data.id);
                    break;
                }
            }
        }
        setValue.Add("furniture", furnitureSet);

        //액자 정보 저장
        ExitGames.Client.Photon.Hashtable photoSet = new ExitGames.Client.Photon.Hashtable();
        Dictionary<long, RawData> photoData = DataManager.Instance.userAlbumDicData;
        foreach (long albumId in photoData.Keys)
        {
            if (((UserAlbumData)photoData[albumId]).texture != null)
            {
                if (photoSet.ContainsKey(albumId))
                {
                    photoSet.Remove(albumId);
                }
                photoSet.Add(albumId, JsonUtility.ToJson((UserAlbumData)photoData[albumId]));
            }
        }
        setValue.Add("photo", photoSet);
        setValue.Add("action", "init");
        Debug.Log(photoSet);
        //photon에 저장
        /*PhotonNetwork.CurrentRoom.SetCustomProperties(setValue);*/
        PhotonNetwork.CreateRoom(dataManager.user.family.id.ToString(), new RoomOptions { MaxPlayers = (byte)dataManager.user.family.memberNum, CustomRoomProperties = setValue });
    }

    public override void OnJoinedRoom()
    {
        Debug.LogFormat("PUN Basics Tutorial/Launcher: OnJoinedRoom() called by PUN. Now this client is in a room. room name {0}", PhotonNetwork.CurrentRoom.Name);
        for (int k = 0; k < 10000; k++)
        {
            doneGage += 0.001f;
        }
        doneGage = Mathf.Round(doneGage);

    }
    public override void OnCreatedRoom()
    {
        Debug.Log("Create Success");
        //가구 정보 저장

    }
    /*public override void OnCreatedRoom()
    {
        Dictionary<long, RawData[]> arrData = DataManager.Instance.userItemDicData;
        ExitGames.Client.Photon.Hashtable setValue = new ExitGames.Client.Photon.Hashtable();
        ExitGames.Client.Photon.Hashtable subSet = new ExitGames.Client.Photon.Hashtable();
        foreach (long positionId in arrData.Keys)
        {
            foreach (RawData data in arrData[positionId])
            {
                bool temp = false;
                Debug.Log("position" + positionId + " data " + data.id + " has " + ((UserItemData)data).hasItemCode);
                if (((UserItemData)data).hasItemCode == 2)
                {
                    temp = true;
                    if (setValue.ContainsKey("position" + positionId))
                    {
                        setValue.Remove("position" + positionId);
                    }
                    setValue.Add("position" + positionId, data.id);
                    Debug.Log(setValue["position" + positionId]);
                    break;
                }
            }
        }
        PhotonNetwork.CurrentRoom.SetCustomProperties(setValue);
    }*/
    #endregion

    #region Private Methods
    private void Connect()
    {
        PhotonNetwork.NickName = DataManager.Instance.user.name;
        Debug.Log("connect");
        if (PhotonNetwork.IsConnected)
        {
            Debug.Log("JoinRoom");
            PhotonNetwork.JoinRoom(dataManager.user.family.id.ToString());
        }
        else
        {
            PhotonNetwork.GameVersion = gameVersion;
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    private IEnumerator StartLoading()
    {

        StartCoroutine(LoadAsynSceneCoroutine());
        yield return StartCoroutine(LoadAlbumData());
        yield return StartCoroutine(LoadUserInfo());
        yield return StartCoroutine(dataManager.LoadUserItemData());
        yield return StartCoroutine(LoadUserAlbumData());
        Connect();

        yield return null;
    }

    private IEnumerator LoadAsynSceneCoroutine()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneName); // scene을 비동기적으로 로드 시작 
        operation.allowSceneActivation = false;  // 로드가 완료되어도 장면 전환 안되도록 

        while (!operation.isDone) // 로딩 완료
        {
            slider.value = doneGage / gage;
            if (doneGage == gage)
            {
                operation.allowSceneActivation = true; // 로딩이 완료되는대로 장면 활성화 
            }

            yield return null;
        }
    }
    private IEnumerator LoadUserInfo()
    {
        var json = "";
        UnityWebRequest www = APIManager.GetWWW("GET", "/users/profiles", null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(www.error);
        }
        else
        {
            json = www.downloadHandler.text;
        }
        dataManager.user = JsonConvert.DeserializeObject<UserInfo>(json);

    }
    private IEnumerator LoadAlbumData()
    {
        dataManager.albumDicData = new Dictionary<long, RawData>(); // album id : AlbumData
        UnityWebRequest www = APIManager.GetWWW("GET", "/album", null);
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
                tempGage += arrData[i].pictures.Length;
            }
            gage = tempGage + 10;
            for (int i = 0; i < arrData.Length; i++) // album 수
            {
                for (int j = 0; j < arrData[i].pictures.Length; j++) // 해당 앨범의 사진 수 
                {
                    yield return StartCoroutine(GetTexture(arrData[i].pictures[j]));
                    for (int k = 0; k < 10000; k++)
                    {
                        doneGage += 0.0001f;
                    }
                    doneGage = Mathf.Round(doneGage);
                }
            }

            foreach (var data in arrData)
            {
                dataManager.albumDicData.Add(data.id, data);
            }
        }

    }

    private IEnumerator LoadUserAlbumData()
    {
        DataManager.Instance.userAlbumDicData = new Dictionary<long, RawData>(); // 앨범 pos id : UserAlbumData
        UnityWebRequest www = APIManager.GetWWW("GET", "/unity/album", null);
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
    }
    private IEnumerator GetTexture(PhotoData picture)
    {
        UnityWebRequest www = UnityWebRequestTexture.GetTexture(picture.url);
        yield return www.SendWebRequest();

        picture.texture = DownloadHandlerTexture.GetContent(www);
    }
    #endregion
}
