
using Exoa.Designer.Utils;
using Exoa.Events;
using Exoa.Maths;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class UISaving : GenericLeftMenu
    {
        public FloatSpring savingFeedbackSpring;
        public static UISaving instance;

        public GameObject itemPrefab;
        public float itemOffset = 2;
        public RectTransform containerRect;
        private List<UISavingItem> items;

        public GameObject savingFeedback;
        private RectTransform savingFeedbackRt;

        public Button saveButton;
        public Button createButton;
        public TMP_InputField saveNameInputField;
        public TMP_InputField filterInputField;
        public IDataSerializer dataSerializer;
        private float lastSaveTime;
        private string lastSaveContent;
        [HideInInspector]
        public string CurrentFileName { get => saveNameInputField.text; }
        public enum ThumbnailPrefixes { Interior, Floormap };
        public ThumbnailPrefixes thumbnailPrefix;

        [Header("Start Action")]
        public StartAction startAction;
        public StartAction createAction;
        public enum StartAction { None, OpenWizard, CreateNew };
        public WizardPopup wizardPopup;

        void OnDestroy()
        {
            GameEditorEvents.OnFileChanged -= GetFileList;
            GameEditorEvents.OnScreenShotSaved -= OnScreenShotSavedHandler;
            GameEditorEvents.OnRequestButtonAction -= OnRequestAction;
        }
        void Awake()
        {
            instance = this;
        }
        override public void Start()
        {
            base.Start();
            dataSerializer = GameObject.FindObjectOfType<BaseSerializable>();
            SaveSystem.defaultSubFolderName = dataSerializer.GetFolderName();

            saveButton.onClick.AddListener(() => SaveInternal(saveNameInputField.text));
            createButton.onClick.AddListener(() => SaveAndCreateNewLevel(true));
            filterInputField.onValueChanged.AddListener(OnFilterChanged);

            GameEditorEvents.OnFileChanged += GetFileList;
            GameEditorEvents.OnScreenShotSaved += OnScreenShotSavedHandler;
            GameEditorEvents.OnRequestButtonAction += OnRequestAction;
            GetFileList();

            if (startAction == StartAction.CreateNew)
            {
                dataSerializer.DeserializeToScene(dataSerializer.SerializeEmpty(null));
            }
            else if (startAction == StartAction.OpenWizard && wizardPopup != null)
            {
                wizardPopup.Show();
            }
            if (savingFeedback != null)
            {
                savingFeedbackRt = savingFeedback.GetComponent<RectTransform>();
            }
        }

        override protected void Update()
        {
            base.Update();
            if (savingFeedbackRt != null)
            {
                if (lastSaveTime > 0 && lastSaveTime > Time.time - 1)
                {
                    savingFeedbackRt.anchoredPosition = savingFeedbackRt.anchoredPosition.SetY(openingMove.Update(ref savingFeedbackSpring, -40f));
                }
                else if (lastSaveTime > 0 && lastSaveTime > Time.time - 2)
                {
                    savingFeedbackRt.anchoredPosition = savingFeedbackRt.anchoredPosition.SetY(openingMove.Update(ref savingFeedbackSpring, 0f));
                }
            }
        }

        private void OnScreenShotSavedHandler(string name, MenuType menuType)
        {
            if (menuType == MenuType.FloorMapMenu || menuType == MenuType.InteriorMenu)
            {
                GetFileList(name, FileType.FloorMapFile);
            }
        }

        private void OnRequestAction(GameEditorEvents.Action action, bool active)
        {
            if (action == GameEditorEvents.Action.Exit)
            {
                SaveAndQuitApp();
            }
        }

        IEnumerator OpenDefaultFile()
        {
            yield return new WaitForSeconds(1);
            if (!string.IsNullOrEmpty(SaveSystem.defaultFileToOpen))
            {
                LoadInternal(SaveSystem.defaultFileToOpen);
                SaveSystem.defaultFileToOpen = null;
            }
        }

        private void OnFilterChanged(string arg0)
        {
            //print("OnFilterChanged " + arg0);
            for (int i = 0; i < items.Count; i++)
            {
                items[i].gameObject.SetActive(items[i].fileName.ToLower().Contains(arg0.ToLower()));
            }
        }


        protected void OnLevelListChanged(List<string> list)
        {
            containerRect.ClearChildren();
            items = new List<UISavingItem>();

            float itemHeight = 0;
            foreach (string name in list)
            {
                GameObject inst = Instantiate(itemPrefab);
                inst.transform.SetParent(containerRect);
                RectTransform r = inst.GetComponent<RectTransform>();
                r.localScale = Vector3.one;
                itemHeight = r.sizeDelta.y;

                UISavingItem plmi = r.GetComponent<UISavingItem>();
                plmi.SetFilePath(name);
                plmi.thumbnailPrefix = thumbnailPrefix;
                plmi.fileType = dataSerializer.GetFileType();
                plmi.OnSelect += OnRequestLoadFile;

                //string topViewName = plmi.fileName + "_top";
                string perspViewName = thumbnailPrefix + "_" + plmi.fileName + "_persp";
                string buildingViewName = "Building_" + plmi.fileName + "_persp";

                //Texture2D t1 = ThumbnailGeneratorUtils.Load(thumbnailPrefix + "_" + topViewName);
                Texture2D t2 = null;
                if (ThumbnailGeneratorUtils.Exists(buildingViewName))
                {
                    t2 = ThumbnailGeneratorUtils.Load(buildingViewName);
                }
                else
                {
                    t2 = ThumbnailGeneratorUtils.Load(perspViewName);
                }
                plmi.SetImages(null, t2);

                items.Add(plmi);
            }
        }





        private void OnRequestLoadFile(string name)
        {
            Load(true, name);
            Close();
        }







        /// <summary>
        /// Create a new empty room straight away
        /// </summary>
        private void CreateNewScene()
        {
            GameEditorEvents.OnRequestClearAll?.Invoke(clearFloorsUI: true, clearFloorMapUI: true, clearScene: true);
            GameEditorEvents.OnRequestButtonAction?.Invoke(GameEditorEvents.Action.NewProject, true);
            //Load(false, "New", true);
            saveNameInputField.text = "";
            UISaving.instance.Close();

            if (createAction == StartAction.CreateNew)
            {
                dataSerializer.DeserializeToScene(dataSerializer.SerializeEmpty(null));
            }
            else if (createAction == StartAction.OpenWizard && wizardPopup != null)
            {
                wizardPopup.Show();
            }
        }

        /// <summary>
        /// Load a room by name
        /// There is two ways to load : offline from Resources/Levels/ or Online
        /// </summary>
        /// <param name="askSaving"></param>
        /// <param name="name"></param>
        /// <param name="sendLoadedEvent"></param>
        /// <param name="pStrategy"></param>
        public void Load(bool askSaving, string name, bool sendLoadedEvent = true)
        {
            if (!askSaving || NoNeedToSave())
            {
                LoadInternal(name, sendLoadedEvent);
                return;
            }
            AlertPopup popup = AlertPopup.ShowAlert("save", "Save " + saveNameInputField.text + "?", "Do you want to save the current configuration?", true, "No thanks!");

            popup.OnClickCancelEvent.AddListener(() =>
            {
                LoadInternal(name, sendLoadedEvent);
            });
            popup.OnClickOKEvent.AddListener(() =>
            {
                if (SaveInternal(saveNameInputField.text))
                    LoadInternal(name, sendLoadedEvent);
            });
        }

        virtual public void LoadInternal(string name, bool sendLoadedEvent = true)
        {
            //print("UISaving LoadInternal");
            GameEditorEvents.OnRequestClearAll?.Invoke(clearFloorsUI: true, clearFloorMapUI: true, clearScene: true);
            SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).LoadFileItem(name, dataSerializer.GetFolderName(), (string json) =>
             {
                 //print("dataSerializer:" + dataSerializer);
                 lastSaveContent = json;
                 saveNameInputField.text = name;
                 dataSerializer.DeserializeToScene(json);
                 GameEditorEvents.OnFileLoaded?.Invoke(dataSerializer.GetFileType());
             });
        }




        /// <summary>
        /// Handles some keyboard shortcuts
        /// </summary>
        private void OnGUI()
        {
            if (HDInputs.SavePressed())
                saveButton.onClick.Invoke();
            if (HDInputs.OpenSaveFolderPressed())
                Process.Start(SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).GetBasePath(null));
        }



        /// <summary>
        /// Create a new empty room, and ask to save the current one.
        /// </summary>
        /// <param name="askSaving"></param>
        private void SaveAndCreateNewLevel(bool askSaving = true)
        {
            if (!askSaving || NoNeedToSave())
            {
                CreateNewScene();
                return;
            }
            AlertPopup popup = AlertPopup.ShowAlert("save", "Save " + saveNameInputField.text + "?", "Do you want to save the current configuration?", true, "No thanks!");

            popup.OnClickCancelEvent.AddListener(() =>
            {
                CreateNewScene();
            });
            popup.OnClickOKEvent.AddListener(() =>
            {
                if (SaveInternal(saveNameInputField.text))
                    CreateNewScene();
            });

        }


        public void SaveAndQuitApp()
        {
            if (NoNeedToSave())
            {
                Application.Quit();
                return;
            }
            AlertPopup popup = AlertPopup.ShowAlert("save", "Save " + saveNameInputField.text + "?", "Do you want to save before exiting?", true, "No thanks!");
            if (popup == null)
                return;
            popup.OnClickCancelEvent.AddListener(() =>
            {
                Application.Quit();
            });
            popup.OnClickOKEvent.AddListener(() =>
            {
                SaveInternal(saveNameInputField.text, (string fileName) => Application.Quit());

            });

        }

        public void SaveAndExitToScene(string sceneName)
        {
            if (NoNeedToSave())
            {
                SceneManager.LoadScene(sceneName);
                return;
            }
            AlertPopup popup = AlertPopup.ShowAlert("save", "Save " + saveNameInputField.text + "?", "Do you want to save before exiting?", true, "No thanks!");
            if (popup == null)
                return;
            popup.OnClickCancelEvent.AddListener(() =>
            {
                SceneManager.LoadScene(sceneName);
            });
            popup.OnClickOKEvent.AddListener(() =>
            {
                SaveInternal(saveNameInputField.text, (string fileName) => SceneManager.LoadScene(sceneName));

            });

        }


        private bool NoNeedToSave()
        {
            if (lastSaveTime > Time.time - 5f)
                return true;
            if (lastSaveContent == dataSerializer.SerializeScene())
                return true;
            if (dataSerializer.IsSceneEmpty())
                return true;
            return false;
        }

        public bool AutoSave(Action<string> callback = null)
        {
            return SaveInternal(saveNameInputField.text, callback);
        }

        /// <summary>
        /// This is the saving logic
        /// We place bricks and settings info in the Level model
        /// then save it offline or online
        /// </summary>
        public bool SaveInternal(string name, Action<string> callback = null)
        {
            if (string.IsNullOrEmpty(saveNameInputField.text))
            {
                AlertPopup.ShowAlert("NoName", "No Name", "Please enter a save file name first!");
                return false;
            }
            //print("SaveInternal " + name + " " + saveNameInputField.text + " folder:" + dataSerializer.GetFolderName());

            lastSaveContent = dataSerializer.SerializeScene();

            SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).SaveFileItem(name + ".json", dataSerializer.GetFolderName(), lastSaveContent, callback == null ? OnSaveDone : callback);

            lastSaveTime = Time.time;
            return true;
        }

        /// <summary>
        ///  On save done feedback
        /// </summary>
        private void OnSaveDone(string fileName)
        {
            GetFileList();

            GameEditorEvents.OnFileSaved?.Invoke(fileName, dataSerializer.GetFileType());
        }




        public void GetFileList(string arg = null, FileType fileType = FileType.FloorMapFile)
        {
            //print("GetFileList " + arg + " " + menuTYpe);
            if (fileType == FileType.FloorMapFile || fileType == FileType.InteriorFile || fileType == FileType.ScreenshotFile)
            {
                SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).ListFileItems(dataSerializer.GetFolderName(), (SaveSystem.FileList l) =>
                {
                    OnLevelListChanged(l.list);
                });
            }

        }

    }
}
