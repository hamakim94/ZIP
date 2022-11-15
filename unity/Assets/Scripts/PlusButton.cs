using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class PlusButton : MonoBehaviour
{
    [SerializeField]
    private Camera c;
    private GameObject furniturePanel;
    [SerializeField]
    private long id;
    [SerializeField]
    private GameObject obj;


    private void Start()
    {
        furniturePanel = transform.parent.parent.Find("FurniturePanel").gameObject;
    }

    public void buttonOnClick()
    {
        StartCoroutine(DataManager.Instance.LoadUserItemData(id, delegate (long id)
        {
            furniturePanel.GetComponent<FurniturePanel>().SetPosId(id);
            furniturePanel.SetActive(false);
            furniturePanel.SetActive(true);
            var childObj = obj.transform.GetChild((int)id - 1);
            childObj.GetChild(0).gameObject.SetActive(true);
            c.GetComponent<FollowCamera>().enabled = false;
            c.transform.position = new Vector3(childObj.position.x - 0.52f, c.transform.position.y, childObj.position.z - 6.56f);
            c.transform.LookAt(childObj);
        }));
    }
}
 