using Exoa.Designer.Utils;
using Exoa.Events;
using Exoa.Json;
using System;
using System.Collections.Generic;
using UnityEngine;
using static Exoa.Designer.DataModel;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class FloorMapSerializer : BaseSerializable, IDataSerializer
    {
        public GameObject controlPointControllerPrefab;
        public GameObject roomControllerPrefab;
        public GameObject outsideControllerPrefab;
        public GameObject openingControllerPrefab;
        private GameObject roomsContainer;
        private GameObject openingsContainer;
        private GameObject controlPointsContainer;
        private Transform globalContainer;
        private FloorMapV2 currentFloorMapFile;
        private UIFloorMapMenu floorMapMenu;
        private UIFloorsMenu floorsMenu;


        override public string GetFolderName() => HDSettings.EXT_FLOORMAP_FOLDER;
        override public GameEditorEvents.FileType GetFileType() => FileType.FloorMapFile;

        void OnDestroy()
        {
            GameEditorEvents.OnFileSaved -= OnFileSaved;
            GameEditorEvents.OnRequestClearAll -= Clear;
            GameEditorEvents.OnRequestFloorAction -= OnRequestFloorActionHandler;
        }
        void Start()
        {
            globalContainer = transform;// GameObject.Find("GlobalContainer").transform;
            floorMapMenu = GameObject.FindObjectOfType<UIFloorMapMenu>();
            floorsMenu = GameObject.FindObjectOfType<UIFloorsMenu>();

            Clear();
            GameEditorEvents.OnFileSaved += OnFileSaved;
            GameEditorEvents.OnRequestClearAll += Clear;
            GameEditorEvents.OnRequestFloorAction += OnRequestFloorActionHandler;
        }

        private void OnRequestFloorActionHandler(FloorAction action, string floorId)
        {
            switch (action)
            {
                case FloorAction.Select: DeserializeFloorMapUI(floorId); break;
                case FloorAction.Add: AddFloor(); break;
                case FloorAction.Duplicate: DuplicateFloor(floorId); break;
                case FloorAction.Remove: RemoveFloor(floorId); break;
            }
        }

        public void RemoveFloor(string uniqueId)
        {
            if (currentFloorMapFile.floors != null && currentFloorMapFile.floors.Count > 0)
            {
                for (int i = 0; i < currentFloorMapFile.floors.Count; i++)
                {
                    if (currentFloorMapFile.floors[i].uniqueId == uniqueId)
                    {
                        currentFloorMapFile.floors.RemoveAt(i);
                    }
                }
            }
        }

        private void OnFileSaved(string fileName, FileType fileType)
        {
            if (fileType != FileType.FloorMapFile)
            {
                return;
            }
            string perspViewName = "";

            // Takes a thumbnail of the current floor map
            if (!string.IsNullOrEmpty(floorsMenu.CurrentFloorId) &&
                    AppController.Instance.State != AppController.States.PreviewBuilding)
            {
                perspViewName = "Floormap_" + floorsMenu.CurrentFloorId + "_persp.png";
                //ThumbnailGeneratorUtils.TakeAndSaveScreenshot(globalContainer, perspViewName, false, new Vector3(1, -1, 1));
                ThumbnailGeneratorUtils.TakeAndSaveScreenshot(GameObject.Find("Rooms").transform, perspViewName, false, new Vector3(1, -1, 1));
                GameEditorEvents.OnScreenShotSaved?.Invoke(perspViewName, MenuType.FloorsMenu);
            }
            // Takes a thumbnail of the current floor map as project image
            //string topViewName = fileName.Replace(".json", "_top.png");
            perspViewName = fileName.Replace(".json", "_persp.png");
            //print("globalContainer:" + globalContainer);
            //ThumbnailGeneratorUtils.TakeAndSaveScreenshot(globalContainer, topViewName, true, Vector3.down);
            GameObject roomsGo = GameObject.Find("Rooms");
            if (roomsGo != null)
                ThumbnailGeneratorUtils.TakeAndSaveScreenshot(roomsGo.transform, "Floormap_" + perspViewName, false, new Vector3(1, -1, 1));



            GameEditorEvents.OnScreenShotSaved?.Invoke(perspViewName, MenuType.FloorMapMenu);
        }

        public bool IsProjectCreatedOrOpened(bool showAlert)
        {
            bool open = currentFloorMapFile.floors != null;
            if (showAlert && !open)
            {
                AlertPopup.ShowAlert("noproject", "No Project", "Please create or open a project first!");
            }
            return open;
        }

        public void AddFloor()
        {
            if (!IsProjectCreatedOrOpened(true))
            {
                return;
            }
            FloorMapLevel floor = new FloorMapLevel();
            floor.spaces = new System.Collections.Generic.List<FloorMapItem>();
            floor.GenerateUniqueId();
            currentFloorMapFile.floors.Add(floor);
            floorsMenu.CreateNewUIItem(floor);

        }
        public void DuplicateFloor(string uniqueFloorId)
        {
            // First save the current opened floor
            SerializeScene();

            FloorMapLevel floor = GetFloorById(uniqueFloorId);
            floor.uniqueId = null;
            floor.GenerateUniqueId();
            currentFloorMapFile.floors.Add(floor);

            ThumbnailGeneratorUtils.Duplicate("Floormap_" + uniqueFloorId + "_persp", "Floormap_" + floor.uniqueId + "_persp");

            floorsMenu.CreateNewUIItem(floor);
        }

        public FloorMapLevel GetFloorById(string id)
        {
            if (currentFloorMapFile.floors != null && currentFloorMapFile.floors.Count > 0)
            {
                for (int i = 0; i < currentFloorMapFile.floors.Count; i++)
                {
                    if (currentFloorMapFile.floors[i].uniqueId == id)
                    {
                        return currentFloorMapFile.floors[i];
                    }
                }
            }
            return new FloorMapLevel();
        }
        public void Clear(bool clearFloorsUI = true, bool clearFloorMapUI = true, bool clearScene = true)
        {

            if (clearScene)
            {
                HDLogger.Log("Floor Map Serializer Clear", HDLogger.LogCategory.Floormap);

                roomsContainer?.DestroyUniversal();
                openingsContainer?.DestroyUniversal();
                controlPointsContainer?.DestroyUniversal();
                if (globalContainer != transform && globalContainer != null)
                    globalContainer?.gameObject.DestroyUniversal();

                roomsContainer = new GameObject("Rooms");
                openingsContainer = new GameObject("Openings");
                controlPointsContainer = new GameObject("ControlPointsControllers");

                roomsContainer.transform.SetParent(globalContainer);
                openingsContainer.transform.SetParent(globalContainer);
                controlPointsContainer.transform.SetParent(globalContainer);
            }
            if (clearFloorsUI)
            {
                currentFloorMapFile = new FloorMapV2();
            }
        }

        public ControlPointsController CreateSequence()
        {
            GameObject go = Instantiate(controlPointControllerPrefab, controlPointsContainer.transform.position, Quaternion.identity, controlPointsContainer.transform);
            return go.GetComponent<ControlPointsController>();
        }

        public OpeningController CreateOpeningController()
        {
            GameObject go = Instantiate(openingControllerPrefab, openingsContainer.transform.position, Quaternion.identity, openingsContainer.transform);
            OpeningController mpc = go.GetComponent<OpeningController>();

            return mpc;
        }

        public RoomController CreateRoomController()
        {
            GameObject go = Instantiate(roomControllerPrefab, roomsContainer.transform.position, Quaternion.identity, roomsContainer.transform);
            RoomController mpc = go.GetComponent<RoomController>();

            return mpc;
        }

        public OutsideController CreateOutsideController()
        {
            GameObject go = Instantiate(outsideControllerPrefab, roomsContainer.transform.position, Quaternion.identity, roomsContainer.transform);
            OutsideController mpc = go.GetComponent<OutsideController>();

            return mpc;
        }

        override public object DeserializeToScene(string str)
        {
            Clear();
            currentFloorMapFile = DeserializeFloorMapJsonFile(str);
            DeserializeProjectUI(currentFloorMapFile);
            return currentFloorMapFile;
        }


        private void DeserializeProjectUI(FloorMapV2 building)
        {
            // Filling settings menu
            if (building.settings.wallsHeight != 0)
            {
                AppController.Instance.SetFloorMapSettings(building.settings);
            }

            // Opening the first floor in Floor Map spaces menu
            if (building.floors != null && building.floors.Count > 0)
            {
                DeserializeFloorMapUI(building.floors[0]);
            }

            // Showing all floors in the Floors menu
            for (int i = 0; i < building.floors.Count; i++)
            {
                FloorMapLevel floor = building.floors[i];
                floor.GenerateUniqueId();
                building.floors[i] = floor;
                floorsMenu.CreateNewUIItem(building.floors[i]);
            }
            //setting the first level as current
            if (building.floors != null && building.floors.Count > 0)
            {
                floorsMenu.CurrentFloorId = building.floors[0].uniqueId;
            }


        }

        public void DeserializeFloorMapUI(string uniqueId)
        {
            DeserializeFloorMapUI(GetFloorById(uniqueId));
        }

        public void DeserializeFloorMapUI(FloorMapLevel floor)
        {
            HDLogger.Log("[FloorMapSerializer] DeserializeFloorMapUI id:" + floor.uniqueId, HDLogger.LogCategory.Floormap);

            FloorController fc = CreateFloorContainer(0);
            globalContainer = fc.transform;

            roomsContainer.transform.SetParent(globalContainer);
            openingsContainer.transform.SetParent(globalContainer);
            controlPointsContainer.transform.SetParent(globalContainer);


            if (floor.spaces != null && floor.spaces.Count > 0)
            {
                foreach (DataModel.FloorMapItem c in floor.spaces)
                {
                    floorMapMenu.CreateNewUIItem(c, c.type);
                }
            }
        }

        override public string SerializeScene()
        {
            HDLogger.Log("[FloorMapSerializer] SerializeScene", HDLogger.LogCategory.Floormap);

            List<string> floorIds = floorsMenu.GetItemsData();
            List<FloorMapLevel> newList = new List<FloorMapLevel>();
            if (currentFloorMapFile.floors != null && currentFloorMapFile.floors.Count > 0)
            {
                for (int i = 0; i < floorIds.Count; i++)
                {
                    FloorMapLevel level = currentFloorMapFile.floors.Find(s => s.uniqueId == floorIds[i]);
                    // Saving the current floor map

                    if (level.uniqueId == floorsMenu.CurrentFloorId)
                    {
                        level.spaces = floorMapMenu.GetItemsData();
                        level.uniqueId = floorsMenu.CurrentFloorId;
                    }
                    newList.Add(level);
                }
            }
            currentFloorMapFile.floors = newList;

            currentFloorMapFile.settings = (BuildingSettings)AppController.Instance.GetBuildingSettings();

            // Serializing the final object
            return JsonConvert.SerializeObject(currentFloorMapFile, Formatting.Indented, new JsonSerializerSettings()
            {
                ReferenceLoopHandling = ReferenceLoopHandling.Ignore
            });
        }

        override public bool IsSceneEmpty()
        {
            return currentFloorMapFile.floors == null ||
                currentFloorMapFile.floors.Count == 0 ||
                    currentFloorMapFile.floors[0].spaces == null ||
                    currentFloorMapFile.floors[0].spaces.Count == 0;
        }
        override public string SerializeEmpty(string name)
        {
            FloorMapV2 project = new FloorMapV2();
            project.version = "v2";
            project.floors = new System.Collections.Generic.List<DataModel.FloorMapLevel>();
            project.floors.Add(new FloorMapLevel());
            project.settings = new BuildingSettings();
            currentFloorMapFile = project;
            return JsonConvert.SerializeObject(project, Formatting.Indented, new JsonSerializerSettings()
            {
                ReferenceLoopHandling = ReferenceLoopHandling.Ignore
            });
        }
    }
}
