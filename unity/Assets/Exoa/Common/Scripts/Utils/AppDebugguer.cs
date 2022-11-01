using Exoa.Designer;
using Exoa.Events;
using System;
using UnityEngine;
using static Exoa.Events.GameEditorEvents;

namespace Exoa.Designer
{
    public class AppDebugguer : MonoBehaviour
    {
#if UNITY_EDITOR
        void OnDestroy()
        {
            GameEditorEvents.OnFileLoaded -= OnFileLoaded;
            GameEditorEvents.OnFileSaved -= OnFileSaved;
            GameEditorEvents.OnFileChanged -= OnFileChanged;

            GameEditorEvents.OnScreenShotSaved -= OnScreenShotSaved;
            GameEditorEvents.OnRenderForScreenshot -= OnRenderForScreenshot;

            GameEditorEvents.OnRequestClearAll -= OnRequestClearAll;
            GameEditorEvents.OnRequestButtonAction -= OnRequestButtonAction;
            GameEditorEvents.OnRequestFloorAction -= OnRequestFloorAction;
        }

        void Start()
        {
            GameEditorEvents.OnFileLoaded += OnFileLoaded;
            GameEditorEvents.OnFileSaved += OnFileSaved;
            GameEditorEvents.OnFileChanged += OnFileChanged;

            GameEditorEvents.OnScreenShotSaved += OnScreenShotSaved;
            GameEditorEvents.OnRenderForScreenshot += OnRenderForScreenshot;

            GameEditorEvents.OnRequestClearAll += OnRequestClearAll;
            GameEditorEvents.OnRequestButtonAction += OnRequestButtonAction;
            GameEditorEvents.OnRequestFloorAction += OnRequestFloorAction;
        }

        private void OnFileLoaded(GameEditorEvents.FileType fileType)
        {
            HDLogger.Log("OnFileLoaded fileType:" + fileType, HDLogger.LogCategory.FileSystem);
        }

        private void OnFileSaved(string name, GameEditorEvents.FileType fileType)
        {
            HDLogger.Log("OnFileSaved fileType:" + fileType, HDLogger.LogCategory.FileSystem);
        }

        private void OnFileChanged(string name, GameEditorEvents.FileType fileType)
        {
            HDLogger.Log("OnFileChanged name:" + name + " fileType:" + fileType, HDLogger.LogCategory.FileSystem);
        }

        private void OnScreenShotSaved(string name, GameEditorEvents.MenuType menuType)
        {
            HDLogger.Log("OnScreenShotSaved name:" + name + " menuType:" + menuType, HDLogger.LogCategory.Screenshot);
        }

        private void OnRenderForScreenshot(bool render)
        {
            HDLogger.Log("OnRenderForScreenshot render:" + render, HDLogger.LogCategory.Screenshot);
        }

        private void OnRequestClearAll(bool clearFloorsUI, bool clearFloorMapUI, bool clearScene)
        {
            HDLogger.Log("OnRequestClearAll clearFloorsUI:" + clearFloorsUI + " clearFloorMapUI:" + clearFloorMapUI + " clearScene:" + clearScene, HDLogger.LogCategory.General);
        }

        private void OnRequestButtonAction(GameEditorEvents.Action action, bool active)
        {
            HDLogger.Log("OnRequestButtonAction action:" + action, HDLogger.LogCategory.General);
        }

        private void OnRequestFloorAction(FloorAction action, string name)
        {
            HDLogger.Log("OnRequestFloorAction name:" + action.ToString() + " id:" + name, HDLogger.LogCategory.Floormap);
        }
#endif
    }
}
