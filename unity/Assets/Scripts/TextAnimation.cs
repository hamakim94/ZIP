using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextAnimation : MonoBehaviour
{
    public Text animationText;


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(TextPractice());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator TextPractice()
    {
        yield return StartCoroutine(AnimateText("Loading..."));
    }

    IEnumerator AnimateText(string text)
    {
        int n = 0;
        string printText = "";

        // ���ڿ��� �ε�����ŭ for���� ���� �� �����ӿ� writerText�� �ϳ��� ������Ű��, ����ؼ� ����ؼ� ��簡 �ϳ��� �ԷµǴ� ��ó�� ���̰� ��. 
        for (n = 0; n < text.Length; n++)
        {
            printText += text[n];
            animationText.text = printText;
            yield return null; // ���� update���� ��ٸ� 
        }
    }
}
