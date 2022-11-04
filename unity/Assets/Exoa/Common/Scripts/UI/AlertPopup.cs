using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class AlertPopup : MonoBehaviour
    {
        public UnityEvent OnClickOKEvent;
        public UnityEvent OnClickCancelEvent;
        public bool showCancel;
        private Animator anim;

        public void Center()
        {
            RectTransform rt = transform as RectTransform;
            rt.anchoredPosition = Vector2.zero;
        }
        public void Open()
        {
            anim = GetComponent<Animator>();
            anim.Play("FadeIn");
        }
        public void Close()
        {
            anim = GetComponent<Animator>();
            anim.Play("Fade-out");
            StartCoroutine(RunPopupDestroy());
        }

        private IEnumerator RunPopupDestroy()
        {
            yield return new WaitForSeconds(2f);

            Destroy(gameObject);
        }



        public void InitTextValues(string pTitle, string pContent, bool showCancelBtn = false, string cancelText = "", string okText = "")
        {
            TMP_Text title = transform.FindChildRecursiveComp<TMP_Text>("TitleText");
            TMP_Text content = transform.FindChildRecursiveComp<TMP_Text>("ContentText");
            Button cancelBtn = transform.FindChildRecursiveComp<Button>("CancelBtn");
            Button okBtn = transform.FindChildRecursiveComp<Button>("OkBtn");
            cancelBtn.gameObject.SetActive(showCancelBtn);
            //TMP_Text cancel = cancelBtn.GetComponentInChildren<TMP_Text>();
            TMP_Text cancel = cancelBtn.transform.FindChildRecursiveComp<TMP_Text>("Text");
            TMP_Text cancel2 = cancelBtn.transform.FindChildRecursiveComp<TMP_Text>("Text Highlighted");
            //TMP_Text ok = okBtn.GetComponentInChildren<TMP_Text>();
            TMP_Text ok = okBtn.transform.FindChildRecursiveComp<TMP_Text>("Text");
            TMP_Text ok2 = okBtn.transform.FindChildRecursiveComp<TMP_Text>("Text Highlighted");
            title.text = pTitle;
            content.text = pContent;

            if (cancelText != "")
                cancel.text = cancel2.text = cancelText;
            if (okText != "")
                ok.text = ok2.text = okText;

            showCancel = showCancelBtn;

            if (showCancelBtn)
            {
                OnClickCancelEvent = new UnityEvent();
                cancelBtn.onClick.AddListener(OnClickCancel);
            }
            OnClickOKEvent = new UnityEvent();
            okBtn.onClick.AddListener(OnClickOk);
        }

        public static void ClosePopup(string v)
        {
            GameObject pGO = GameObject.Find("AlertPopup_" + v);
            if (pGO != null)
            {
                pGO.GetComponent<AlertPopup>().Close();
            }
        }

        protected void OnClickOk()
        {
            OnClickOKEvent.Invoke();
            Close();

        }

        protected void OnClickCancel()
        {
            OnClickCancelEvent.Invoke();
            Close();
        }

        public static AlertPopup ShowAlert(string name, string title, string content, bool showCancel = false, string cancelText = "Cancel", GameObject container = null)
        {
            string popupName = "AlertPopup_" + name;
            GameObject previousGO = GameObject.Find(popupName);

            if (previousGO != null)
            {
                previousGO.SetActive(true);

                AlertPopup ap = previousGO.GetComponent<AlertPopup>();
                ap.InitTextValues(title, content, showCancel, cancelText);

                return ap;
            }
            GameObject prefab = Resources.Load<GameObject>("AlertPopup");
            if (container == null)
                container = GameObject.Find("PopupsContainer");

            GameObject popup = Instantiate(prefab, container.transform);
            popup.name = popupName;
            popup.SetActive(true);

            AlertPopup alertPopup = popup.GetComponent<AlertPopup>();
            alertPopup.InitTextValues(title, content, showCancel, cancelText);

            return alertPopup;
        }

    }
}
