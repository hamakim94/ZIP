using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Voice.Unity;

public class SoundChange : MonoBehaviour
{
    public Sprite micOffImage;
    public Sprite micOnImage; 
    public Button micButton;
    public Image micButtonImage;
    private Recorder recorder;
    private bool isOn = false;
    void Awake()
    {
        recorder = GameObject.Find("DataManager").gameObject.GetComponent<Recorder>();
    }

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ButtonClicked(){
        
        if(isOn){
            Debug.Log("mic off");
            Debug.Log(recorder);
            recorder.RecordingEnabled = false;
            micButtonImage.sprite = micOffImage;
            isOn = false; 
        } else {
            Debug.Log("mic on");
            Debug.Log(recorder);
            recorder.RecordingEnabled = true;
            micButtonImage.sprite = micOnImage;
            isOn = true;
        }
    }
}
