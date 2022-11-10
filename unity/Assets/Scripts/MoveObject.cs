using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveObject : MonoBehaviour
{
    public bl_Joystick joystick; 
    public float speed;
    public Animator animator;
    private Vector3 moveVec;
    public GameObject ParentList;

    // Start is called before the first frame update
    private void Awake()
    {
        animator = GetComponent<Animator>();
        joystick = GameObject.Find("Joystick").GetComponent<bl_Joystick>();
        ParentList = GameObject.Find("BtnParent");
    }
    
    // Update is called once per frame
    void Update()
    {       
            // 위치
            moveVec = new Vector3(joystick.Horizontal, 0, joystick.Vertical) * speed * Time.deltaTime;
            
            /*tranform.position(tranform.position + moveVec);*/
            transform.position = transform.position + moveVec;
        if (moveVec == Vector3.zero)
        {
            animator.SetTrigger("A");
            return;
        }
        else if (moveVec != Vector3.zero)
        {
            animator.SetTrigger("Walk");
        }
        // 회전 
        if (moveVec.sqrMagnitude == 0) return; // input이 없으면 rotation 없음

        Quaternion dirQuat = Quaternion.LookRotation(moveVec); // 게임 오브젝트의 3차원 방향을 저장
        Quaternion moveQuat = Quaternion.Slerp(transform.rotation, dirQuat, 0.8f); // 회전 조작 
        /* rigid.MoveRotation(moveQuat);*/
        transform.rotation = moveQuat;
    }
}
