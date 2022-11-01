using Exoa.Designer.Utils;
using Exoa.Events;
using System.Collections.Generic;
using UnityEngine;
using static Exoa.Designer.DataModel;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class FloorMapReader : BaseReader, IDataReader
    {
        private bool floorMapLoaded;
        private List<FloorController> floorsList;
        private FloorMapV2 currentFloorMap;
        private AppController appController;

        /*
        public string FileName
        {
#if INTERIOR_MODULE
            get
            {
                return (InteriorDesigner.instance != null) ? InteriorDesigner.instance.FloorMapFileName : null;
            }

            set
            {
                if (InteriorDesigner.instance != null) InteriorDesigner.instance.FloorMapFileName = value;
            }
#else
            set { }
            get { return null; }
#endif
        }
        */

        void OnDestroy()
        {
            GameEditorEvents.OnRequestClearAll -= OnRequestClearAll;
        }
        void Awake()
        {
            appController = GetComponent<AppController>();
            if (appController == null)
            {
                appController = GameObject.FindObjectOfType<AppController>();
            }

            if (appController.currentState != AppController.States.PlayMode)
            {
                GameEditorEvents.OnRequestClearAll += OnRequestClearAll;
            }
        }

        private void OnRequestFloorActionHandler(FloorAction action, string fileName)
        {
            if (action == FloorAction.PreviewBuilding)
            {
                ReplaceAndLoad(fileName);
            }
        }

        private void OnRequestClearAll(bool clearFloorsUI, bool clearFloorMapUI, bool clearScene)
        {
            if (clearScene)
            {
                HDLogger.Log("Floor Map Reader OnRequestClearAll floorMapLoaded:" + floorMapLoaded, HDLogger.LogCategory.Floormap);
                Clear();
            }
        }


        public void Clear()
        {
            if (floorsList != null && floorsList.Count > 0)
            {
                for (int i = 0; i < floorsList.Count; i++)
                {
                    if (floorsList[i] != null)
                    {
                        floorsList[i].gameObject.DestroyUniversal();
                    }
                }
            }
            floorsList = new List<FloorController>();
            floorMapLoaded = false;
        }

        override public string GetFolderName()
        {
            return HDSettings.EXT_FLOORMAP_FOLDER;
        }

        override public void ReplaceAndLoad(string name, bool sendLoadedEvent = true)
        {
            LoadInternal(name, sendLoadedEvent);
        }

        private void LoadInternal(string name, bool sendLoadedEvent = true)
        {
            HDLogger.Log("Floor Map Reader Load:" + name, HDLogger.LogCategory.Building);

            if (string.IsNullOrEmpty(name))
            {
                AlertPopup.ShowAlert("emptyFloorMap", "Empty Floor Map", "The floor map name is empty.");
                return;
            }
            GameEditorEvents.OnRequestClearAll?.Invoke(clearFloorsUI: false, clearFloorMapUI: true, clearScene: true);
            SaveSystem.Create(SaveSystem.Mode.FILE_SYSTEM).LoadFileItem(name, GetFolderName(), (string json) =>
            {
                //FileName = name;
                DeserializeToScene(json);
                floorMapLoaded = true;
                string screenshotName = "Building_" + name + "_persp.png";
                ThumbnailGeneratorUtils.TakeAndSaveScreenshot(transform, screenshotName, false, new Vector3(1, -1, 1));
                GameEditorEvents.OnScreenShotSaved?.Invoke(screenshotName, MenuType.FloorMapMenu);
                GameEditorEvents.OnFileLoaded?.Invoke(GameEditorEvents.FileType.BuildingRead);
            });
        }

        override public object DeserializeToScene(string str)
        {
            currentFloorMap = DataModel.DeserializeFloorMapJsonFile(str);
            return DeserializeToScene(currentFloorMap, -1);
        }

        public object DeserializeToScene(FloorMapV2 project, string onlySpecificFloorId = null)
        {
            if (string.IsNullOrEmpty(onlySpecificFloorId))
            {
                return DeserializeToScene(project, -1);
            }
            else
            {
                for (int i = 0; i < project.floors.Count; i++)
                {
                    if (project.floors[i].uniqueId == onlySpecificFloorId)
                    {
                        return DeserializeToScene(project, i);
                    }
                }
            }
            return null;
        }
        public object DeserializeToScene(FloorMapV2 project, int onlySpecificFloorIndex = -1)
        {
            Clear();

            if (project.floors == null || project.floors.Count == 0)
            {
                AlertPopup.ShowAlert("emptyFloorMap", "Empty Floor Map", "No floor data in file");
                return null;
            }
            // Applying building settings prior to generating it
            AppController.Instance.SetFloorMapSettings(project.settings);
            FloorController floorCtrl = null;
            for (int i = 0; i < project.floors.Count; i++)
            {
                if (onlySpecificFloorIndex > -1 && onlySpecificFloorIndex != i)
                    continue;

                float floorHeight = onlySpecificFloorIndex >= 0 ? 0 : i * project.settings.wallsHeight;
                floorCtrl = CreateFloorContainer(floorHeight);
                FloorMapLevel floorData = project.floors[i];
                bool shouldBuildRoof = i == project.floors.Count - 1 || onlySpecificFloorIndex >= 0;
                floorCtrl.BuildFloor(floorData, shouldBuildRoof);
                floorsList.Add(floorCtrl);

                //print("floor id:" + floorData.uniqueId + " floorHeight:" + floorHeight + " spaces:" + floorData.spaces.Count);

            }
            return floorsList;
        }
        override public void Unload()
        {
            //throw new NotImplementedException();
        }
    }
}
