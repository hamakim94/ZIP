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
        // ������ �ֱ� 
        picture.texture = photo.texture;

        photoBtn.onClick.AddListener(() => OnClickButton(photo));
    }

    private void OnClickButton(PhotoData photoData)
    {
        Debug.Log("PhotoData: " + photoData.id);
        // api ���
        /*PageInvert.photoGO.GetComponent<Photo>().id*/
        /*
         * ���� id ��������
         * ����id�� ������ ����id �����ϴ� api ȣ��
         * ���������� �Ϸ� ��  photon customproperties�� <����id, ����id>�� ����
         */

        /*
         * customProperties�� ����� ���� ����
         * ���� 1�� ���� 2��
         * 
         * ������ ���� ���� ���¿� ���� ���� ã�Ƽ� �����ϱ�
         */

        // �ش� ���ڿ� ���� �ֱ� 
        PageInvert.photoGO.GetComponent<Photo>().SetTexture(photoData.id);

        /*Material[] materials = PageInvert.photoGO.transform.GetComponent<MeshRenderer>().materials;
        materials[0].SetTexture("_MainTex", photo.texture);*/
    }
}
