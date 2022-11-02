using Exoa.Touch;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


#if NEW_INPUT_SYSTEM
using UnityEngine.InputSystem;
#endif

namespace Exoa.Cameras
{
    public class CameraInputs : MonoBehaviour
    {
        public static bool ControlKey => (Event.current != null && Event.current.control && Event.current.type == EventType.KeyDown);
        public static bool IsOverUI => EventSystem.current != null && EventSystem.current.IsPointerOverGameObject();
        private static bool isFingerTap;
        private static bool isFingerUp;

        public static FingerFilter OneFingerFilter = new FingerFilter(FingerFilter.FilterType.AllFingers, true, 1, 0, null);
        public static FingerFilter TwoFingerFilter = new FingerFilter(FingerFilter.FilterType.AllFingers, true, 2, 0, null);
        public static ScreenDepth ScreenDepth = new ScreenDepth(ScreenDepth.ConversionType.HeightIntercept);

        public static float pinchScale;
        public static float pinchRatio = 1;
        public static float twistDegrees;
        public static Vector2 oneFingerScaledPixelDelta;
        public static Vector2 twoFingersScaledPixelDelta;
        public static Vector2 lastScreenPointTwoFingersCenter;
        public static Vector2 lastScreenPointOneFingerCenter;
        public static Vector2 lastScreenPointAnyFingerCountCenter;
        public static Vector2 screenPointTwoFingersCenter;
        public static Vector2 screenPointOneFingerCenter;
        public static Vector2 screenPointAnyFingerCountCenter;
#if NEW_INPUT_SYSTEM
        private PlayerInput playerInput;
#endif
        [Header("Key Map")]
        public static KeyCode resetCamera = KeyCode.F;
        public static KeyCode switchPerspective = KeyCode.Space;

        public static bool ResetCamera()
        {
            return Input.GetKeyDown(resetCamera) && !IsOverUI;
        }

        public static bool IsTap()
        {
            return isFingerTap && !Input.GetMouseButton(1) && !Input.GetMouseButtonUp(1)
             && !Input.GetMouseButton(2) && !Input.GetMouseButtonUp(2);
        }
        public static bool IsUp()
        {
            return isFingerUp && !Input.GetMouseButton(1) && !Input.GetMouseButtonUp(1)
             && !Input.GetMouseButton(2) && !Input.GetMouseButtonUp(2);
        }

        public static float GetScroll()
        {
            if (IsOverUI) return 1;
            return 1 - Input.GetAxis("Mouse ScrollWheel");
        }



        public static bool ChangePerspective()
        {
            return Input.GetKeyDown(switchPerspective) && !IsOverUI;
        }


        public static bool ReleaseDrag()
        {
            return Input.GetMouseButtonUp(0);
        }

        public static bool OptionPress()
        {
            return Input.GetMouseButtonDown(1);
        }



        void OnDestroy()
        {
            InputTouch.OnFingerTap -= OnFingerTap;
            InputTouch.OnFingerUp -= OnFingerUp;
        }
        void Start()
        {
            if (InputTouch.Instance != null)
            {
                InputTouch.Instance.UseMouse = !Application.isMobilePlatform;
            }
            InputTouch.OnFingerTap += OnFingerTap;
            InputTouch.OnFingerUp += OnFingerUp;
#if NEW_INPUT_SYSTEM
            playerInput = new PlayerInput();
            playerInput.onActionTriggered += OnActionTriggered;
#endif
        }
#if NEW_INPUT_SYSTEM
        private void OnActionTriggered(InputAction.CallbackContext context)
        {
            print("OnActionTriggered " + context.action + " " + context.ToString());
        }
#endif
        void Update()
        {
            List<TouchFinger> twoFingers = TwoFingerFilter.UpdateAndGetFingers();
            List<TouchFinger> oneFinger = OneFingerFilter.UpdateAndGetFingers();

            // 2 Fingers
            pinchScale = InputGesture.GetPinchScale(twoFingers);
            pinchRatio = InputGesture.GetPinchRatio(twoFingers);
            twistDegrees = InputGesture.GetTwistDegrees(twoFingers);
            lastScreenPointTwoFingersCenter = InputGesture.GetLastScreenCenter(twoFingers);
            screenPointTwoFingersCenter = InputGesture.GetScreenCenter(twoFingers);
            twoFingersScaledPixelDelta = screenPointTwoFingersCenter - lastScreenPointTwoFingersCenter;
            twoFingersScaledPixelDelta *= InputTouch.ScalingFactor;

            // 1 Finger
            lastScreenPointOneFingerCenter = InputGesture.GetLastScreenCenter(oneFinger);
            screenPointOneFingerCenter = InputGesture.GetScreenCenter(oneFinger);
            oneFingerScaledPixelDelta = screenPointOneFingerCenter - lastScreenPointOneFingerCenter;
            oneFingerScaledPixelDelta *= InputTouch.ScalingFactor;

            // 1 to X Fingers
            screenPointAnyFingerCountCenter = screenPointTwoFingersCenter == Vector2.zero ? screenPointOneFingerCenter : screenPointTwoFingersCenter;
            lastScreenPointAnyFingerCountCenter = lastScreenPointTwoFingersCenter == Vector2.zero ? lastScreenPointOneFingerCenter : lastScreenPointTwoFingersCenter;

        }

        public static int GetFingerCount(int max = 2)
        {
            List<TouchFinger> list = InputTouch.GetFingers(false, true);
            return list != null ? Mathf.Min(max, list.Count) : 0;
        }

        internal static Vector2 GetAnyPixelScaledDelta()
        {
            if (oneFingerScaledPixelDelta.magnitude > 0)
                return oneFingerScaledPixelDelta;
            return twoFingersScaledPixelDelta;
        }

        private void OnFingerUp(TouchFinger obj)
        {
            isFingerUp = true;
        }

        private void OnFingerTap(TouchFinger obj)
        {
            isFingerTap = true;
        }

        void LateUpdate()
        {
            isFingerTap = false;
            isFingerUp = false;
        }
    }
}
