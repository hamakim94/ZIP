using System;
using UnityEngine;
using UnityEngine.UI;

public class NineSoftProgressbar : MonoBehaviour
{
    public float Value
    {
        get => this.value;
        set
        {
           
            float v = Mathf.Clamp01(value);
            this.value = v;

            bar.fillAmount = v;
        }
    }
    private float value;

    [SerializeField]private Image bar;

    [Range(0, 1)] [SerializeField] private float DefaultValue;
    [SerializeField] private Image.FillMethod ProgressType;

    private void Start()
    {
        UpdateValue();
    }
    private void CheckBarImage()
    {
        if (bar == null)
            bar = transform.GetChild(0).GetComponent<Image>();

        if (bar.type != Image.Type.Filled)
            bar.type = Image.Type.Filled;

        if (bar.fillMethod != ProgressType)
            bar.fillMethod = ProgressType;
    }
     
    private void UpdateValue()
    {
        CheckBarImage();
        Value = DefaultValue;
    }

    private void OnDrawGizmos()
    {
        if (Application.isPlaying) return;
        UpdateValue();
    }
}
