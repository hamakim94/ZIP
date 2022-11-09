using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhotoContent : MonoBehaviour
{
    public GameObject albumPhoto;  

    public void Init(int idx, PhotoData[] photos)
    {
        foreach(var p in photos)
        {
            // ¾Ù¹ü photo item 
            var photoOj = Instantiate(albumPhoto, this.transform);
            var photoScript = photoOj.GetComponent<PhotoListItem>();
            photoScript.Init(p);
        }
    }

    /*public*/
}
