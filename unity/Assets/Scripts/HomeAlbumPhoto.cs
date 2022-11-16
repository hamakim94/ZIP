using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeAlbumPhoto : MonoBehaviour
{
    #region Private Fields
    private DataManager instance;
    #endregion

    #region MonoBehaviour Callbacks
    void Awake()
    {
        if(instance == null)
        {
            instance = DataManager.Instance;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }
    #endregion
    #region Public Methods
    public void Init()
    {
        Dictionary<long, RawData> userAlbumData = instance.userAlbumDicData;
        foreach (UserAlbumData data in userAlbumData.Values)
        {
            gameObject.transform.GetChild((int)data.id - 1).transform.GetChild(0).GetComponent<Photo>().SetTexture(data);
        }
    }
    #endregion
}