using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;


public class PlayerManager : MonoBehaviourPunCallbacks
{
    #region Public Fields
    public static GameObject LocalPlayerInstance;
    public static bool isPlayerUIVisible;
    #endregion

    #region Private Fields
    [SerializeField]
    private GameObject playerUiPrefab;
    private GameObject playerUI;

    #endregion

    #region MonoBehaviour Callbacks
    void Awake()
    {
        if (photonView.IsMine)
        {
            LocalPlayerInstance = gameObject;
            FollowCamera.target = gameObject.transform;
            gameObject.tag = "Player";
            AudioListener.volume = 1;
        }
        DontDestroyOnLoad(gameObject);
    }
    void Update()
    {
        /*if(playerUI != null)
        {
            playerUI.SetActive(isPlayerUIVisible);
        }*/
    }
    void Start()
    {
        // Create the UI
        if (this.playerUiPrefab != null)
        {
            var target = GameObject.Find("PlayerUIParent");
            GameObject _uiGo = Instantiate(this.playerUiPrefab);
            if (target != null)
            {
                _uiGo.transform.parent = target.transform;
            }
            _uiGo.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
        }
        else
        {
            Debug.LogWarning("<Color=Red><b>Missing</b></Color> PlayerUiPrefab reference on player Prefab.", this);
        }
        UnityEngine.SceneManagement.SceneManager.sceneLoaded += OnSceneLoaded;
    }
    #endregion

    #region Public Methods
    public void CalledOnLevelWasLoaded(int level)
    {
        // check if we are outside the Arena and if it's the case, spawn around the center of the arena in a safe zone
        if (!Physics.Raycast(transform.position, -Vector3.up, 5f))
        {
            transform.position = new Vector3(0f, 0f, 0f);
        }
        var target = GameObject.Find("PlayerUIParent");
        playerUI = Instantiate(this.playerUiPrefab);
        if (target)
        {
            playerUI.transform.parent = target.transform;
        }
        playerUI.SendMessage("SetTarget", this, SendMessageOptions.RequireReceiver);
    }
    #endregion

    #region Private Methods
    private void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode loadingMode)
    {
        this.CalledOnLevelWasLoaded(scene.buildIndex);
    }
    #endregion
}