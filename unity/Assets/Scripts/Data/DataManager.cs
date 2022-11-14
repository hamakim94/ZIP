using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;


public class DataManager : MonoBehaviour
{
    #region Public Fields
    public static DataManager Instance; // ��ü�� ������ �ʰ� �ٸ� ������ ������ �� ����. 
    public Dictionary<long, RawData[]> totalItemDicData;
    public Dictionary<long, RawData[]> userItemDicData;
    /*public AlbumData[] albumData;*/
    public Dictionary<long, RawData> albumDicData;
    public Dictionary<long, RawData> userAlbumDicData;
    public Dictionary<long, RawData> dicData;
    /*public Texture texture;*/
    public UserInfo user;
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
    // path�� �ִ� json ������ load�ؼ� dictionary ���·� return 
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
        this.userItemDicData = new Dictionary<long, RawData[]>(); // ��ġid : ����ڰ���[](����ڰ��� list)
        var json = "";
        UnityWebRequest www = APIManager.GetWWW("GET", "/unity/create", null);
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
    #endregion

    #region Private Methods
    private void LoadTotalItemData()
    {
        this.totalItemDicData = new Dictionary<long, RawData[]>(); // ��ġid : ����[](���� list)
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
