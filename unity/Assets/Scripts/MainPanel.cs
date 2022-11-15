using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro;
using System.Collections;
using UnityEngine.Networking;

public class MainPanel : MonoBehaviour
{
    #region Public Fields
    public static MainPanel Instance;
    #endregion
    #region Private Fields
    private int point;
    [SerializeField]
    private TMP_Text peopleNumText;
    [SerializeField]
    private TMP_Text pointText;
    [SerializeField]
    private Text pointLegacy;
    #endregion
    #region MonoBehavior Callbacsk
    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        UpdatePeopleNum();
    }

    void Update()
    {
    }
    
    void Start()
    {
        StartCoroutine(UpdatePoint());
    }
    #endregion

    #region Public Methods
    
    public void UpdatePeopleNum()
    {
        peopleNumText.text = PhotonNetwork.CurrentRoom.PlayerCount + "/" + PhotonNetwork.CurrentRoom.MaxPlayers;
    }
    #endregion

    #region Private Methods
    public IEnumerator UpdatePoint()
    {
        using UnityWebRequest www = APIManager.GetWWW("GET", "/users/points", null);

        yield return www.SendWebRequest();
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("success update point");
            pointText.text = www.downloadHandler.text.ToString();
            pointLegacy.text = www.downloadHandler.text.ToString();
        }
        www.Dispose();
    }
    #endregion
}
