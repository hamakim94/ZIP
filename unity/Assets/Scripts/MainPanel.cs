using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using TMPro;
using ExitGames.Client.Photon;

public class MainPanel : MonoBehaviourPunCallbacks
{
    #region Public Fields
    #endregion
    #region Private Fields
    private int point;
    [SerializeField]
    private GameObject photo1;
    [SerializeField]
    private TMP_Text peopleNumText;
    [SerializeField]
    private TMP_Text pointText;
    [SerializeField]
    private Text pointLegacy;
    private DataManager Instance;
    #endregion
    #region MonoBehavior Callbacks
    void Awake()
    {
        Instance = DataManager.Instance;
        SetPeopleNum();
        SetPoint(DataManager.Instance.user.family.memberNum);
        /*Dictionary<long, RawData[]> arrData = Instance.userItemDicData;
        Hashtable setValue = new Hashtable();
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
        PhotonNetwork.CurrentRoom.SetCustomProperties(setValue);*/
        
    }
    void Start()
    {
        Debug.Log("setFurniture Ω√¿€");
        Init();
        Debug.Log("setFurniture ≥°");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    #endregion
    #region MonoBehaviourPunCallbacks Callbacks
    public override void OnPlayerEnteredRoom(Player other)
    {
        Debug.LogFormat("OnPlayerEnteredRoom() {0}", other.NickName);

        if (PhotonNetwork.IsMasterClient)
        {
            Debug.LogFormat("OnPlyaerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient);
        }

        SetPeopleNum();
    }

    public override void OnPlayerLeftRoom(Player other)
    {
        Debug.LogFormat("OnPlayerLeftRoom() {0}", other.NickName);

        if (PhotonNetwork.IsMasterClient)
        {
            Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient);
        }
        
        SetPeopleNum();

    }

    public override void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
    {
        switch (propertiesThatChanged["action"])
        {
            case "init":
                break;
            case "furniture":
                StartBuild.setFuniture((long)propertiesThatChanged["id"], (long)((Hashtable)propertiesThatChanged["furniture"])[propertiesThatChanged["id"]]);
                break;
            case "photo":
                long id = (long)propertiesThatChanged["id"];
                var target = GameObject.Find("AlbumPhoto").transform.GetChild((int)id - 1).transform.GetChild(0);
                /*JsonUtility.FromJson<UserAlbumData>((string)((Hashtable)propertiesThatChanged["photo"])[id]);*/
                /*target.GetComponent<Photo>().SetTexture((UserAlbumData)((Hashtable)propertiesThatChanged["photo"])[id]);*/
                PhotoData photoData = null;
                System.Collections.Generic.Dictionary<long, RawData> albumData = DataManager.Instance.albumDicData;
                bool result = false;
                UserAlbumData userAlbumData = JsonUtility.FromJson<UserAlbumData>((string)((Hashtable)propertiesThatChanged["photo"])[id]);

                foreach (AlbumData Value in albumData.Values)
                {
                    foreach (PhotoData photo in Value.pictures)
                    {
                        if (photo.id == userAlbumData.pictureId)
                        {
                            userAlbumData.texture = photo.texture;
                            result = true;
                            break;
                        }
                    }

                    if (result) break;
                }
                target.GetComponent<Photo>().SetTexture(userAlbumData);
                break;
            default:
                break;
        }
    }

    #endregion

    #region Public Methods
    public void SetPoint(int point)
    {
        pointText.text = point + "";
        pointLegacy.text = point.ToString();
    }

    public void Init()
    {
        Hashtable furnitureSet = (Hashtable)PhotonNetwork.CurrentRoom.CustomProperties["furniture"];
        Hashtable photoSet = (Hashtable)PhotonNetwork.CurrentRoom.CustomProperties["photo"];
        foreach(long positionId in furnitureSet.Keys)
        {
            StartBuild.setFuniture(positionId, (long)furnitureSet[positionId]);
        }
        var target = GameObject.Find("AlbumPhoto");
        /*target.GetComponent<Photo>().SetTexture((UserAlbumData)((Hashtable)propertiesThatChanged["photo"])[id]);*/
        foreach (long photoId in photoSet.Keys)
        {
            Debug.Log("init : " + photoId);
            PhotoData photoData = null;
            System.Collections.Generic.Dictionary<long, RawData> albumData = DataManager.Instance.albumDicData;
            bool result = false;
            UserAlbumData userAlbumData = JsonUtility.FromJson<UserAlbumData>((string)photoSet[photoId]);

            foreach (AlbumData Value in albumData.Values)
            {
                foreach (PhotoData photo in Value.pictures)
                {
                    if (photo.id == userAlbumData.pictureId)
                    {
                        userAlbumData.texture = photo.texture;
                        result = true;
                        break;
                    }
                }

                if (result) break;
            }
            target.transform.GetChild((int)photoId - 1).transform.GetChild(0).GetComponent<Photo>().SetTexture(userAlbumData);
        }

        /*Debug.Log(furnitureSet);
        *//*foreach (string positionId in furnitureSet.Keys)
        {
            Debug.Log("positionId : " + positionId);
            Debug.Log("furnitureId : " + furnitureSet[positionId]);
            
        }*//*
        ExitGames.Client.Photon.Hashtable temp2 = PhotonNetwork.CurrentRoom.CustomProperties;

            Debug.Log("test1");
        Debug.Log(temp2["id"]);
        Debug.Log(((Hashtable)temp2["furniture"]));
        Debug.Log(((Hashtable)temp2["furniture"])[3L]);
        Debug.Log(((Hashtable)temp2["furniture"])[temp2["id"]]);
        Debug.Log((long)((Hashtable)temp2["furniture"])[temp2["id"]]);
            Debug.Log("test2");
        foreach (string key in temp2.Keys)
        {
            Debug.Log(key);

        }*/
    }

    #endregion

    #region Private Methods
    private void SetPeopleNum()
    {
        peopleNumText.text = PhotonNetwork.CurrentRoom.PlayerCount + "/" + PhotonNetwork.CurrentRoom.MaxPlayers;
    }
    #endregion
}
