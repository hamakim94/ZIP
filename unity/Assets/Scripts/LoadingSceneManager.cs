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
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneName); // scene을 비동기적으로 로드 시작 
        operation.allowSceneActivation = false;  // 로드가 완료되어도 장면 전환 안되도록 

        while (!operation.isDone) // 로딩 완료
        {
            time = Time.time; // 시작 후 실행 시간 
            slider.value = time / 5f;
            if(time > 5)
            {
                operation.allowSceneActivation = true; // 로딩이 완료되는대로 장면 활성화 
            }

            yield return null;
        }
    }
}
