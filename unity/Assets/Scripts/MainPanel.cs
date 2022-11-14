using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using TMPro;

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
        SetPoint(DataManager.Instance.user.family.memberNum);
    }

    void Update()
    {
    }
    #endregion

    #region Public Methods
    public void SetPoint(int _point)
    {
        point = _point;
        UpdatePoint(point);
    }
    public void UpdatePeopleNum()
    {
        peopleNumText.text = PhotonNetwork.CurrentRoom.PlayerCount + "/" + PhotonNetwork.CurrentRoom.MaxPlayers;
    }
    #endregion

    #region Private Methods
    private void UpdatePoint(int point)
    {
        pointText.text = point.ToString();
        pointLegacy.text = point.ToString();
    }
    #endregion
}
