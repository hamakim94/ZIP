using Exoa.Designer.Utils;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class UIFloorItem : MonoBehaviour
    {
        public delegate void OnSelectHandler(string name);
        public delegate void OnMoveHandler(bool moveUp);
        public delegate void OnFloorItemEventHandler(UIFloorItem item);
        public OnFloorItemEventHandler OnDelete;
        public OnFloorItemEventHandler OnSelect;
        public OnMoveHandler OnMove;
        public OnSelectHandler OnDuplicate;

        [HideInInspector]
        public string floorUniqueId;
        public Button openBtn;
        public Button duplicateBtn;
        public Button delBtn;
        public Button upBtn;
        public Button downBtn;
        public TMP_Text nameText;
        public RawImage image1;
        public RawImage image2;
        public UISaving.ThumbnailPrefixes thumbnailPrefix;

        void Start()
        {
            delBtn.onClick.AddListener(OnClickDelete);
            openBtn.onClick.AddListener(OnClickOpen);
            duplicateBtn.onClick.AddListener(OnClickDuplicate);
            upBtn.onClick.AddListener(OnClickMoveUp);
            downBtn.onClick.AddListener(OnClickMoveDown);
            SetName();
        }

        private void OnClickDuplicate()
        {
            OnDuplicate?.Invoke(floorUniqueId);
        }

        private void OnClickMoveDown()
        {
            int index = transform.GetSiblingIndex();
            transform.SetSiblingIndex(index + 1);
            SetName();
            OnMove?.Invoke(false);
        }

        private void OnClickMoveUp()
        {
            int index = transform.GetSiblingIndex();
            transform.SetSiblingIndex(index - 1);
            SetName();
            OnMove?.Invoke(true);
        }

        public void SetName()
        {
            int floorNum = transform.parent.childCount - transform.GetSiblingIndex();
            string groundStr = floorNum == 1 ? "Ground Floor" : floorNum.DisplayWithSuffix() + " Floor";
            nameText.text = groundStr;
        }

        private void OnClickDelete()
        {
            AlertPopup p = AlertPopup.ShowAlert("confirm", "Confirm?", "Do you really want to delete this floor?", true, "Cancel");
            if (p != null)
                p.OnClickOKEvent.AddListener(() => Delete(floorUniqueId));
        }

        public void SetImages(Texture2D tex2)
        {
            if (image2 != null) image2.texture = tex2;
        }


        private void OnClickOpen()
        {
            OnSelect?.Invoke(this);
        }

        public void Delete(string uniqyeId)
        {
            OnDelete?.Invoke(this);
        }

        public string GetName()
        {
            return nameText.text;
        }

        public void ShowButtons(bool show)
        {
            delBtn?.gameObject.SetActive(show);
            duplicateBtn?.gameObject.SetActive(show);
            upBtn?.gameObject.SetActive(show);
            downBtn?.gameObject.SetActive(show);
        }

        public void LoadThumbnail()
        {
            string perspViewName = floorUniqueId + "_persp";

            Texture2D t2 = ThumbnailGeneratorUtils.Load(thumbnailPrefix + "_" + perspViewName);

            SetImages(t2);
        }
    }
}
