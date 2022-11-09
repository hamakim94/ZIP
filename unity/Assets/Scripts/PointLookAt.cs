using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointLookAt : MonoBehaviour
{
    public Transform target;
    Camera camera;

    void Start()
    {
        camera = Camera.main;
    }

    void Update()
    {
        //target의 position(3D)을 스크린 좌표로 변환하고 좌표를 변수 screenPos에 저장
        Vector3 screenPos = camera.WorldToScreenPoint(transform.position + new Vector3(0, 1f, 0));
        target.position = screenPos;
   
    }
}
