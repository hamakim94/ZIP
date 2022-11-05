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

        // 문자열의 인덱스만큼 for문을 돌려 한 프레임에 writerText를 하나씩 증가시키고, 계속해서 출력해서 대사가 하나씩 입력되는 것처럼 보이게 함. 
        for (n = 0; n < text.Length; n++)
        {
            printText += text[n];
            animationText.text = printText;
            yield return null; // 다음 update까지 기다림 
        }
    }
}
