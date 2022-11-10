using System;
using System.Collections;
using System.IO;
using UnityEngine;

namespace Net.Hinaloe.ScreenCapture
{
    public class Capture : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            Debug.Log("Capture script is ready.");
        }

        void Update()
        {
            if (Input.GetKeyDown(KeyCode.S) && Input.GetKey(KeyCode.LeftShift))
            {
                // CaptureScreen();
                StartCoroutine(CaptureScreenAlpha());
            }
        }

        /**
         * non transparent capture
         */
        void CaptureScreen()
        {
            var filename = $"{DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss")}.png";
            Debug.Log(filename);

            UnityEngine.ScreenCapture.CaptureScreenshot(filename: filename, 4);
        }

        /**
         * Transparent capture with API (able to use super-size)
         */
        IEnumerator CaptureScreenAlpha()
        {
            Debug.Log("Capture Screen (alpha)");
            yield return new WaitForEndOfFrame();
            var filename = $"{Application.persistentDataPath}/Capture/{DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss")}.png";
            Debug.Log(filename);

            var texture = UnityEngine.ScreenCapture.CaptureScreenshotAsTexture(4);

            var image = texture.EncodeToPNG();
            Destroy(texture);
            File.WriteAllBytes(filename, image);
        }

        /**
         * Transparent screen capture with reading pixels
         */
        IEnumerator CaptureScreenAlphaAlt()
        {
            Debug.Log("Capture Screen (alpha) with reading pixels");
            yield return new WaitForEndOfFrame();
            var filename = $"{Application.persistentDataPath}/Capture/{DateTime.Now.ToString("yyyy-MM-dd-HH-mm-ss")}.png";
            Debug.Log(filename);

            var texture = new Texture2D(Screen.width, Screen.height, TextureFormat.ARGB32, false);
            texture.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
            texture.Apply();

            var image = texture.EncodeToPNG();
            Destroy(texture);
            File.WriteAllBytes(filename, image);

        }
    }
}