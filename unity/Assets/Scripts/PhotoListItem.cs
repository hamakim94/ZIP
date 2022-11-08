using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PhotoListItem : MonoBehaviour
{
    public RawImage picture;
    public Button photoBtn;

    void Start()
    {
    }

    public void Init(long id, PhotoData photo)
    {
        // 데이터 넣기 
        picture.texture = photo.texture;

        photoBtn.onClick.AddListener(() => OnClickButton(id));
    }

    private void OnClickButton(long photoId)
    {
        Debug.Log("PhotoData: " + photoId);
    }
}
