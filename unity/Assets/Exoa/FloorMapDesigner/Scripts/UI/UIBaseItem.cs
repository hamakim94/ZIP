using Exoa.Events;
using System;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class UIBaseItem : MonoBehaviour
    {
        public DataModel.FloorMapItemType sequencingItemType;
        public Button displayBtn;
        public Button delBtn;
        public Button duplicateBtn;
        public Button isolateBtn;
        public Button horizontalMirrorBtn;
        public Button verticalMirrorBtn;
        public Button drawBtn;

        public TMP_InputField nameInput;
        public Slider widthInput;
        public Slider heightInput;
        public Slider yposInput;
        public Toggle hasWindowToggle;
        public Slider windowFrameSizeInput;
        public Slider windowSizeHInput;
        public Slider windowSizeVInput;
        public Slider windowSubDivHInput;
        public Slider windowSubDivVInput;

        protected Image img;
        public bool displayed = true;
        public bool folded = true;
        public bool drawModeEnabled = true;
        public Color colorDisplayed;
        public Color colorHidden;
        public ControlPointsController cpc;
        public IObjectDrawer drawer;

        public delegate void OnSequenceItemHandler(DataModel.FloorMapItem data, DataModel.FloorMapItemType type);


        public delegate void OnSequenceItemUIHandler(UIBaseItem item, bool active);
        public OnSequenceItemHandler OnChangeSettings;
        public OnSequenceItemHandler OnDuplicate;
        public OnSequenceItemUIHandler OnIsolate;
        public OnSequenceItemUIHandler OnDrawModeToggled;


        public string Name
        {
            get
            {
                if (nameInput != null)
                    return nameInput.text;
                return null;
            }
            set
            {
                if (nameInput != null) nameInput.text = value;
            }
        }

        public float YPos
        {
            get
            {
                return yposInput != null ? yposInput.value : 1;
            }
            set
            {
                if (yposInput != null) yposInput.value = value;
            }
        }

        public float Height
        {
            get
            {
                return heightInput != null ? heightInput.value : 1;
            }
            set
            {
                if (heightInput != null) heightInput.value = value;
            }
        }
        public float Width
        {
            get { return widthInput != null ? widthInput.value : 1; }
            set { if (widthInput != null) widthInput.value = value; }
        }
        public bool HasWindow
        {
            get { return hasWindowToggle != null ? hasWindowToggle.isOn : false; }
            set { if (hasWindowToggle != null) hasWindowToggle.isOn = value; }
        }

        public float WindowFrameSize
        {
            get { return windowFrameSizeInput != null ? windowFrameSizeInput.value : 0; }
            set { if (windowFrameSizeInput != null) windowFrameSizeInput.value = value; }
        }
        public float WindowSizeH
        {
            get { return windowSizeHInput != null ? windowSizeHInput.value : 0; }
            set { if (windowSizeHInput != null) windowSizeHInput.value = value; }
        }

        public float WindowSizeV
        {
            get { return windowSizeVInput != null ? windowSizeVInput.value : 0; }
            set { if (windowSizeVInput != null) windowSizeVInput.value = value; }
        }

        public int WindowSubDivH
        {
            get { return windowSubDivHInput != null ? Mathf.RoundToInt(windowSubDivHInput.value) : 0; }
            set { if (windowSubDivHInput != null) windowSubDivHInput.value = value; }
        }

        public int WindowSubDivV
        {
            get { return windowSubDivVInput != null ? Mathf.RoundToInt(windowSubDivVInput.value) : 0; }
            set { if (windowSubDivVInput != null) windowSubDivVInput.value = value; }
        }

        virtual public void OnDestroy()
        {

            delBtn?.onClick.RemoveAllListeners();
            displayBtn?.onClick.RemoveAllListeners();
            duplicateBtn?.onClick.RemoveAllListeners();
            isolateBtn?.onClick.RemoveAllListeners();
            horizontalMirrorBtn?.onClick.RemoveAllListeners();
            verticalMirrorBtn?.onClick.RemoveAllListeners();
            drawBtn?.onClick.RemoveAllListeners();

            nameInput?.onEndEdit.RemoveAllListeners();
            widthInput?.onValueChanged.RemoveAllListeners();
            heightInput?.onValueChanged.RemoveAllListeners();
            yposInput?.onValueChanged.RemoveAllListeners();

            OnChangeSettings = null;
            OnDuplicate = null;
            OnIsolate = null;
        }


        virtual public void Start()
        {

            img = GetComponent<Image>();

            delBtn?.onClick.AddListener(OnClickDelete);
            displayBtn?.onClick.AddListener(OnClickDisplay);
            duplicateBtn?.onClick.AddListener(OnClickDuplicate);
            isolateBtn?.onClick.AddListener(OnClickIsolate);
            horizontalMirrorBtn?.onClick.AddListener(() => cpc.Mirror(true));
            verticalMirrorBtn?.onClick.AddListener(() => cpc.Mirror(false));
            drawBtn?.onClick.AddListener(OnClickDraw);

            nameInput?.onEndEdit.AddListener(OnChangeName);
            widthInput?.onValueChanged.AddListener(OnChangeDimensions);
            heightInput?.onValueChanged.AddListener(OnChangeDimensions);
            yposInput?.onValueChanged.AddListener(OnChangeDimensions);
            hasWindowToggle?.onValueChanged.AddListener(OnChangeHasWindowToggle);
            windowFrameSizeInput?.onValueChanged.AddListener(OnChangeDimensions);
            windowSizeHInput?.onValueChanged.AddListener(OnChangeDimensions);
            windowSizeVInput?.onValueChanged.AddListener(OnChangeDimensions);
            windowSubDivHInput?.onValueChanged.AddListener(OnChangeDimensions);
            windowSubDivVInput?.onValueChanged.AddListener(OnChangeDimensions);

            //print("cpc.pathColor:" + cpc.pathColor);
            if (cpc != null)
            {
                colorDisplayed = cpc.pathColor;
#if FLOORMAP_MODULE
                drawer.DrawingColor = cpc.pathColor;
#endif
            }
            SetDisplayed(true);
            ToggleDrawMode(drawModeEnabled, true, false);

            //print("parse:" + float.Parse("1.5"));
            //print("parse2:" + float.Parse("1,5"));
        }

        private void OnChangeHasWindowToggle(bool arg0)
        {
            BroadcastChange(true);
        }

        private void OnChangeDimensions(float arg0)
        {
            BroadcastChange(true);
        }
        private void OnChangeSubDiv(int arg0)
        {
            BroadcastChange(true);
        }
        virtual public void ToggleDrawMode(bool active, bool sendEvent, bool hideGhost)
        {
            HDLogger.Log("[UIBaseItem] SetDrawModeEnabled drawMode:" + active, HDLogger.LogCategory.Floormap);

            drawModeEnabled = active;
            cpc.IsDrawing = active;
            drawBtn.GetComponentInChildren<TMP_Text>().text = drawModeEnabled ? "DRAW ENABLED" : "DRAW DISABLED";

            if (sendEvent)
                OnDrawModeToggled?.Invoke(this, active);
            if (!active && hideGhost)
                cpc.HideGhost();
        }




        virtual public void OnClickDraw()
        {
            drawModeEnabled = !drawModeEnabled;
            ToggleDrawMode(drawModeEnabled, true, true);
        }

        private void OnClickIsolate()
        {
            OnIsolate?.Invoke(this, true);
            SetDisplayed(true);
        }

        private void OnClickDuplicate()
        {
            OnDuplicate?.Invoke(GetData(), sequencingItemType);
        }

        private void OnChangeName(string arg0)
        {
            //BroadcastChange(true);
        }

        protected void BroadcastChange(bool resetPlayback)
        {
            OnChangeSettings?.Invoke(GetData(), sequencingItemType);
        }


        protected void OnClickDisplay()
        {
            displayed = !displayed;

            SetDisplayed(displayed);
        }
        public void SetDisplayed(bool v)
        {
            displayed = v;
            img.color = displayed ? colorDisplayed : colorHidden;
            cpc?.gameObject.SetActive(displayed);
            drawer.GO.SetActive(displayed);
        }

        protected void OnClickDelete()
        {
            AlertPopup p = AlertPopup.ShowAlert("confirm", "Confirm?", "Do you really want to delete this sequence?", true, "Cancel");
            if (p != null)
                p.OnClickOKEvent.AddListener(Delete);
        }



        public void Delete()
        {
            cpc.transform.ClearChildren();
            cpc.gameObject.DestroyUniversal();

            drawer.GO.DestroyUniversal();

            GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();

            gameObject.DestroyUniversal();

        }


        virtual public DataModel.FloorMapItem GetData()
        {
            DataModel.FloorMapItem data = new DataModel.FloorMapItem();
            data.name = Name;
            data.width = Width;
            data.height = Height;
            data.ypos = YPos;
            data.hasWindow = HasWindow;
            data.windowFrameSize = WindowFrameSize;
            data.windowSizeH = WindowSizeH;
            data.windowSizeV = WindowSizeV;
            data.windowSubDivH = WindowSubDivH;
            data.windowSubDivV = WindowSubDivV;

            data.type = sequencingItemType.ToString();
            data.normalizedPositions = new List<Vector3>();

            if (cpc != null)
            {
                ControlPoint[] cps = cpc.transform.GetComponentsInChildren<ControlPoint>();
                List<ControlPoint> cpsList = new List<ControlPoint>(cps);
                cpsList = cps.OrderBy(s => s.transform.GetSiblingIndex()).ToList();
                data.directions = cpc.GetPointsDirectionList();
                data.normalizedPositions = cpc.GetNormalizedPositionList();

            }

            return data;
        }


        virtual public void SetData(DataModel.FloorMapItem data)
        {
            Enum.TryParse<DataModel.FloorMapItemType>(data.type, out sequencingItemType);
            Name = data.name;
            Width = data.width;
            Height = data.height;
            YPos = data.ypos;

            HasWindow = data.hasWindow;
            WindowFrameSize = data.windowFrameSize;
            WindowSizeH = data.windowSizeH;
            WindowSizeV = data.windowSizeV;
            WindowSubDivH = data.windowSubDivH;
            WindowSubDivV = data.windowSubDivV;
        }

    }
}
