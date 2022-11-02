namespace Exoa.Events
{
    public class GameEditorEvents
    {
        public enum FloorAction
        {
            Select, Add, Remove, Duplicate, PreviewBuilding
        }
        public enum Action
        {
            Help, ToggleExteriorWalls, ToggleGizmos,
            Exit, NewProject, ToggleRoof, NewFloor,
            ShowExteriorWalls, ShowGizmos, ShowRoof, ExportFBX
        };
        public enum FileType { FloorMapFile, InteriorFile, BuildingRead, ScreenshotFile };
        public enum MenuType { FloorMapMenu, InteriorMenu, FloorsMenu };

        public delegate void OnGameEditorEventHandler();
        public delegate void OnClearEventHandler(bool clearFloorsUI, bool clearFloorMapUI, bool clearScene);
        public delegate void OnGameEditorMenuTypeEventHandler(FileType fileType);
        public delegate void OnGameEditorEventBoolHandler(bool success);
        public delegate void OnGameEditorEventStringHandler(string name);
        public delegate void OnLoadEventStringHandler(string name, FileType fileType);
        public delegate void OnLoadEventMenuHandler(string name, MenuType menuType);
        public delegate void OnLoadEventActionHandler(Action action, bool active);
        public delegate void OnFloorActionHandler(FloorAction action, string floorId);

        public static OnGameEditorMenuTypeEventHandler OnFileLoaded;
        public static OnLoadEventStringHandler OnFileSaved;
        public static OnLoadEventMenuHandler OnScreenShotSaved;
        public static OnClearEventHandler OnRequestClearAll;
        public static OnGameEditorEventHandler OnRequestRebuildAllOpenings;
        public static OnGameEditorEventHandler OnRequestRebuildAllRooms;
        public static OnGameEditorEventHandler OnRequestRebuildBuilding;
        public static OnGameEditorEventHandler OnRequestRepositionOpenings;
        //public static OnGameEditorEventStringHandler OnRequestChangeFloorMap;

        public static OnLoadEventStringHandler OnFileChanged;
        public static OnGameEditorEventBoolHandler OnDragEvent;

        public static OnLoadEventActionHandler OnRequestButtonAction;
        public static OnFloorActionHandler OnRequestFloorAction;
        public static OnGameEditorEventBoolHandler OnRenderForScreenshot;
    }
}
