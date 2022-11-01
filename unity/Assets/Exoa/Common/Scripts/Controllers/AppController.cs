using System;
using Exoa.Designer.Data;
using Exoa.Events;
using UnityEngine;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class AppController : MonoBehaviour
    {
        public static AppController Instance;
        public delegate void OnAppStateChangeHandler(States state);
        public static OnAppStateChangeHandler OnAppStateChange;

        private ModuleDataModels.ModuleList backendModuleList;

        public float wallsHeight = 3f;
        public float doorsHeight = 2.5f;
        public float interiorWallThickness = .05f;
        public float exteriorWallThickness = .1f;
        public float windowsThickness = 0.06f;
        public float doorsThickness = 0.06f;
        public RoofConfig roof;

        public enum States { Idle, Draw, PreviewBuilding, PlayMode };
        public States currentState;
        public States State
        {
            get => currentState;
            set
            {
                currentState = value;
                OnAppStateChange?.Invoke(value);
            }
        }

        public enum RoofType
        {
            Flat = 0,
            Hipped = 1,
            Gabled = 2,
        }

        [Serializable]
        public class RoofConfig
        {
            public RoofType type = RoofType.Flat;
            public float thickness = .2f;
            public float overhang = .2f;
            public Color color;

            public RoofConfig(RoofType type, float thickness, float overhang)
            {
                this.type = type;
                this.thickness = thickness;
                this.overhang = overhang;
            }

            public RoofConfig(RoofType type, float thickness, float overhang, Color color)
            {
                this.type = type;
                this.thickness = thickness;
                this.overhang = overhang;
                this.color = color;
            }
        }




        void OnDestroy()
        {
            GameEditorEvents.OnFileLoaded -= OnFileLoaded;
            GameEditorEvents.OnRequestButtonAction -= OnRequestButtonActionHandler;
        }
        void Awake()
        {
            Instance = this;
        }
        void Start()
        {
#if !UNITY_EDITOR
            AlertPopup.ShowAlert("welcome", "Welcome!", "For any help or comment, shoot us a message at support.exoa.fr!", false);
#endif
            ModuleDataModels.GetAllModules(OnGetModules);

            if (currentState != States.PlayMode)
            {
                GameEditorEvents.OnFileLoaded += OnFileLoaded;
            }
            GameEditorEvents.OnRequestButtonAction += OnRequestButtonActionHandler;

#if UNITY_ANDROID || UNITY_IOS
            RenderSettings.fog = false;
#endif
        }

        private void OnRequestButtonActionHandler(GameEditorEvents.Action action, bool active)
        {
            if (action == GameEditorEvents.Action.ExportFBX)
            {
                string fileName = UISaving.instance.CurrentFileName;
                if (!string.IsNullOrEmpty(fileName))
                {
                    if (State == States.PreviewBuilding)
                    {
                        FBXExporter.ExportScene("Building_" + fileName, GameObject.Find("FinalBuilding"));
                    }
                    else
                    {
                        FBXExporter.ExportScene("Floor_" + fileName, gameObject);
                    }

                }
            }
        }

        void Update()
        {
            if (HDInputs.ResetCamera())
            {
                ReFocusCamera();
            }
#if UNITY_EDITOR
            if (Input.GetKeyDown(KeyCode.P) && BuildOptions.DEBUG_MODE)
                UnityEditor.EditorApplication.isPaused = true;
#endif
            if (Input.GetKeyDown(KeyCode.I) && BuildOptions.DEBUG_MODE)
            {
                Canvas mainCanvas = GameObject.FindObjectOfType<Canvas>();
                if (mainCanvas != null) mainCanvas.enabled = !mainCanvas.enabled;
            }

        }

        private void OnFileLoaded(FileType fileType)
        {


            if (fileType == FileType.FloorMapFile || fileType == FileType.BuildingRead || fileType == FileType.InteriorFile)
            {
                Invoke("DelayedFocus", .5f);
            }
        }

        public void DelayedFocus()
        {
            ReFocusCamera();
        }

        public void ReFocusCamera()
        {
            CameraEvents.OnRequestObjectFocus?.Invoke(gameObject, true);
        }


        /* DEPRECATED
private void ReCenterLevel()
{
   if (!recenterContainerOnLoad)
       return;

   Bounds b = globalContainer.GetBoundsRecursive();
   globalContainer.transform.position -= b.center.SetY(0);
   transform.position -= b.center.SetY(0);
}*/

        private void OnGetModules(ModuleDataModels.ModuleList list)
        {
            //print("OnGetModules list:" + list.modules.Length);
            backendModuleList = list;
        }

        public ModuleDataModels.Module GetModuleByPrefab(string name)
        {
            foreach (ModuleDataModels.Module p in backendModuleList.modules)
            {
                if (p.prefab == name || p.prefab + "(CLone)" == name)
                {
                    return p;
                }
            }
            return new ModuleDataModels.Module("", "");
        }


        public DataModel.BuildingSettings GetBuildingSettings()
        {
            DataModel.BuildingSettings s = new DataModel.BuildingSettings();
            s.wallsHeight = wallsHeight;
            s.doorsHeight = doorsHeight;
            s.interiorWallThickness = interiorWallThickness;
            s.exteriorWallThickness = exteriorWallThickness;
            s.windowsThickness = windowsThickness;
            s.doorsThickness = doorsThickness;
            s.roofOverhang = roof.overhang;
            s.roofThickness = roof.thickness;
            s.roofType = (int)roof.type;
            return s;
        }
#if FLOORMAP_MODULE
        public void SetFloorMapSettings(DataModel.BuildingSettings s)
        {
            wallsHeight = s.wallsHeight;
            doorsHeight = s.doorsHeight;
            interiorWallThickness = s.interiorWallThickness;
            exteriorWallThickness = s.exteriorWallThickness;
            windowsThickness = s.windowsThickness;
            doorsThickness = s.doorsThickness;
            roof.overhang = s.roofOverhang;
            roof.thickness = s.roofThickness;
            AppController.RoofType[] values = Enum.GetValues(typeof(AppController.RoofType)) as AppController.RoofType[];
            roof.type = values[Mathf.RoundToInt(s.roofType)];
        }
#else

        public object GetFloorMapSettings()
        {
            return null;
        }
        public void SetFloorMapSettings(object s)
        {

        }
#endif

    }
}
