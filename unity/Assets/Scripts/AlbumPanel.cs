using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class AlbumPanel : MonoBehaviour
{
    public GameObject albumItem;
    public RectTransform contents;
    public GameObject albumPhotosContent;
    public Transform viewPort;
    private List<GameObject> albumContentList;

    private void Start()
    {
        var albumDicData = DataManager.Instance.albumDicData;
        var i = 0;
        albumContentList = new List<GameObject>(new GameObject[albumDicData.Count]);

        foreach (var albumData in albumDicData)
        {
            var albumDataValue = (AlbumData)albumData.Value;

            // 앨범 item 
            var albumItemOj = Instantiate(this.albumItem, this.contents); // 게임 오브젝트의 복제본 생성 
            var albumScript = albumItemOj.GetComponent<AlbumListItem>();
            albumScript.Init(i, albumDataValue.id, albumDataValue.name, albumDataValue.pictures, albumContentList);

            // 앨범 content item 
            var albumPicturesOj = Instantiate(albumPhotosContent, viewPort);
            var albumPictures = albumPicturesOj.GetComponent<PhotoContent>(); 
            albumPictures.Init(i, albumDataValue.pictures);
            albumContentList[i] = albumPicturesOj; // 나중에 하나만 활성화하기 위함 

            i++;
        }
    }
}
