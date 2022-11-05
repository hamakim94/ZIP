using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;

public class DataManager : MonoBehaviour
{
    public static DataManager Instance; // ��ü�� ������ �ʰ� �ٸ� ������ ������ �� ����. 
    public Dictionary<long, RawData> dicData;

    private void Awake()
    {
        DataManager.Instance = this;
        this.dicData = new Dictionary<long, RawData>();
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
}
