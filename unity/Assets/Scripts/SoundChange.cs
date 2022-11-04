using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundChange : MonoBehaviour
{
    public Sprite micOffImage;
    public Sprite micOnImage; 
    public Button micButton;
    public Image micButtonImage;
    private bool isOn = false;

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
            micButtonImage.sprite = micOffImage;
            isOn = false; 
        } else {
            micButtonImage.sprite = micOnImage;
            isOn = true;
        }
    }
}
