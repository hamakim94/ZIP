using Exoa.Events;
using UnityEngine;

namespace Exoa.Designer
{
    public class SpaceController : MonoBehaviour, IObjectDrawer
    {

        public GameObject GO
        {
            get
            {
                return gameObject;
            }
        }

#if FLOORMAP_MODULE
        protected ControlPointsController cpc;
        protected UIBaseItem ui;
        protected DataModel.FloorMapItem seq;
        protected ProceduralSpace proceduralSpace;
        protected Color roomCOlor;

        protected float lastRebuild;
        public float delayBetweenRebuilds = .1f;
        protected bool queuedRebuild;
        protected bool queuedSendRepositionOpeningsEvent;

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
                return roomCOlor;
            }

            set
            {
                roomCOlor = value;
            }
        }

        virtual protected void OnDestroy()
        {
            if (cpc != null)
            {
                cpc.OnPathChanged -= OnPathChanged;
                cpc.OnControlPointsChanged -= OnControlPointsChanged;
                cpc.OnRequestDrawMode -= OnRequestDrawMode;
            }
            if (ui != null) ui.OnChangeSettings -= OnChangeSequenceSettings;
            GameEditorEvents.OnRequestRebuildAllRooms -= OnRequestRebuildAllRooms;
        }

        public void Init()
        {
            if (cpc != null)
            {
                cpc.drawPath = true;
                cpc.snapToGrid = true;
                cpc.snapToPathLines = false;
                cpc.OnPathChanged += OnPathChanged;
                cpc.OnControlPointsChanged += OnControlPointsChanged;
                cpc.OnRequestDrawMode += OnRequestDrawMode;
            }
            if (ui != null) ui.OnChangeSettings += OnChangeSequenceSettings;
            GameEditorEvents.OnRequestRebuildAllRooms += OnRequestRebuildAllRooms;
        }

        protected void OnRequestRebuildAllRooms()
        {
            Rebuild();
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

        protected void OnControlPointsChanged()
        {
            //print("OnControlPointsChanged");
            Rebuild();
        }

        protected void OnPathChanged()
        {
            //print("OnPathChanged");
            Rebuild(true);
        }

        public void OnChangeSequenceSettings(DataModel.FloorMapItem s, DataModel.FloorMapItemType type)
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

        virtual protected void Rebuild(bool sendRepositionOpeningsEvent = false)
        {
            if (lastRebuild > Time.time - delayBetweenRebuilds)
            {
                queuedRebuild = true;
                if (sendRepositionOpeningsEvent)
                    queuedSendRepositionOpeningsEvent = true;
                return;
            }

            if (sendRepositionOpeningsEvent)
            {
                //print("call OnRequestRepositionOpenings");
                GameEditorEvents.OnRequestRepositionOpenings?.Invoke();
            }

            lastRebuild = Time.time;
            queuedRebuild = false;
            queuedSendRepositionOpeningsEvent = false;

            // TO BE EXTENDED
        }
#endif
    }
}
