
using Exoa.Events;
using Exoa.Maths;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class UIFloorsMenu : GenericLeftMenu
    {
        public static UIFloorsMenu instance;

        public GameObject uiItemPrefab;
        public float itemOffset = 2;
        public ScrollRect scrollRect;
        public RectTransform containerRect;
        public Transform sceneContainer;
        public Button createBtn;
        public Button previewBuildingBtn;
        public Button exitPreviewModeBtn;
        public Button floorUpBtn;
        public Button floorDownBtn;
        public GameObject previewUI;

        public UISaving.ThumbnailPrefixes thumbnailPrefix;
        [HideInInspector]
        private string currentFloorId;
        private int currentFloorIndex; // 0 = ground floor
        public TMP_Text subTitleTxt;
        public BaseReader finalBuilding;
        public bool showItemButtons = true;

        public Springs scrollMove;
        private FloatSpring scrollSpring;
        private float targetScrollY;
        public bool autoScroll;

        public string CurrentFloorId
        {
            get => currentFloorId;
            set
            {
                //print("Set CurrentFloorId:" + value);
                currentFloorId = value;
            }
        }

        void OnDestroy()
        {
            GameEditorEvents.OnRequestClearAll -= OnRequestClearAll;
            GameEditorEvents.OnScreenShotSaved -= OnScreenShotSaved;
        }

        void Awake()
        {
            instance = this;

            createBtn?.onClick.AddListener(OnClickCreateNew);
            previewBuildingBtn?.onClick.AddListener(TogglePreview);
            exitPreviewModeBtn?.onClick.AddListener(TogglePreview);
            floorUpBtn?.onClick.AddListener(OnClickFloorUp);
            floorDownBtn?.onClick.AddListener(OnClickFloorDown);
            previewUI?.SetActive(false);

            containerRect.ClearChildren();

        }
        override protected void Update()
        {
            base.Update();

            if (autoScroll)
                scrollRect.verticalNormalizedPosition = scrollMove.Update(ref scrollSpring, targetScrollY, OnAutoScrollComplete);

        }

        private void OnAutoScrollComplete()
        {
            autoScroll = false;
        }

        private void OnClickFloorUp()
        {
            currentFloorIndex++;
            MoveToFloor();
        }

        private void OnClickFloorDown()
        {
            currentFloorIndex--;
            MoveToFloor();
        }


        void MoveToFloor()
        {
            currentFloorIndex = Mathf.Clamp(currentFloorIndex, 0, containerRect.childCount - 1);
            //print("currentFloorIndex:" + currentFloorIndex);
            CameraEvents.OnRequestGroundHeightChange?.Invoke(AppController.Instance.wallsHeight * currentFloorIndex, true, 1);
            Transform itemTr = containerRect.GetChild(containerRect.childCount - currentFloorIndex - 1);
            UIFloorItem item = itemTr.gameObject.GetComponent<UIFloorItem>();
            CurrentFloorId = item.floorUniqueId;
            subTitleTxt.text = item.GetName();
        }

        void MoveToGround()
        {
            CameraEvents.OnRequestGroundHeightChange?.Invoke(0, true, 1);
        }


        override public void Start()
        {
            base.Start();
            GameEditorEvents.OnRequestClearAll += OnRequestClearAll;
            GameEditorEvents.OnScreenShotSaved += OnScreenShotSaved;
        }

        private void OnScreenShotSaved(string name, GameEditorEvents.MenuType menuType)
        {
            if (menuType == GameEditorEvents.MenuType.FloorsMenu)
            {
                for (int i = 0; i < containerRect.childCount; i++)
                {
                    UIFloorItem item = containerRect.GetChild(i).GetComponent<UIFloorItem>();
                    if (name.Contains(item.floorUniqueId))
                    {
                        item.LoadThumbnail();
                    }
                }
            }
        }

        private void OnDelete(UIFloorItem item)
        {
            if (AppController.Instance.State != AppController.States.Idle)
            {
                AlertPopup.ShowAlert("ExitPreview", "Exit Preview", "You must first exit the preview mode");
                return;
            }

            GameEditorEvents.OnRequestFloorAction?.Invoke(GameEditorEvents.FloorAction.Remove, item.floorUniqueId);

            if (CurrentFloorId == item.floorUniqueId)
            {
                GameEditorEvents.OnRequestClearAll?.Invoke(false, true, true);
            }
            item.gameObject.DestroyUniversal();
            UpdateItems();
        }
        private void OnClickCreateNew()
        {
            GameEditorEvents.OnRequestFloorAction?.Invoke(GameEditorEvents.FloorAction.Add, null);
        }
        private void TogglePreview()
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
            {
                ExitPreview();
            }
            else
            {
                ShowPreview();
            }
            Close();
        }
        private void ExitPreview()
        {
            HDLogger.Log("[UIFloorMapMenu] OnClickExitPreview", HDLogger.LogCategory.Floormap);
            AppController.Instance.State = AppController.States.Idle;
            previewUI.SetActive(false);
            if (containerRect.childCount > currentFloorIndex)
            {
                UIFloorItem lastFloor = containerRect.GetChild(containerRect.childCount - 1 - currentFloorIndex).GetComponent<UIFloorItem>();
                lastFloor.OnSelect?.Invoke(lastFloor);
            }
            MoveToGround();
            finalBuilding.Unload();
        }

        private void ShowPreview()
        {
            // Auto Save the project first
            if (!UISaving.instance.AutoSave())
                return;

            //CurrentFloorId = null;
            AppController.Instance.State = AppController.States.PreviewBuilding;
            previewUI.SetActive(true);
            //GameEditorEvents.OnRequestFloorAction?.Invoke(GameEditorEvents.FloorAction.PreviewBuilding, UISaving.instance.CurrentFileName);
            finalBuilding.ReplaceAndLoad(UISaving.instance.CurrentFileName);
            CameraEvents.OnRequestButtonAction?.Invoke(CameraEvents.Action.ForcePerspectiveMode, true);
            currentFloorIndex = GetFloorIndexFromUniqueId(CurrentFloorId);
            MoveToFloor();
        }

        public void OnDuplicateUIItem(string uniqueFloorId)
        {
            if (AppController.Instance.State == AppController.States.Idle)
                GameEditorEvents.OnRequestFloorAction?.Invoke(GameEditorEvents.FloorAction.Duplicate, uniqueFloorId);
            else
                AlertPopup.ShowAlert("ExitPreview", "Exit Preview", "You must first exit the preview mode");
        }





        private UIFloorItem CreateUIItem(GameObject prefab, string floorUniqueId)
        {
            GameObject inst = Instantiate(prefab, containerRect);
            RectTransform r = inst.GetComponent<RectTransform>();
            r.localScale = Vector3.one;
            r.SetSiblingIndex(0);
            UIFloorItem item = r.GetComponent<UIFloorItem>();
            item.floorUniqueId = floorUniqueId;
            item.thumbnailPrefix = thumbnailPrefix;
            item.OnSelect += OnSelectFloor;
            item.OnDelete += OnDelete;
            item.OnDuplicate += OnDuplicateUIItem;
            item.OnMove += OnMoveUIItem;
            item.ShowButtons(showItemButtons);
            item.LoadThumbnail();

            return item;
        }

        private void OnMoveUIItem(bool moveUp)
        {
            if (AppController.Instance.State == AppController.States.Idle)
                UpdateItems();
            else
                AlertPopup.ShowAlert("ExitPreview", "Exit Preview", "You must first exit the preview mode");

        }

        private void UpdateItems()
        {
            for (int i = 0; i < containerRect.childCount; i++)
            {
                containerRect.GetChild(i).GetComponent<UIFloorItem>().SetName();
            }
        }

        public void CreateNewUIItem(DataModel.FloorMapLevel seq)
        {
            UIFloorItem ui = CreateUIItem(uiItemPrefab, seq.uniqueId);
            scrollSpring.Value = scrollRect.verticalNormalizedPosition;
            targetScrollY = 1f;
            autoScroll = true;
        }


        private void OnSelectFloor(UIFloorItem item)
        {
            GameEditorEvents.OnRequestClearAll?.Invoke(false, true, true);
            GameEditorEvents.OnRequestFloorAction?.Invoke(GameEditorEvents.FloorAction.Select, item.floorUniqueId);
            CurrentFloorId = item.floorUniqueId;
            subTitleTxt.text = item.GetName();
            previewUI.SetActive(false);
            MoveToGround();
            Close();
        }


        /// <summary>
        /// Create a new empty floor straight away
        /// </summary>
        private void CreateNewScene()
        {
            // TODO: auto save current floor
            GameEditorEvents.OnRequestClearAll?.Invoke(clearFloorsUI: false, clearFloorMapUI: true, clearScene: true);
            GameEditorEvents.OnRequestButtonAction?.Invoke(GameEditorEvents.Action.NewFloor, true);

            UIFloorsMenu.instance.Close();
        }

        public int GetFloorIndexFromUniqueId(string uniqueId)
        {
            for (int i = containerRect.childCount - 1; i >= 0; i--)
            {
                UIFloorItem item = containerRect.GetChild(i).GetComponent<UIFloorItem>();
                if (item != null && uniqueId == item.floorUniqueId)
                {
                    return containerRect.childCount - 1 - i;
                }
            }
            return 0;
        }
        public List<string> GetItemsData()
        {
            List<string> list = new List<string>();
            for (int i = containerRect.childCount - 1; i >= 0; i--)
            {
                UIFloorItem item = containerRect.GetChild(i).GetComponent<UIFloorItem>();
                if (item != null)
                {
                    list.Add(item.floorUniqueId);
                }
            }
            return list;
        }




        private void OnRequestClearAll(bool clearFloorsUI = false, bool clearFloorMapUI = false, bool clearScene = false)
        {
            if (!clearFloorsUI) return;
            containerRect.ClearChildren();
        }

    }
}
