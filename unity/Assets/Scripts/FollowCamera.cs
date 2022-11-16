using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour
{
    public static Transform target;        // 따라다닐 타겟 오브젝트의 Transform
    public float x;
    public float y = -4.5f;
    public float y2 = -2.5f;
    public float z = 6;
    private Transform cameraTr;                // 카메라 자신의 Transform
    private float minX;
    
    void Start()
    {
        x = 0;
        y = -4.5f;
        y2 = -2.5f;
        z = 6;
        cameraTr = GetComponent<Transform>();
        cameraTr.position = new Vector3(target.position.x - x, target.position.y-y, target.position.z - z);
        cameraTr.LookAt(target);
    }
 
    void LateUpdate()
    {
        if (target.position.x - x < -5.5f)
            minX = -5.5f;
        else
            minX = target.position.x - x;

        cameraTr.position = new Vector3(minX, target.position.y-y, target.position.z - z);
        
        cameraTr.LookAt(new Vector3(target.position.x, target.position.y - y2, target.position.z));
    }
}
