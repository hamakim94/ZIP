using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NineSoftCursor : MonoBehaviour
{
   
    void Update()
    {
        transform.position = Input.mousePosition;

        if (Input.GetMouseButtonDown(0)) transform.localScale = Vector3.one * .9f;
        if (Input.GetMouseButtonUp(0)) transform.localScale = Vector3.one * 1;
    }
}
