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

            // �ٹ� item 
            var albumItemOj = Instantiate(this.albumItem, this.contents); // ���� ������Ʈ�� ������ ���� 
            var albumScript = albumItemOj.GetComponent<AlbumListItem>();
            albumScript.Init(i, albumDataValue.id, albumDataValue.name, albumDataValue.pictures, albumContentList);

            // �ٹ� content item 
            var albumPicturesOj = Instantiate(albumPhotosContent, viewPort);
            var albumPictures = albumPicturesOj.GetComponent<PhotoContent>(); 
            albumPictures.Init(i, albumDataValue.pictures);
            albumContentList[i] = albumPicturesOj; // ���߿� �ϳ��� Ȱ��ȭ�ϱ� ���� 

            i++;
        }
    }
}
