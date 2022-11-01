using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class ControlPointInfoPopup : BaseFloatingPopup
    {
        public static ControlPointInfoPopup Instance;
        public static UnityEvent OnClickDelete = new UnityEvent();

        public Button trashBtn;
        private ControlPoint currentControlPoint;
        private ControlPointsController currentCPC;

        override protected void Awake()
        {
            Instance = this;

            trashBtn?.onClick.AddListener(() =>
            {
                if (currentControlPoint != null) currentControlPoint.cpc.RemoveControlPoint(currentControlPoint);
                //if (currentCPC != null) currentCPC.Remove(currentControlPoint);
                Hide();
            });
            base.Awake();
        }



        public void Show(ControlPointsController cpc, Vector3 mouseWorld, bool showButtons = false)
        {
            HDLogger.Log("ControlPointInfoPopup Show", HDLogger.LogCategory.General);
            currentCPC = cpc;
            currentTarget = null;
            currentTargetPosition = mouseWorld;

            trashBtn?.gameObject.SetActive(showButtons);

            Show();
            Vector2 screenPoint = MovePopup();
            //Debug.Log("currentTargetPosition:" + currentTargetPosition + " screenPoint:" + screenPoint);
        }
        public void Show(ControlPoint cp, bool showButtons = false)
        {
            HDLogger.Log("ControlPointInfoPopup Show", HDLogger.LogCategory.General);
            currentControlPoint = cp;
            currentTarget = cp.transform;
            currentTargetPosition = Vector3.zero;

            trashBtn?.gameObject.SetActive(showButtons);

            Show();
            MovePopup();
        }


    }
}
