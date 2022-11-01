using Exoa.Events;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class UISavingItem : MonoBehaviour
    {
        public delegate void OnSelectHandler(string name);
        public OnSelectHandler OnSelect;

        [HideInInspector]
        public string fileName;
        [HideInInspector]
        public string levelPath;
        public Button openBtn;
        public Button editBtn;
        public Button delBtn;
        public Button validBtn;
        public Button upBtn;
        public Button downBtn;
        public TMP_Text nameText;
        public InputField nameInput;
        public RawImage image1;
        public RawImage image2;
        public UISaving.ThumbnailPrefixes thumbnailPrefix;
        public FileType fileType;

        void Start()
        {
            nameInput.gameObject.SetActive(false);
            validBtn.onClick.AddListener(OnClickValidate);
            validBtn.gameObject.SetActive(false);
            editBtn.onClick.AddListener(OnClickEdit);
            delBtn.onClick.AddListener(OnClickDelete);
            openBtn.onClick.AddListener(OnClickButton);
        }

        private void OnClickDelete()
        {
            AlertPopup p = AlertPopup.ShowAlert("confirm", "Confirm?", "Do you really want to delete this configuration?", true, "Cancel");
            if (p != null)
                p.OnClickOKEvent.AddListener(() => Delete(fileName));
        }

        private void OnClickValidate()
        {
            if (fileName != nameInput.text)
                Edit(fileName, nameInput.text);

            validBtn.gameObject.SetActive(false);
            nameInput.gameObject.SetActive(false);

        }

        private void OnClickEdit()
        {
            validBtn.gameObject.SetActive(true);
            nameInput.gameObject.SetActive(true);
            nameInput.text = fileName;
        }

        public void SetImages(Texture2D tex1, Texture2D tex2)
        {
            if (image1 != null) image1.texture = tex1;
            if (image2 != null) image2.texture = tex2;
        }

        public void SetFilePath(string path)
        {
            levelPath = path;
            fileName = path.Remove(0, path.LastIndexOf("/") + 1).Replace(".asset", "").Replace(".json", "");

            nameText = transform.FindChildRecursiveComp<TMP_Text>("NameText");

            nameText.text = fileName;
        }

        private void OnClickButton()
        {
            OnSelect?.Invoke(fileName);
        }

        internal void HideEditDeleteButtons()
        {
            delBtn.gameObject.SetActive(false);
            editBtn.gameObject.SetActive(false);
        }

        public void Edit(string fileName, string newName)
        {
            //print("Edit " + fileName + " " + newName);

            SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).RenameFileItem(fileName, newName, SaveSystem.defaultSubFolderName, () =>
            {
                //Debug.Log("Renamed save file complete!");
                // Now renaming the thumbnail
                SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).RenameFileItem(thumbnailPrefix + "_" + fileName.Replace("json", "png"), thumbnailPrefix + "_" + newName.Replace("json", "png"), HDSettings.EXTERIOR_WALL_MATERIALS_FOLDER, () =>
                {
                    //Debug.Log("Renamed thumbnail file complete!");
                    GameEditorEvents.OnFileChanged?.Invoke(newName, GameEditorEvents.FileType.ScreenshotFile);
                });

            });

        }

        public void Delete(string fileName)
        {
            //print("Delete " + name);
            SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).DeleteFileItem(fileName, SaveSystem.defaultSubFolderName, () =>
            {
                //Debug.Log("Delete complete!");
                GameEditorEvents.OnFileChanged?.Invoke(fileName, fileType);
            });

        }

        internal DataModel.FloorMapV1 GetData()
        {
            throw new NotImplementedException();
        }
    }
}
