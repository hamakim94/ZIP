using Exoa.Designer;
using Exoa.Events;
using Exoa.Touch;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Cameras
{
    public class CameraPerspBase : CameraBase, ITouchPerspCamera
    {
        [Header("DISTANCE/ZOOM")]
        public Vector2 minMaxDistance = new Vector2(3, 30);
        public float initDistance = 10f;
        [Range(0f, 1f)]
        public float zoomSmoothness = 0f;
        private bool anyInteraction;

        [Header("FOV")]
        public float fov = 55.0f;

        /// <summary>
        /// Get the Field of view of the camera
        /// </summary>
        public float Fov
        {
            get
            {
                return fov;
            }
        }

        /// <summary>
        /// Init some camera parameters
        /// </summary>
        override protected void Init()
        {
            fov = cam.fieldOfView;
            finalDistance = initDistance;
            finalOffset = transform.position.SetY(groundHeight);
            //print("Init finalOffset:" + finalOffset);

            base.Init();
        }


        /// <summary>
        /// Update the camera parameters based on user's input
        /// </summary>
        virtual protected void Update()
        {
            if (disableMoves)
                return;

            List<TouchFinger> twoFingers = CameraInputs.TwoFingerFilter.UpdateAndGetFingers();
            List<TouchFinger> oneFinger = CameraInputs.OneFingerFilter.UpdateAndGetFingers();

            Vector2 screenCenter = cam.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));

            worldPointCameraCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
            float zoomRatio = 1;
            anyInteraction = false;

            worldPointFingersDelta = Vector3.zero;
            worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(CameraInputs.screenPointAnyFingerCountCenter));
            twistRot = Quaternion.identity;

            if (IsInputMatching(InputMapFingerDrag.RotateAround))
            {
                RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
                finalRotation = GetRotationFromPitchYaw();
                finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
                anyInteraction = true;
            }
            if (IsInputMatching(InputMapFingerDrag.RotateHead))
            {
                RotateFromVector(CameraInputs.GetAnyPixelScaledDelta());
                finalRotation = GetRotationFromPitchYaw();
                anyInteraction = true;
            }

            if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.ZoomOnly))
            {
                zoomRatio = CameraInputs.pinchRatio;
                anyInteraction = true;
            }

            if (IsInputMatching(InputMapScrollWheel.ZoomInCenter))
            {
                zoomRatio = CameraInputs.GetScroll();
                worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
                anyInteraction = true;
            }

            if (IsInputMatching(InputMapScrollWheel.ZoomUnderMouse))
            {
                zoomRatio = CameraInputs.GetScroll();
                worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(Input.mousePosition));
                anyInteraction = true;
            }

            if (minMaxDistance.y == finalDistance && zoomRatio > 1 || minMaxDistance.x == finalDistance && zoomRatio < 1)
            {
                zoomRatio = 1;
                worldPointFingersCenter = ClampInCameraBoundaries(HeightScreenDepth.Convert(screenCenter));
            }

            finalDistance = CalculateClampedDistance(finalPosition, worldPointCameraCenter, minMaxDistance, zoomRatio);

            if (IsInputMatching(InputMapFingerPinch.ZoomAndRotate) || IsInputMatching(InputMapFingerPinch.RotateOnly))
            {
                twistRot = Quaternion.AngleAxis(allowYawRotation ? CameraInputs.twistDegrees : 0, GetRotateAroundVector());
                anyInteraction = true;
            }
            if (!isFocusing && IsInputMatching(InputMapFingerDrag.Translate))
            {
                worldPointFingersDelta = Vector3.ClampMagnitude(HeightScreenDepth.ConvertDelta(CameraInputs.lastScreenPointAnyFingerCountCenter, CameraInputs.screenPointAnyFingerCountCenter, gameObject), maxTranslationSpeed);
                anyInteraction = true;
            }

            Vector3 vecFingersCenterToCamera = (finalPosition - worldPointFingersCenter);
            float vecFingersCenterToCameraDistance = vecFingersCenterToCamera.magnitude * zoomRatio;
            vecFingersCenterToCamera = vecFingersCenterToCamera.normalized * vecFingersCenterToCameraDistance;

            Vector3 targetPosition = worldPointFingersCenter + vecFingersCenterToCamera;
            Vector3 offsetFromFingerCenter = worldPointFingersCenter - worldPointFingersDelta;

            finalPosition = twistRot * (targetPosition - worldPointFingersCenter) + offsetFromFingerCenter;
            finalRotation = twistRot * finalRotation;

            currentPitch = NormalizeAngle(finalRotation.eulerAngles.x);
            currentYaw = (finalRotation.eulerAngles.y);

            Vector3 newWorldPointCameraCenter = CalculateOffset(finalPosition, finalRotation);
            Vector3 newWorldPointCameraCenterClamped = ClampInCameraBoundaries(newWorldPointCameraCenter);

            finalOffset = newWorldPointCameraCenterClamped;
            finalDistance = CalculateClampedDistance(finalPosition, newWorldPointCameraCenter, minMaxDistance);

            if (isFocusing)
            {
                HandleFocus();
            }

            finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);


            ApplyToCamera();
        }

        public void ApplyPositionRotation(Vector3 p, Quaternion r)
        {
            finalOffset = CalculateOffset(p, r);
            finalDistance = CalculateDistance(p, r);
            finalRotation = r;
            finalPosition = p;

            ApplyToCamera();
        }

        /// <summary>
        /// Return the matrix of the camera transform, in order to blend it when switching modes
        /// </summary>
        /// <returns></returns>
        override public Matrix4x4 GetMatrix()
        {
            float aspect = cam.aspect;
            float near = cam.nearClipPlane, far = cam.farClipPlane;
            return Matrix4x4.Perspective(fov, aspect, near, far);
        }

        /// <summary>
        /// Converts a distance to a camera position
        /// </summary>
        /// <param name="distance"></param>
        public void SetPositionByDistance(float v)
        {
            finalDistance = Mathf.Clamp(v, minMaxDistance.x, minMaxDistance.y);
            finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);
        }



        /// <summary>
        /// Set the initial values for the reset function
        /// </summary>
        /// <param name="offset"></param>
        /// <param name="rotation"></param>
        /// <param name="distanceOrSize"></param>
        override public void SetResetValues(Vector3 offset, Quaternion rotation, float distanceOrSize)
        {
            initOffset = offset;
            initDistance = distanceOrSize;
            initRotation = rotation;
        }

        #region FOCUS
        [Header("FOCUS")]
        public float focusDistanceMultiplier = 1f;

        /// <summary>
        /// Setup the camera move animation
        /// </summary>
        /// <param name="targetPosition"></param>
        /// <param name="changeDistance"></param>
        /// <param name="targetDistanceOrSize"></param>
        /// <param name="changeRotation"></param>
        /// <param name="targetRotation"></param>
        /// <param name="allowYOffsetFromGround"></param>
        /// <param name="instant"></param>
        override protected void FocusCamera(Vector3 targetPosition,
           bool changeDistance, float targetDistanceOrSize,
           bool changeRotation, Quaternion targetRotation,
           bool allowYOffsetFromGround = false,
           bool instant = false)
        {

            if (!instant)
            {
                focuswMoveOffset.Reset(finalOffset);
                focusMoveDistanceOrSize.Reset(finalDistance);
                focusMoveRotation.Reset(finalRotation);
            }
            else
            {
                focuswMoveOffset.Reset(targetPosition);
                focusMoveDistanceOrSize.Reset(targetDistanceOrSize);
                focusMoveRotation.Reset(targetRotation);
            }

            base.FocusCamera(targetPosition, changeDistance, targetDistanceOrSize,
                changeRotation, targetRotation, allowYOffsetFromGround, instant);
        }


        /// <summary>
        /// Focus the camera on a GameObject (distance animation)
        /// </summary>
        /// <param name="go">The gameObject to get closer to</param>
        /// <param name="allowYOffsetFromGround">Allow offseting the camera from the ground to match the object's pivot y position and height</param>
        override public void FocusCameraOnGameObject(GameObject go, bool allowYOffsetFromGround = false)
        {
            focuswMoveOffset.Reset(finalOffset);
            focusMoveDistanceOrSize.Reset(finalDistance);

            base.FocusCameraOnGameObject(go, allowYOffsetFromGround);
        }


        /// <summary>
        /// Handle the camera focus/moveto
        /// </summary>
        protected void HandleFocus()
        {
            if (!isFocusing)
                return;

            if (focusTargetBounds != null && focusTargetBounds != default(Bounds))
            {
                Bounds b = focusTargetBounds;

                if (b.size == Vector3.zero && b.center == Vector3.zero)
                    return;

                // offseting the bounding box
                if (allowYOffsetFromGround)
                {
                    float yOffset = b.center.y;
                    b.extents = b.extents.SetY(b.extents.y + yOffset);
                    b.center = b.center.SetY(groundHeight);
                }
                Vector3 max = b.size;
                // Get the radius of a sphere circumscribing the bounds
                float radius = max.magnitude * focusRadiusMultiplier;

                float aspect = cam.aspect;
                float horizontalFOV = 2f * Mathf.Atan(Mathf.Tan(fov * Mathf.Deg2Rad / 2f) * aspect) * Mathf.Rad2Deg;
                // Use the smaller FOV as it limits what would get cut off by the frustum        
                float fovMin = Mathf.Min(fov, horizontalFOV);
                float dist = radius / (Mathf.Sin(fovMin * Mathf.Deg2Rad / 2f));

                focusTargetPosition = b.center;
                focusTargetDistanceOrSize = Mathf.Clamp((dist * focusDistanceMultiplier), minMaxDistance.x, minMaxDistance.y);

            }

            if (enableFocusing)
            {
                finalDistance = focusMove.Update(ref focusMoveDistanceOrSize, focusTargetDistanceOrSize);
            }
            if (enableRotationChange)
            {
                finalRotation = focusMove.Update(ref focusMoveRotation, focusTargetRotation);
                currentPitch = finalRotation.eulerAngles.x;
                currentYaw = finalRotation.eulerAngles.y;
            }
            finalOffset = worldPointCameraCenter = focusMove.Update(ref focuswMoveOffset, focusTargetPosition, OnFocusCompleted);

            finalPosition = CalculatePosition(finalOffset, finalRotation, finalDistance);

        }

        private void OnFocusCompleted()
        {
            Log("OnFocusCompleted");
            StopFocus();
            CameraEvents.OnFocusComplete?.Invoke();
        }
        #endregion
    }
}
