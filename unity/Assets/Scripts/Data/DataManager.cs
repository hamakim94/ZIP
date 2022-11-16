using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using Photon.Pun;


public class DataManager : MonoBehaviour
{
    #region Public Fields
    public static DataManager Instance; // 객체를 만들지 않고도 다른 곳에서 꺼내쓸 수 있음. 
    public Dictionary<long, RawData[]> totalItemDicData;
    public Dictionary<long, RawData[]> userItemDicData;
    /*public AlbumData[] albumData;*/
    public Dictionary<long, RawData> albumDicData;
    public Dictionary<long, RawData> userAlbumDicData;
    public Dictionary<long, RawData> dicData;
    public delegate void afterBuyFurniture(int i);
    public delegate void afterReloadUserItemData(long id);
    /*public Texture texture;*/
    public UserInfo user;
    #endregion

    #region Private Fields
    class UnityUseItemRequestDTO
    {
        public long furniturePosition;
        public long furnitureId;
    }
#endregion
#region MonoBehaviour Callbacks
private void Awake()
    {
        if (Instance == null)
        {
            DataManager.Instance = this;

            LoadTotalItemData();

            this.dicData = new Dictionary<long, RawData>();
            DontDestroyOnLoad(gameObject);
        }
    }
    #endregion

    #region Public Methods
    // path에 있는 json 파일을 load해서 dictionary 형태로 return 
    public void LoadData(string path)
    {
        var ta = Resources.Load<TextAsset>(path);
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<ShopItemData[]>(json);

        foreach (var data in arrData)
        {
            this.dicData.Add(data.id, data);
        }
    }

    public IEnumerator LoadUserItemData()
    {
        this.userItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 사용자가구[](사용자가구 list)
        var json = "";
        using UnityWebRequest www = APIManager.GetWWW("GET", "/unity/create", null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(www.error);
        }
        else
        {
            json = www.downloadHandler.text;
            var arrData = JsonConvert.DeserializeObject<PositionUserItemData[]>(json);

            foreach (var data in arrData)
            {
                this.userItemDicData.Add(data.id, data.itemList);
            }
        }
        www.Dispose();
    }

    public IEnumerator LoadUserItemData(long id, afterReloadUserItemData afterReloadUserItemData)
    {
        this.userItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 사용자가구[](사용자가구 list)
        var json = "";
        using UnityWebRequest www = APIManager.GetWWW("GET", "/unity/create", null);
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError(www.error);
        }
        else
        {
            json = www.downloadHandler.text;
            var arrData = JsonConvert.DeserializeObject<PositionUserItemData[]>(json);

            foreach (var data in arrData)
            {
                this.userItemDicData.Add(data.id, data.itemList);
            }
                afterReloadUserItemData(id);
        }
        www.Dispose();
    }

    public RawData itemIdToItem(long positionId, long itemId)
    {
        var itemList = totalItemDicData[positionId];

        for (int i = 0; i < itemList.Length; i++)
        {
            if (itemId == itemList[i].id)
            {
                return itemList[i];
            }
        }

        return null;
    }

    public void photoIdToPhoto(long albumId, long photoId)
    {
    }

    public IEnumerator BuyFurniture(long furnitureId, afterBuyFurniture afterBuyFurniture)
    {
        string url = "/unity/shop/" + furnitureId.ToString();
        Debug.Log(url);
        using UnityWebRequest www = APIManager.GetWWW("POST", url, null);
        yield return www.SendWebRequest();
        if(www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            ExitGames.Client.Photon.Hashtable customProperties = PhotonNetwork.CurrentRoom.CustomProperties;
            if (customProperties.ContainsKey("action"))
            {
                customProperties.Remove("action");
            }
            customProperties.Add("action", "buy");
            PhotonNetwork.CurrentRoom.SetCustomProperties(customProperties);
            afterBuyFurniture(1);
        }
        www.Dispose();
    }

    public IEnumerator SetFurniture(long positionId, long furnitureId)
    {
        Debug.Log("posId" + positionId + " furnitureId " + furnitureId);
        UnityUseItemRequestDTO unityUseItemRequestDTO = new UnityUseItemRequestDTO();
        unityUseItemRequestDTO.furniturePosition = positionId;
        unityUseItemRequestDTO.furnitureId = furnitureId;
        string json = JsonUtility.ToJson(unityUseItemRequestDTO);
        using UnityWebRequest www = APIManager.GetWWW("POST", "/unity/use", json);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        www.uploadHandler = new UploadHandlerRaw(jsonToSend);
        www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www.SetRequestHeader("Content-Type", "application/json");
        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("success");
            ExitGames.Client.Photon.Hashtable customProperties = PhotonNetwork.CurrentRoom.CustomProperties;
            ExitGames.Client.Photon.Hashtable furnitureSet = (ExitGames.Client.Photon.Hashtable)customProperties["furniture"];
            if (customProperties.ContainsKey("furniture"))
            {
                customProperties.Remove("furniture");
            }
            if (furnitureSet.ContainsKey(positionId))
            {
                furnitureSet.Remove(positionId);
            }
            if (customProperties.ContainsKey("action"))
            {
                customProperties.Remove("action");
            }
            if (customProperties.ContainsKey("id"))
            {
                customProperties.Remove("id");
            }
            furnitureSet.Add(positionId, furnitureId);
            customProperties.Add("furniture", furnitureSet);
            customProperties.Add("action", "furniture");
            customProperties.Add("id", positionId);
            PhotonNetwork.CurrentRoom.SetCustomProperties(customProperties);
            StartBuild.setFuniture(positionId, furnitureId);
        }
        www.Dispose();
    }
    #endregion

    #region Private Methods
    private void LoadTotalItemData()
    {
        this.totalItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 가구[](가구 list)
        var ta = Resources.Load<TextAsset>("Data/total_item_data");
        var json = ta.text;
        Debug.Log(ta.text);
        var arrData = JsonConvert.DeserializeObject<PositionData[]>(json);

        foreach (var data in arrData)
        {
            this.totalItemDicData.Add(data.id, data.itemList);
        }
    }
    #endregion
}
