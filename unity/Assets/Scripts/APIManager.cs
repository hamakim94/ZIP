using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public static class APIManager
{
    #region Public methods
    static string jsonResult;
    public static UnityWebRequest GetWWW(string method, string url, string jsonfile)
    {
        string apiURL = baseURL + url;
        UnityWebRequest www;
        switch (method)
        {
            case "GET":
                www = UnityWebRequest.Get(apiURL);
                break;
            case "POST":
                www = UnityWebRequest.Post(apiURL, jsonfile);
                break;
            case "PUT":
                www = UnityWebRequest.Put(apiURL, jsonfile);
                break;
            case "Texture":
                www = UnityWebRequestTexture.GetTexture(url);
                break;
            default:
                www = UnityWebRequest.Delete(apiURL);
                break;
        }
        www.SetRequestHeader("ACCESSTOKEN", accessToken);
        return www;
        /*yield return www.SendWebRequest();
        if(www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("success");
            jsonResult = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
            Debug.Log(jsonResult);
            Debug.Log(www.downloadHandler.text);
        }*/
    }

    public static void SetAccessToken(string token)
    {
        accessToken = token;
    }
    public static void SetRefreshToken(string token)
    {
        refreshToken = token;
    }
    #endregion


    #region Private methods

    private static string accessToken = "eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiI2IiwiaWF0IjoxNjY4NDk5NDIwLCJleHAiOjE2NzEwOTE0MjB9.GaLVUedOSUtPa_qTgZUSrSPIwGpBk8-8eqqEPE8Z9cY";
    private static string refreshToken;
    private static string baseURL = "https://k7a407.p.ssafy.io/api";

    #endregion
}