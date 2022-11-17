using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeAlbumPhoto : MonoBehaviour
{
    #region Private Fields
    private DataManager instance;
    Vector3 m_vecMouseDownPos;
    public Camera mainCamera;
    public GameObject btn;
    private GameObject photoGO;
    private Vector3 pos;
    private Quaternion q;
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
        pos = mainCamera.transform.position;
        q = mainCamera.transform.rotation;
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

    private void Update()
    {
#if UNITY_EDITOR
        // 마우스 클릭 시
        if (Input.GetMouseButtonDown(0))
#else
        // 터치 시
        if (Input.touchCount > 0)
#endif
        {
#if UNITY_EDITOR
            m_vecMouseDownPos = Input.mousePosition;
#else
            m_vecMouseDownPos = Input.GetTouch(0).position;
            if(Input.GetTouch(0).phase != TouchPhase.Began)
                return;
#endif
            // 카메라에서 스크린에 마우스 클릭 위치를 통과하는 광선을 반환합니다.
            Ray ray = mainCamera.ScreenPointToRay(m_vecMouseDownPos);
            RaycastHit hit;

            // 광선으로 충돌된 collider를 hit에 넣습니다.
 
                if (Physics.Raycast(ray, out hit))
                {
                    /*Debug.Log("hit.collider.name: " + hit.collider.name);*/
                    // 어떤 오브젝트인지 로그를 찍습니다.
                    if (hit.collider.name == "photoImg")
                    {
                        btn.SetActive(true);
                        photoGO = hit.transform.gameObject;
                        if (hit.transform.GetComponent<Photo>().id == 2 || hit.transform.GetComponent<Photo>().id == 3)
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x, hit.transform.position.y, hit.transform.position.z - 3f);
                            mainCamera.transform.LookAt(photoGO.transform);
                        }
                        else if (hit.transform.GetComponent<Photo>().id == 1)
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x + 3f, hit.transform.position.y, hit.transform.position.z);
                            mainCamera.transform.LookAt(photoGO.transform);
                        }
                        else
                        {
                            mainCamera.transform.position = new Vector3(hit.transform.position.x - 3f, hit.transform.position.y, hit.transform.position.z);
                            mainCamera.transform.LookAt(photoGO.transform);
                        }
                    }
                }
            }
        }
    public void closeOnClick()
    {
        btn.SetActive(false);
        mainCamera.transform.position = pos;
        mainCamera.transform.rotation = q;
    }
}
