using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PhotoListItem : MonoBehaviour
{
    public RawImage picture;
    public Button photoBtn;

    public void Init(PhotoData photo)
    {
        // 데이터 넣기 
        picture.texture = photo.texture;

        photoBtn.onClick.AddListener(() => OnClickButton(photo));
    }

    private void OnClickButton(PhotoData photoData)
    {
        Debug.Log("PhotoData: " + photoData.id);
        // api 통신
        /*PageInvert.photoGO.GetComponent<Photo>().id*/
        /*
         * 액자 id 가져오기
         * 액자id에 선택한 사진id 저장하는 api 호출
         * 정상적으로 완료 시  photon customproperties에 <액자id, 사진id>로 변경
         */

        /*
         * customProperties가 변경된 것을 감지
         * 액자 1번 사진 2번
         * 
         * 포문을 돌며 현재 상태와 액자 사진 찾아서 변경하기
         */

        // 해당 액자에 사진 넣기 
        PageInvert.photoGO.GetComponent<Photo>().SetTexture(photoData.id);

        /*Material[] materials = PageInvert.photoGO.transform.GetComponent<MeshRenderer>().materials;
        materials[0].SetTexture("_MainTex", photo.texture);*/
    }
}
