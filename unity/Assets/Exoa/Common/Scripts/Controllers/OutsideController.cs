using Exoa.Events;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class OutsideController : SpaceController, IObjectDrawer
    {
#if FLOORMAP_MODULE
        public ProceduralOutside proceduralOutside
        {
            get
            {
                return proceduralSpace as ProceduralOutside;
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
                proceduralSpace = GetComponent<ProceduralOutside>();

            if (worldPosList.Count < 3 || MathUtils.PointsAreInLine(worldPosList))
            {
                proceduralSpace.GenerateEmpty();
                return;
            }

            //print("Room Rebuild");

            proceduralSpace.SpaceVertexColor = DrawingColor;
            proceduralSpace.Generate(worldPosList);

        }
#endif
    }
}
