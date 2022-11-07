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
        //target�� position(3D)�� ��ũ�� ��ǥ�� ��ȯ�ϰ� ��ǥ�� ���� screenPos�� ����
        Vector3 screenPos = camera.WorldToScreenPoint(transform.position + new Vector3(0, 1f, 0));
        Debug.Log(transform.position);
        target.position = screenPos;
   
    }
}
