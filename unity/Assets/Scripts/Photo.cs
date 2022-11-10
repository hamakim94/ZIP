using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Photon.Pun;

public class Photo : MonoBehaviour
{
    public int id; // ¾×ÀÚ id 
    
    public void SetTexture(PhotoData photoData)
    {
        Material[] materials = transform.GetComponent<MeshRenderer>().materials;
        materials[0].SetTexture("_MainTex", photoData.texture);
    }
    public void SetTexture(UserAlbumData photoData)
    {
        Material[] materials = transform.GetComponent<MeshRenderer>().materials;
        materials[0].SetTexture("_MainTex", photoData.texture);
    }

    public void SetTexture(long pictureId)
    {
        PhotoData photoData = null;
        Dictionary<long, RawData> albumData = DataManager.Instance.albumDicData;
        bool result = false; 
        UserAlbumData userAlbumData = new UserAlbumData();

        foreach(AlbumData Value in albumData.Values)
        {
            foreach(PhotoData photo in Value.pictures)
            {
                if(photo.id == pictureId)
                {
                    userAlbumData.albumId = Value.id;
                    userAlbumData.id = id;
                    userAlbumData.pictureId = photo.id;
                    userAlbumData.texture = photo.texture;
                    /*photoData = photo;*/
                    result = true;
                    break; 
                }
            }

            if (result) break;
        }
        UnityAlbumRequestDTO unityAlbumRequestDTO = new UnityAlbumRequestDTO();
        unityAlbumRequestDTO.position = (int)userAlbumData.id;
        unityAlbumRequestDTO.pictureId = userAlbumData.pictureId;
        string json = JsonUtility.ToJson(unityAlbumRequestDTO);
        StartCoroutine(sendAPI(json, userAlbumData));
    }
    class UnityAlbumRequestDTO
{
    public int position;
    public long pictureId;
}
    public IEnumerator sendAPI(string json, UserAlbumData userAlbumData)
    {
        UnityWebRequest www = APIManager.GetWWW("POST", "/unity/album", json);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        www.uploadHandler = new UploadHandlerRaw(jsonToSend);
        www.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        www.SetRequestHeader("Content-Type", "application/json");
        yield return www.SendWebRequest();
        if(www.result != UnityWebRequest.Result.Success)
        {
            Debug.Log(www.error);
        }
        else
        {
            ExitGames.Client.Photon.Hashtable customProperties = PhotonNetwork.CurrentRoom.CustomProperties;
            ExitGames.Client.Photon.Hashtable photoSet = (ExitGames.Client.Photon.Hashtable)customProperties["photo"];
            if (customProperties.ContainsKey("photo"))
            {
                customProperties.Remove("photo");
            }
            if (photoSet.ContainsKey((long)id))
            {
                photoSet.Remove((long)id);
            }
            if (customProperties.ContainsKey("action"))
            {
                customProperties.Remove("action");
            }
            if (customProperties.ContainsKey("id"))
            {
                customProperties.Remove("id");
            }
            photoSet.Add(userAlbumData.id, JsonUtility.ToJson(userAlbumData));
            customProperties.Add("photo", photoSet);
            customProperties.Add("action", "photo");
            customProperties.Add("id", userAlbumData.id);
            PhotonNetwork.CurrentRoom.SetCustomProperties(customProperties);
            SetTexture(userAlbumData);
        }

    }
}
