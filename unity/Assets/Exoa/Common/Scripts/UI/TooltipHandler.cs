using UnityEngine;
using UnityEngine.EventSystems;

namespace Exoa.Designer
{
    public class TooltipHandler : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        public string text;
        protected bool handled;

        virtual public void OnPointerEnter(PointerEventData eventData)
        {
            handled = true;
            Tooltip.Show(text.ToUpper());
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            handled = false;
            Tooltip.Hide();
        }
    }
}
