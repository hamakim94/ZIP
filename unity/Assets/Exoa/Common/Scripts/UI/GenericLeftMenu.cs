
using Exoa.Maths;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class GenericLeftMenu : MonoBehaviour
    {

        public Button bgButton;
        private Image bgButtonImg;
        public Button openButton;
        //[HideInInspector]
        public bool isOpen;
        private RectTransform rt;
        public float closedX = -240f;
        public float openX = 240f;

        [Header("ANIMATION")]
        public Springs openingMove;
        public FloatSpring openingPosSpring;
        public Vector4Spring openingBgAlphaSpring;
        public Color openBgColorTarget = new Color(0f, 0f, 0f, .4f);
        public Color closedBgColorTarget = new Color(0f, 0f, 0f, 0f);

        public virtual void Start()
        {
            rt = GetComponent<RectTransform>();
            isOpen = false;
            openingPosSpring.Value = closedX;
            rt.anchoredPosition = rt.anchoredPosition.SetX(closedX);
            openButton.onClick.AddListener(OnClickOpen);
            bgButton?.onClick.AddListener(OnClickOpen);
            bgButton?.gameObject.SetActive(false);
            if (bgButton != null)
            {
                bgButtonImg = bgButton.GetComponent<Image>();
            }

            BuildMenu();
            //LevelEditorController.instance.onLevelLoaded.AddListener(OnLevelLoaded);

        }

        virtual protected void Update()
        {
            rt.anchoredPosition = rt.anchoredPosition.SetX(openingMove.Update(ref openingPosSpring, !isOpen ? closedX : openX));
            if (bgButtonImg != null) bgButtonImg.color = openingMove.Update(ref openingBgAlphaSpring, isOpen ? openBgColorTarget : closedBgColorTarget, OnBGAnimCompleted).ToColor();
        }

        private void OnBGAnimCompleted()
        {
            bgButton.gameObject.SetActive(isOpen);
        }

        private void OnLevelLoaded()
        {
            //BuildMenu();
        }

        public virtual void BuildMenu()
        {

        }

        private void OnClickOpen()
        {
            isOpen = !isOpen;
            Open(!isOpen);


        }
        virtual public void Close()
        {
            Open(true);
        }
        virtual public void Open(bool close)
        {
            isOpen = !close;
            bgButton.gameObject.SetActive(true);
            transform.SetSiblingIndex(transform.parent.childCount - 1);

        }
    }
}
