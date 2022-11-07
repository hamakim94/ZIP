using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;


public class DataManager : MonoBehaviour
{
    public static DataManager Instance; // 객체를 만들지 않고도 다른 곳에서 꺼내쓸 수 있음. 
    public Dictionary<long, RawData[]> totalItemDicData;
    public Dictionary<long, RawData[]> userItemDicData;
    public Dictionary<long, RawData> dicData;

    private void Awake()
    {
        DataManager.Instance = this;
       
        LoadInitData();
        LoadUserData();

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

    private void LoadInitData()
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

    public void LoadUserData()
    {
        Debug.Log("LoadUserData");
        this.userItemDicData = new Dictionary<long, RawData[]>(); // 위치id : 사용자가구[](사용자가구 list)
        var ta = Resources.Load<TextAsset>("Data/user_item_data2"); // api 통신해서 json 가져오기 
        var json = ta.text;
        var arrData = JsonConvert.DeserializeObject<PositionUserItemData[]>(json);

        foreach (var data in arrData)
        {
            /*Debug.Log("data.id: " + data.id);
            Debug.Log("data.itemList: " + data.itemList);*/
            this.userItemDicData.Add(data.id, data.itemList);
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
}
