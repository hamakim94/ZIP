using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveObject : MonoBehaviour
{
    public bl_Joystick joystick; 
    public float speed;

    Rigidbody rigid;
    private Vector3 moveVec;

    RaycastHit hit;

    // Start is called before the first frame update
    void Start()
    {
        rigid = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {       
            // 위치
            moveVec = new Vector3(joystick.Horizontal, 0, joystick.Vertical) * speed * Time.deltaTime;
            rigid.MovePosition(rigid.position + moveVec);

            if(moveVec == Vector3.zero) return;
            // 회전 
            // if(moveVec.sqrMagnitude == 0) return; // input이 없으면 rotation 없음

            Quaternion dirQuat = Quaternion.LookRotation(moveVec); // 게임 오브젝트의 3차원 방향을 저장
            Quaternion moveQuat = Quaternion.Slerp(rigid.rotation, dirQuat, 0.8f); // 회전 조작 
            rigid.MoveRotation(moveQuat);

            if(Physics.Raycast(rigid.transform.position, rigid.transform.forward, out hit, 5))
        {
            Debug.Log(hit.collider.name);
            Debug.DrawRay(rigid.transform.position, rigid.transform.forward * hit.distance, Color.red);
        }
    }

    void LateUpdate(){
        
    }
}
