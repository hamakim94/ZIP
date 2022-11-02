using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class SliderTooltipHandler : TooltipHandler
    {
        private Slider slider;
        public string suffix;
        public string format = "0.00";

        void Start()
        {
            slider = GetComponent<Slider>();
        }
        void Update()
        {
            if (handled)
            {
                text = slider.value.ToString(format) + suffix;
                Tooltip.Show(text);
            }
        }

    }
}
