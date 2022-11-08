using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class LoadingSceneManager : MonoBehaviour
{
    public Slider slider;
    public string sceneName;

    private float time;


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(LoadAsynSceneCoroutine());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator LoadAsynSceneCoroutine()
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneName); // scene�� �񵿱������� �ε� ���� 
        operation.allowSceneActivation = false;  // �ε尡 �Ϸ�Ǿ ��� ��ȯ �ȵǵ��� 

        while (!operation.isDone) // �ε� �Ϸ�
        {
            time += Time.time; // ���� �� ���� �ð� 
            slider.value = time / 5f;
            if(time > 5)
            {
                operation.allowSceneActivation = true; // �ε��� �Ϸ�Ǵ´�� ��� Ȱ��ȭ 
            }

            yield return null;
        }
    }
}
