using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class RequestFeedback : MonoBehaviour
    {

        public static RequestFeedback instance;
        private Transform loadingImage;

        [HideInInspector]
        public Transform message;
        [HideInInspector]
        public Transform prompt;

        public Text messageTitle;
        public Text messageBody;
        public Button messageButton;
        public Action callback;
        private Action callback2;
        private Action callback3;

        public Text promptMessageTitle;
        public Text promptMessageBody;
        public Button promptOkBtn;
        public Text promptOkBtnTxt;
        public Button promptCancelBtn;
        public Text promptCancelBtnTxt;
        void Awake()
        {
            if (instance != null)
            {
                Destroy(this);
                return;
            }
            instance = this;
            RectTransform rect = GetComponent<RectTransform>();
            rect.anchoredPosition = new Vector2();
            loadingImage = transform.Find("LoadingImage");
            message = transform.Find("Message");
            prompt = transform.Find("Prompt");

            //messageButton.OnPointerClick. += OnPointerClickHandler;
            message.gameObject.SetActive(false);
            prompt.gameObject.SetActive(false);
            gameObject.SetActive(false);

        }


        private void OnClickOK()
        {
            ShowLoading(false);
            if (callback != null)
            {
                callback();
                messageButton.onClick.RemoveListener(OnClickOK);
                callback = null;
            }
        }

        public static void ShowLoading(bool show = true)
        {
            if (instance == null)
                return;

            instance.gameObject.SetActive(show);
            instance.message.gameObject.SetActive(false);
            instance.prompt.gameObject.SetActive(false);

            if (show)
                instance.StartCoroutine("UpdateLoading");
            else
                instance.StopCoroutine("UpdateLoading");


        }
        public void ShowMessage(bool show, string title, string msg, Action pcallback = null)
        {
            gameObject.SetActive(show);
            callback = pcallback;
            message.gameObject.SetActive(show);

            messageTitle.text = title;
            messageBody.text = msg;
            messageButton.onClick.AddListener(OnClickOK);


        }

        public void ShowPrompt(bool show, string title, string msg, string okBtnText, string cancelBtnTxt, Action pcallbackOk = null, Action pcallbackCancel = null)
        {
            gameObject.SetActive(show);
            callback2 = pcallbackOk;
            callback3 = pcallbackCancel;
            prompt.gameObject.SetActive(show);

            promptMessageTitle.text = title;
            promptMessageBody.text = msg;
            promptOkBtnTxt.text = okBtnText;
            promptCancelBtnTxt.text = cancelBtnTxt;
            promptOkBtn.onClick.AddListener(OnClickPromptOK);
            promptCancelBtn.onClick.AddListener(OnClickPromptCancel);


        }
        private void OnClickPromptOK()
        {
            ShowLoading(false);
            if (callback2 != null)
            {
                callback2();
                promptOkBtn.onClick.RemoveListener(OnClickPromptOK);
                callback2 = null;
            }
        }
        private void OnClickPromptCancel()
        {
            ShowLoading(false);
            if (callback3 != null)
            {
                callback3();
                promptCancelBtn.onClick.RemoveListener(OnClickPromptCancel);
                callback3 = null;
            }
        }

        IEnumerator UpdateLoading()
        {
            while (true)
            {
                loadingImage.Rotate(0, 0, -45);
                yield return new WaitForSeconds(.1f);
            }
        }

    }
}
