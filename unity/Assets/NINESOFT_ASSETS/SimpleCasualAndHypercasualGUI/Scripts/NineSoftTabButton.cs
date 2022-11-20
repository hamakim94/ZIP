using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class NineSoftTabButton : MonoBehaviour
{

    [HideInInspector] public UnityEvent OnTabChanged;

    [SerializeField] private Image Icon;
    [SerializeField] private Image CheckMark;
    [SerializeField] private Text Text;
    private Image Image;

    private Color SelectedColor;
    private Color DefaultColor;

    

    public void Initialize(string tabName,Sprite icon,Color defaultColor, Color selectedColor,Color checkMarkColor)
    {
        Image = GetComponent<Image>();
        if (Text != null) Text.text = tabName;
        Icon.sprite = icon;
        DefaultColor = defaultColor;
        SelectedColor = selectedColor;
        CheckMark.color = checkMarkColor;
    }

    public void ChangeMe() => OnTabChanged?.Invoke();

    public void Select()
    {
        Image.color = SelectedColor;
        CheckMark.gameObject.SetActive(true);
        if (Text != null) Text.color = CheckMark.color;
    }

    public void Unselect()
    {
        Image.color =DefaultColor;
        CheckMark.gameObject.SetActive(false);
        if (Text != null) Text.color = Color.gray;
    }

}
