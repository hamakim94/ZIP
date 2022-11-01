using UnityEngine;

namespace Exoa.Designer
{
    public class BaseFloatingPopup : BaseStaticPopup
    {
        protected RectTransform rect;
        protected RectTransform parentRect;
        protected bool moveWithMouse;
        protected Transform currentTarget;
        protected Vector3 currentTargetPosition;
        protected Bounds currentTargetBounds;

        public Transform CurrentTarget
        {
            get
            {
                return currentTarget;
            }

            set
            {
                currentTarget = value;

                currentTargetBounds = currentTarget == null ? new Bounds() : currentTarget.gameObject.GetBoundsRecursive();
            }
        }

        override protected void Awake()
        {
            base.Awake();

            rect = contentGo.GetComponent<RectTransform>();
            parentRect = transform.parent.GetComponent<RectTransform>();

            Hide();
        }

        override protected void Update()
        {
            base.Update();

            if (!contentGo.activeSelf)
                return;
            MovePopup();
        }

        protected Vector2 MovePopup()
        {
            Vector2 localMouse, screenPoint;

            if (currentTarget != null && currentTargetBounds != null)
            {
                screenPoint = RectTransformUtility.WorldToScreenPoint(Camera.main, currentTargetBounds.center);
            }
            else if (currentTargetPosition != Vector3.zero)
            {
                screenPoint = RectTransformUtility.WorldToScreenPoint(Camera.main, currentTargetPosition);
            }
            else if (moveWithMouse)
            {
                screenPoint = Input.mousePosition;
            }
            else return default(Vector2);

            RectTransformUtility.ScreenPointToLocalPointInRectangle(rect.parent as RectTransform, screenPoint, null, out localMouse);

            float rightPosition = localMouse.x + rect.GetWidth();
            float leftPosition = localMouse.x;
            float topPosition = localMouse.y + rect.GetHeight();
            float bottomPosition = localMouse.y;

            float limitRight = parentRect.rect.width * .5f - 10;
            float limitLeft = -parentRect.rect.width * .5f + 10;
            float limitTop = parentRect.rect.height * .5f - 10;
            float limitBottom = -parentRect.rect.height * .5f + 10;

            if (limitRight < rightPosition)
                localMouse.x = limitRight - rect.GetWidth();
            if (limitLeft > leftPosition)
                localMouse.x = limitLeft;
            if (limitBottom > bottomPosition)
                localMouse.y = limitBottom;
            if (limitTop < topPosition)
                localMouse.y = limitTop - rect.GetHeight();

            rect.anchoredPosition = localMouse;
            //Debug.Log("localMouse:" + localMouse);
            return screenPoint;
        }
    }
}
