using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NineSoftTabControl : MonoBehaviour
{
    [System.Serializable]
    public class Tab
    {
        public string TabName;
        public Sprite TabIcon;
        public Color CheckMarkColor;
        [Space(10)]
        public NineSoftTabButton TabButton;
        public GameObject TabPanel;
    }

    [Header("--- TAB BUTTONS ---")]
    [Header("Colors")]
    [SerializeField] private Color SelectedTabColor;
    [SerializeField] private Color OtherTabsColor;
    [Space(10)]
    [Header("Size")]
    [SerializeField] private float TabButtonMinimumWidth = 90;
    [SerializeField] private float TabButtonMaximumWidth = 200;
    [SerializeField] private float TabButtonMinimumHeight = 70;
    [SerializeField] private float TabButtonMaximumHeight = 100;

    [Space(20)]

    [Header("--- OTHER ---")]
    [Header("Transforms")]
    [SerializeField] private RectTransform ButtonsParent;
    [SerializeField] private GridLayoutGroup GridLayoutGroup;

    [Space(20)]

    [Header("--- TABS ---")]
    [SerializeField] private bool PreviewOnEditor;
    [Space(20)]
    [SerializeField] public List<Tab> Tabs;

    private void Awake()
    {
        InitializeTabs();
        ChangeTab(0);
    }

    private void InitializeTabs()
    {
        float width = (TabButtonMaximumWidth != 0 && TabButtonMinimumWidth != 0) ? Mathf.Clamp(ButtonsParent.rect.width / Tabs.Count, TabButtonMinimumWidth, TabButtonMaximumWidth) : GridLayoutGroup.cellSize.x;
        float height = (TabButtonMaximumHeight != 0 && TabButtonMinimumHeight != 0) ? Mathf.Clamp(ButtonsParent.rect.height / Tabs.Count, TabButtonMinimumHeight, TabButtonMaximumHeight) : GridLayoutGroup.cellSize.y;
        GridLayoutGroup.cellSize = new Vector2(width, height);

        for (int i = 0; i < Tabs.Count; i++)
        {
            if (Application.isPlaying)
                if (Tabs[i].TabButton == null && Tabs[i].TabPanel == null)
                {
                    Debug.LogError("This tab is incorrect: " + Tabs[i].TabName + "\nPlease delete this tab manually from List or add TabPanel and TabButton\n-----");
                    Tabs.RemoveAt(i);
                    break;
                }

            int index = i;

            Tabs[i].TabButton.Initialize(Tabs[i].TabName, Tabs[i].TabIcon, OtherTabsColor, SelectedTabColor, Tabs[i].CheckMarkColor);

            Tabs[i].TabButton.OnTabChanged.RemoveAllListeners();
            Tabs[i].TabButton.OnTabChanged.AddListener(() => { ChangeTab(index); });
        }
    }


    public void ChangeTab(int index)
    {
        for (int i = 0; i < Tabs.Count; i++)
        {
            Tabs[i].TabPanel.SetActive(false);
            Tabs[i].TabButton.Unselect();
        }

        Tabs[index].TabPanel.SetActive(true);
        Tabs[index].TabButton.Select();

    }

    public void AddNewTab()
    {
#if UNITY_EDITOR
        try
        {
            if (Application.isPlaying) return;

            if (Tabs.Count > 0)
            {

                NineSoftTabButton tbtn = Instantiate(Tabs[0].TabButton, Tabs[0].TabButton.transform.parent);
                GameObject tpnl = Instantiate(Tabs[0].TabPanel, Tabs[0].TabPanel.transform.parent);

                Tab tab = new Tab
                {
                    TabName = "Tab " + (Tabs.Count + 1) + " (Please enter a tab name)",
                    TabIcon = Tabs[0].TabIcon,
                    CheckMarkColor = Color.white,
                    TabButton = tbtn,
                    TabPanel = tpnl
                };

                Tabs.Add(tab);

                InitializeTabs();
            }
        }
        catch { }
#endif
    }

    public void RemoveLastTab()
    {
#if UNITY_EDITOR
        if (Application.isPlaying) return;

        // if (Tabs.Count > 2)
        if(Tabs.Count > 3)
        {
            int i = Tabs.Count - 1;
            Tab t = Tabs[i];
            DestroyImmediate(t.TabPanel.gameObject);
            DestroyImmediate(t.TabButton.gameObject);
            Tabs.RemoveAt(i);
            InitializeTabs();
        }
#endif

    }

    private void OnDrawGizmos()
    {
        if (PreviewOnEditor)
            InitializeTabs();
    }
}
