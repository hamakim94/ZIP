using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeTest : MonoBehaviour
{
    private bool toggle = false;
    public void test()
    {
        toggle = !toggle;
        if (toggle) {
            transform.position = transform.position + new Vector3(0, 3f, 0);

                }
        else
        {
            transform.position = transform.position + new Vector3(0, -3f, 0);
        }
    }
}
