using Exoa.Events;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class OpeningController : MonoBehaviour, IObjectDrawer
    {
        private ControlPointsController cpc;
        private UIBaseItem ui;
        private DataModel.FloorMapItem seq;
        private Color doorColor;

        private float lastRebuild;
        public float delayBetweenRebuilds = .1f;
        private bool queuedRebuild;
        private bool queuedSendRepositionOpeningsEvent;
        public GameObject openingPrefab;

        public ControlPointsController Cpc
        {
            get
            {
                return cpc;
            }

            set
            {
                cpc = value;
            }
        }

        public GameObject GO
        {
            get
            {
                return gameObject;
            }
        }

        public UIBaseItem UI
        {
            get
            {
                return ui;
            }

            set
            {
                ui = value as UIBaseItem;
            }
        }

        public Color DrawingColor
        {
            get
            {
                return doorColor;
            }

            set
            {
                doorColor = value;
            }
        }

        void OnDestroy()
        {
            if (cpc != null) cpc.OnPathChanged -= OnPathChanged;
            if (cpc != null) cpc.OnControlPointsChanged -= OnControlPointsChanged;
            if (cpc != null) cpc.OnRequestDrawMode -= OnRequestDrawMode;
            if (ui != null) ui.OnChangeSettings -= OnChangeSettings;
            GameEditorEvents.OnRequestRepositionOpenings -= OnRequestRepositionOpenings;
            GameEditorEvents.OnRequestRebuildAllOpenings -= OnRequestRebuildAllOpenings;
        }

        public void Init()
        {
            if (cpc != null)
            {
                cpc.drawPath = false;
                cpc.drawWidth = true;
                cpc.Width = ui.Width;
                cpc.snapToGrid = true;
                cpc.snapToPathLines = true;
                cpc.OnPathChanged += OnPathChanged;
                cpc.OnControlPointsChanged += OnControlPointsChanged;
                cpc.OnRequestDrawMode += OnRequestDrawMode;
            }
            //if (ui != null) 
            ui.OnChangeSettings += OnChangeSettings;
            //print("Listen to OnRequestRepositionOpenings");
            GameEditorEvents.OnRequestRepositionOpenings += OnRequestRepositionOpenings;
            GameEditorEvents.OnRequestRebuildAllOpenings += OnRequestRebuildAllOpenings;
        }

        private void OnRequestRebuildAllOpenings()
        {
            Rebuild(false);
        }
        private void OnRequestRepositionOpenings()
        {
            //print("OnRequestRepositionOpenings ReSnapControlPoints");
            cpc.ReSnapControlPoints();
            Rebuild(false);
        }

        public void Build(DataModel.FloorMapItem s)
        {
            seq = s;
            Rebuild();
        }

        private void OnRequestDrawMode(bool request)
        {
            if (ui != null) ui.ToggleDrawMode(request, true, true);
        }

        private void OnControlPointsChanged()
        {
            //print("OnControlPointsChanged");
            Rebuild();

        }

        private void OnPathChanged()
        {
            //print("Opening OnPathChanged");
            Rebuild();
        }

        public void OnChangeSettings(DataModel.FloorMapItem s, DataModel.FloorMapItemType type)
        {
            seq = s;
            Rebuild();
        }

        void Update()
        {
            if (queuedRebuild && lastRebuild < Time.time - delayBetweenRebuilds)
            {
                Rebuild(queuedSendRepositionOpeningsEvent);
            }
        }

        private void Rebuild(bool sendRebuildRoomsEvent = true)
        {
            HDLogger.Log("Rebuild Opening sendRebuildRoomsEvent:" + sendRebuildRoomsEvent, HDLogger.LogCategory.Floormap);
            cpc.Width = ui.Width;


            if (lastRebuild > Time.time - delayBetweenRebuilds)
            {
                queuedRebuild = true;
                queuedSendRepositionOpeningsEvent = sendRebuildRoomsEvent;
                return;
            }


            lastRebuild = Time.time;
            queuedRebuild = false;
            queuedSendRepositionOpeningsEvent = false;

            //print("RebuildMesh sendRepositionOpeningsEvent:" + sendRepositionOpeningsEvent + " roomColor:" + roomCOlor);
            List<Vector3> worldPosList = cpc.GetPointsWorldPositionList();
            List<Vector3> directions = cpc.GetPointsDirectionList();
            if (transform.childCount > worldPosList.Count)
            {
                transform.ClearChildren();
            }
            GameObject inst = null;
            ProceduralOpening po = null;
            for (int j = 0; j < worldPosList.Count; j++)
            {
                if (transform.childCount <= j)
                {
                    inst = Instantiate(openingPrefab);
                    inst.transform.SetParent(transform);
                }
                else
                {
                    inst = transform.GetChild(j).gameObject;
                }
                po = inst.GetComponent<ProceduralOpening>();
                inst.transform.position = worldPosList[j] + directions[j] * ui.Width * .5f;
                inst.transform.rotation = Quaternion.Euler(0, 90, 0);
                if (directions[j] != Vector3.zero)
                    inst.transform.rotation *= Quaternion.LookRotation(directions[j], Vector3.up);

                DataModel.FloorMapItemType type = ui.sequencingItemType;

                float thickness = type == DataModel.FloorMapItemType.Door ? AppController.Instance.doorsThickness : AppController.Instance.windowsThickness;
                po.Generate(type, ui.Width, ui.Height, ui.YPos,
                    ui.HasWindow, ui.WindowFrameSize, ui.WindowSizeH, ui.WindowSizeV,
                    ui.WindowSubDivH, ui.WindowSubDivV,
                    AppController.Instance.wallsHeight, thickness);

            }

            if (sendRebuildRoomsEvent)
                GameEditorEvents.OnRequestRebuildAllRooms?.Invoke();

        }
    }
}
