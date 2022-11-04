using UnityEngine;

namespace Exoa.Events
{
    public class CameraEvents
    {
        public enum Action { SwitchPerspective, DisableCameraMoves, Help, ResetCameraPositionRotation, ForcePerspectiveMode };

        public delegate void OnRequestGroundHeightChangeHandler(float newHeight, bool animate, float duration);
        public delegate void OnCameraBoolEvent(Action action, bool active);
        public delegate void OnCameraGameObjectEvent(GameObject obj);
        public delegate void OnRequestObjectFocusHandler(GameObject obj, bool allowYOffsetFromGround);
        public delegate void OnSwitchPerspectiveHandler(bool orthoMode);
        public delegate void OnCameraEventHandler();

        public static OnSwitchPerspectiveHandler OnBeforeSwitchPerspective;
        public static OnSwitchPerspectiveHandler OnAfterSwitchPerspective;
        public static OnCameraBoolEvent OnRequestButtonAction;
        public static OnRequestObjectFocusHandler OnRequestObjectFocus;
        public static OnRequestGroundHeightChangeHandler OnRequestGroundHeightChange;
        public static OnCameraEventHandler OnFocusStart;
        public static OnCameraEventHandler OnFocusComplete;
        public static OnCameraEventHandler OnRequestStopFocus;


    }
}
