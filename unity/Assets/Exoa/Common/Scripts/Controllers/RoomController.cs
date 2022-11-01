using Exoa.Events;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{

    public class RoomController : SpaceController, IObjectDrawer
    {
#if FLOORMAP_MODULE
        public ProceduralRoom proceduralRoom
        {
            get
            {
                return proceduralSpace as ProceduralRoom;
            }

            set
            {
                proceduralSpace = value;
            }
        }


        override protected void Rebuild(bool sendRepositionOpeningsEvent = false)
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


            //print("RebuildMesh sendRepositionOpeningsEvent:" + sendRepositionOpeningsEvent + " roomColor:" + roomCOlor);
            List<Vector3> worldPosList = cpc.GetPointsWorldPositionList();

            if (proceduralSpace == null)
                proceduralSpace = GetComponent<ProceduralRoom>();

            if (worldPosList.Count < 3 || MathUtils.PointsAreInLine(worldPosList))
            {
                proceduralSpace.GenerateEmpty();
                return;
            }
            //print("Room Rebuild");

            // Getting all windows
            List<ProceduralRoom.GenericOpening> openings = new List<ProceduralRoom.GenericOpening>();
            List<Vector3> pointList = null;
            UIBaseItem[] items = GameObject.FindObjectsOfType<UIBaseItem>();

            for (int i = 0; i < items.Length; i++)
            {
                ProceduralRoom.GenericOpening.OpeningType oType = ProceduralRoom.GenericOpening.OpeningType.Opening;
                Enum.TryParse<ProceduralRoom.GenericOpening.OpeningType>(items[i].sequencingItemType.ToString(), out oType);

                if (items[i].sequencingItemType == DataModel.FloorMapItemType.Door ||
                   items[i].sequencingItemType == DataModel.FloorMapItemType.Window ||
                   items[i].sequencingItemType == DataModel.FloorMapItemType.Opening)
                {
                    pointList = items[i].cpc.GetPointsWorldPositionList();
                    for (int j = 0; j < pointList.Count; j++)
                    {
                        openings.Add(new ProceduralRoom.GenericOpening(oType, pointList[j], items[i]));
                    }

                }
            }

            proceduralSpace.Openings = openings;
            proceduralSpace.SpaceVertexColor = DrawingColor;
            proceduralSpace.Generate(worldPosList);

            GameEditorEvents.OnRequestRebuildBuilding?.Invoke();
        }
#endif
    }
}
