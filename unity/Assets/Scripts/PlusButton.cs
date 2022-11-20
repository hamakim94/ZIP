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
            if(childObj.childCount==1)
            childObj.GetChild(0).gameObject.SetActive(true);
            c.GetComponent<FollowCamera>().enabled = false;
            if (id >= 5 && id <= 7)
            {
                c.transform.position = new Vector3(childObj.position.x - 5f, c.transform.position.y, childObj.position.z - 0.52f);
            }
            else if (id >= 10 && id <= 12)
            {
                c.transform.position = new Vector3(childObj.position.x + 6.02f, c.transform.position.y, childObj.position.z - 0.52f);
            }
            else
            {
                c.transform.position = new Vector3(childObj.position.x - 0.52f, c.transform.position.y, childObj.position.z - 6.56f);
            }
            c.transform.LookAt(childObj);
        }));
    }
}
 