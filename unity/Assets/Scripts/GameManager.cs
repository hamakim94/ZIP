using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using ExitGames.Client.Photon;

public class GameManager : MonoBehaviourPunCallbacks
{
    #region Public Fields
    public static GameManager GMInstance;
    public GameObject playerPrefab;
    #endregion

    #region Private Fields

    private DataManager Instance;
    #endregion
    #region MonoBehavior Callbacsk
    void Awake()
    {
        Instance = DataManager.Instance;
        GMInstance = this;
    }
    void Start()
    {
        Init();
        if (playerPrefab == null)
        {
            Debug.LogError("<Color=Red><a>Missing</a></Color> playerPrefab Reference. Please set it up in GameObject 'Game Manager'", this);
        }
        else
        {
            if (PlayerManager.LocalPlayerInstance == null)
            {
                Debug.LogFormat("We are Instantiating LocalPlayer from {0}", SceneManagerHelper.ActiveSceneName);
                // we're in a room. spawn a character for the local player. it gets synced by using PhotonNetwork.Instantiate
                PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);

            }
            else
            {
                Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
            }
        }
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

        MainPanel.Instance.UpdatePeopleNum();
    }

    public override void OnPlayerLeftRoom(Player other)
    {
        Debug.LogFormat("OnPlayerLeftRoom() {0}", other.NickName);

        if (PhotonNetwork.IsMasterClient)
        {
            Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient);
        }

        MainPanel.Instance.UpdatePeopleNum();

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
                System.Collections.Generic.Dictionary<long, RawData> albumData = Instance.albumDicData;
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
    public void Init()
    {
        Hashtable furnitureSet = (Hashtable)PhotonNetwork.CurrentRoom.CustomProperties["furniture"];
        Hashtable photoSet = (Hashtable)PhotonNetwork.CurrentRoom.CustomProperties["photo"];
        foreach (long positionId in furnitureSet.Keys)
        {
            StartBuild.setFuniture(positionId, (long)furnitureSet[positionId]);
        }
        var target = GameObject.Find("AlbumPhoto");
        /*target.GetComponent<Photo>().SetTexture((UserAlbumData)((Hashtable)propertiesThatChanged["photo"])[id]);*/
        foreach (long photoId in photoSet.Keys)
        {
            Debug.Log("init : " + photoId);
            System.Collections.Generic.Dictionary<long, RawData> albumData = Instance.albumDicData;
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

    }
    #endregion

    #region Private Methods
    #endregion
}
