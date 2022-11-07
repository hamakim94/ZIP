using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDetect : MonoBehaviour
{
    Transform target;
    [SerializeField]
    GameObject BtnParent;

    private void OnDrawGizmos() { 
        Gizmos.color = Color.red;
        Gizmos.DrawSphere(transform.position, 5f);
    }
    private void Start()
    {
        InvokeRepeating("UpdateTarget", 0f, 0.25f);
    }

    private void UpdateTarget()
    {
        Collider[] cols = Physics.OverlapSphere(transform.position, 3f);
        if (cols.Length > 0)
        {

            for (int i = 0; i < cols.Length; i++)
            {
                if (cols[i].tag == "Player")
                {
                    Debug.Log("들어왔니?");
                    target = cols[i].gameObject.transform;
                    BtnParent.transform.GetChild(0).gameObject.SetActive(true);
                }
            }
        }
        else
        {
            BtnParent.transform.GetChild(0).gameObject.SetActive(false);
            Debug.Log("Physics Enemy : Target lost");
            target = null;
        }

    }

}
