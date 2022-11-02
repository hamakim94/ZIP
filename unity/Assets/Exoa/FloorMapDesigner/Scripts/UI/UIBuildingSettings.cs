using Exoa.Events;
using System;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class UIBuildingSettings : GenericLeftMenu
    {
        public static UIBuildingSettings instance;

        public Slider wallsHeightSlider;
        public Slider doorsHeightSlider;
        public Slider extWallsThicknessSlider;
        public Slider intWallsThicknessSlider;
        public Slider doorsThicknessSlider;
        public Slider windowsThicknessSlider;
        public Slider roofThicknessSlider;
        public Slider roofOverhangSlider;
        public Slider roofTypeSlider;
        public CanvasGroup canvasGroup;

        private void OnDestroy()
        {
            GameEditorEvents.OnFileLoaded -= OnFileLoaded;
            AppController.OnAppStateChange -= OnAppStateChange;
        }

        private void Awake()
        {
            instance = this;
            wallsHeightSlider?.onValueChanged.AddListener(OnWallsHeightChange);
            doorsHeightSlider?.onValueChanged.AddListener(OnDoorsHeightChange);
            extWallsThicknessSlider?.onValueChanged.AddListener(OnExtWallsThicknessChange);
            intWallsThicknessSlider?.onValueChanged.AddListener(OnInttWallsThicknessChange);
            doorsThicknessSlider?.onValueChanged.AddListener(OnDoorsThicknessChange);
            windowsThicknessSlider?.onValueChanged.AddListener(OnWindowsThicknessChange);
            roofThicknessSlider?.onValueChanged.AddListener(OnRoofThicknessChange);
            roofOverhangSlider?.onValueChanged.AddListener(OnRoofOverhangChange);
            roofTypeSlider?.onValueChanged.AddListener(OnRoofTypeChange);

            GameEditorEvents.OnFileLoaded += OnFileLoaded;
            AppController.OnAppStateChange += OnAppStateChange;
        }

        private void OnAppStateChange(AppController.States state)
        {
            if (canvasGroup != null)
            {
                canvasGroup.alpha = state == AppController.States.PreviewBuilding ? .4f : 1;
                canvasGroup.interactable = state == AppController.States.PreviewBuilding ? false : true;
            }
        }

        private void OnFileLoaded(GameEditorEvents.FileType fileType)
        {
            if (fileType == GameEditorEvents.FileType.FloorMapFile)
            {
                SetValues();
            }
        }

        private void SetValues()
        {
            wallsHeightSlider.value = AppController.Instance.wallsHeight;
            doorsHeightSlider.value = AppController.Instance.doorsHeight;
            extWallsThicknessSlider.value = AppController.Instance.exteriorWallThickness;
            intWallsThicknessSlider.value = AppController.Instance.interiorWallThickness;
            doorsThicknessSlider.value = AppController.Instance.doorsThickness;
            windowsThicknessSlider.value = AppController.Instance.windowsThickness;
            roofThicknessSlider.value = AppController.Instance.roof.thickness;
            roofOverhangSlider.value = AppController.Instance.roof.overhang;
            roofTypeSlider.value = (int)AppController.Instance.roof.type;

        }

        private void OnWallsHeightChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.wallsHeight = arg0;

            GameEditorEvents.OnRequestRebuildAllOpenings?.Invoke();
            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }

        private void OnDoorsHeightChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.doorsHeight = arg0;
            GameEditorEvents.OnRequestRebuildAllOpenings?.Invoke();
            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }

        private void OnExtWallsThicknessChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.exteriorWallThickness = arg0;
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }

        private void OnInttWallsThicknessChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.interiorWallThickness = arg0;
            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();
        }

        private void OnDoorsThicknessChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.doorsThickness = arg0;
            GameEditorEvents.OnRequestRebuildAllOpenings?.Invoke();
            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();
        }

        private void OnWindowsThicknessChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.windowsThickness = arg0;
            GameEditorEvents.OnRequestRebuildAllOpenings?.Invoke();
            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();
        }

        private void OnRoofThicknessChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.roof.thickness = arg0;
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }

        private void OnRoofOverhangChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.Instance.roof.overhang = arg0;
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }

        private void OnRoofTypeChange(float arg0)
        {
            if (AppController.Instance.State == AppController.States.PreviewBuilding)
                return;

            AppController.RoofType[] values = Enum.GetValues(typeof(AppController.RoofType)) as AppController.RoofType[];
            AppController.Instance.roof.type = values[Mathf.RoundToInt(arg0)];
            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }
    }
}
