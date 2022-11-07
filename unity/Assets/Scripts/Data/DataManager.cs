using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;


public class DataManager : MonoBehaviour
{
    public static DataManager Instance; // ��ü�� ������ �ʰ� �ٸ� ������ ������ �� ����. 
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
        Debug.Log("LoadUserData");
        this.userItemDicData = new Dictionary<long, RawData[]>(); // ��ġid : ����ڰ���[](����ڰ��� list)
        var ta = Resources.Load<TextAsset>("Data/user_item_data2"); // api ����ؼ� json �������� 
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
