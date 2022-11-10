using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Capture2 : MonoBehaviour
{
    public Camera _camera;
    public Vector3 pos;

    private void Start()
    {
        pos = transform.GetChild(0).position;
        _camera.transform.position = new Vector3(pos.x + 1f, pos.y + 3f, pos.z - 2.2f);
        _camera.transform.LookAt(transform.GetChild(0));
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.Q))
        {
            pos = transform.GetChild(0).position;
            _camera.transform.position = new Vector3(pos.x + 1f, pos.y + 3f, pos.z - 2.2f);
            _camera.transform.LookAt(transform.GetChild(0));
        }
        if (Input.GetKey(KeyCode.Space))
        {;
            Capture();
        }
        
    }

    private void Capture()
    {
        string fileName = transform.GetChild(0).name;
        if (transform.GetChild(0).name.Contains("(Clone)"))
        {
            fileName = fileName.Split("(C")[0];
        }
        string path = $"{Application.persistentDataPath}/Capture/{fileName}.png";

        StartCoroutine(CoCapture(path));
    }

    private IEnumerator CoCapture(string path)
    {
        if (path == null)
        {
            yield break;
        }

        // ReadPixels을 하기 위해서 쉬어줌
        yield return new WaitForEndOfFrame();

        Rect rect = new Rect(0f, 0f, Screen.width, Screen.height);
        Texture2D texture = Capture(Camera.main, rect);
        Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));

        byte[] bytes = texture.EncodeToPNG();
        System.IO.File.WriteAllBytes(path, bytes);
    }

    private Texture2D Capture(Camera camera, Rect pRect)
    {
        Texture2D capture;
        CameraClearFlags preClearFlags = camera.clearFlags;
        Color preBackgroundColor = camera.backgroundColor;
        {
            camera.clearFlags = CameraClearFlags.SolidColor;

            camera.backgroundColor = Color.black;
            camera.Render();
            Texture2D blackBackgroundCapture = CaptureView(pRect);

            camera.backgroundColor = Color.white;
            camera.Render();
            Texture2D whiteBackgroundCapture = CaptureView(pRect);

            for (int x = 0; x < whiteBackgroundCapture.width; ++x)
            {
                for (int y = 0; y < whiteBackgroundCapture.height; ++y)
                {
                    Color black = blackBackgroundCapture.GetPixel(x, y);
                    Color white = whiteBackgroundCapture.GetPixel(x, y);
                    if (black != Color.clear)
                    {
                        whiteBackgroundCapture.SetPixel(x, y, GetColor(black, white));
                    }
                }
            }

            whiteBackgroundCapture.Apply();
            capture = whiteBackgroundCapture;
            UnityEngine.Object.DestroyImmediate(blackBackgroundCapture);
        }
        camera.backgroundColor = preBackgroundColor;
        camera.clearFlags = preClearFlags;
        return capture;
    }

    private Color GetColor(Color black, Color white)
    {
        float alpha = GetAlpha(black.r, white.r);
        return new Color(
            black.r / alpha,
            black.g / alpha,
            black.b / alpha,
            alpha);
    }

    private float GetAlpha(float black, float white)
    {
        return 1 + black - white;
    }

    private Texture2D CaptureView(Rect rect)
    {
        Texture2D captureView = new Texture2D((int)rect.width, (int)rect.height, TextureFormat.ARGB32, false);
        captureView.ReadPixels(rect, 0, 0, false);
        return captureView;
    }
}