using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Photo : MonoBehaviour
{
    public int id; // ¾×ÀÚ id 
    
    public void SetTexture(PhotoData photoData)
    {
        Material[] materials = transform.GetComponent<MeshRenderer>().materials;
        materials[0].SetTexture("_MainTex", photoData.texture);
    }

    public void SetTexture(long pictureId)
    {
        PhotoData photoData = null;
        Dictionary<long, RawData> albumData = DataManager.Instance.albumDicData;
        bool result = false; 

        foreach(AlbumData Value in albumData.Values)
        {
            foreach(PhotoData photo in Value.pictures)
            {
                if(photo.id == pictureId)
                {
                    photoData = photo;
                    result = true;
                    break; 
                }
            }

            if (result) break;
        }

        SetTexture(photoData);
    }
}
