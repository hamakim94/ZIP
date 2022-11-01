using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class Tooltip : MonoBehaviour
    {
        public static Tooltip instance;
        private GameObject bg;
        private VerticalLayoutGroup layout;
        private TMP_Text t;
        private RectTransform rt;
        private bool shown;

        void Awake()
        {
            instance = this;
            rt = GetComponent<RectTransform>();
            layout = GetComponent<VerticalLayoutGroup>();
            t = transform.FindChildRecursiveComp<TMP_Text>("Text");
            bg = transform.Find("TextBackground").gameObject;
            HideTooltip();
        }
        void OnApplicationFocus(bool hasFocus)
        {
            if (!hasFocus)
                HideTooltip();
        }
        void Update()
        {
            if (shown)
            {
                Vector3 p2 = rt.parent.GetComponent<RectTransform>().ScreenPointToRectTransformPosition(Input.mousePosition);
                if (p2.x < 0 && p2.y > 0)
                {
                    rt.pivot = new Vector2(0, 1);
                    layout.childAlignment = TextAnchor.UpperLeft;
                }
                else if (p2.x > 0 && p2.y > 0)
                {
                    rt.pivot = new Vector2(1, 1);
                    layout.childAlignment = TextAnchor.UpperRight;
                }
                else if (p2.x < 0 && p2.y < 0)
                {
                    rt.pivot = new Vector2(0, 0);
                    layout.childAlignment = TextAnchor.LowerLeft;
                }
                else if (p2.x > 0 && p2.y < 0)
                {
                    rt.pivot = new Vector2(1, 0);
                    layout.childAlignment = TextAnchor.LowerRight;
                }
                rt.anchoredPosition = p2;
            }
        }

        public void ShowTooltip(string v)
        {
#if UNITY_STANDALONE || UNITY_EDITOR
            shown = true;
            t.text = v;
            bg.SetActive(true);
#endif
        }
        public void HideTooltip()
        {
            shown = false;
            bg.SetActive(false);
        }

        public static void Show(string v)
        {
            if (instance != null) instance.ShowTooltip(v);
        }

        public static void Hide()
        {
            if (instance != null) instance.HideTooltip();
        }
    }
}
