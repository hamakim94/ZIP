using Exoa.Events;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class BuildingController : MonoBehaviour
    {
#if FLOORMAP_MODULE
        private float lastRebuild;
        public float delayBetweenRebuilds = .1f;
        private bool queuedRebuild;
        private ProceduralBuilding proceduralBuilding;
        private ProceduralRoofTop proceduralRoof;

        void OnDestroy()
        {
            GameEditorEvents.OnRequestRebuildBuilding -= OnRequestRebuildBuilding;
        }

        public void Start()
        {
            //print("BuildingController Start");
            GameEditorEvents.OnRequestRebuildBuilding += OnRequestRebuildBuilding;
        }

        private void OnRequestRebuildBuilding()
        {
            //print("BuildingController OnRequestRebuildBuilding");
            Rebuild();
        }



        void Update()
        {
            if (queuedRebuild && lastRebuild < Time.time - delayBetweenRebuilds)
            {
                Rebuild();
            }
        }

        private void Rebuild()
        {
            if (lastRebuild > Time.time - delayBetweenRebuilds)
            {
                queuedRebuild = true;
                return;
            }


            lastRebuild = Time.time;
            queuedRebuild = false;

            HDLogger.Log("Rebuild Building", HDLogger.LogCategory.Building);
            ProceduralRoom[] rooms = GameObject.FindObjectsOfType<ProceduralRoom>();

            if (rooms.Length < 1)
                return;

            // Getting all windows
            List<ProceduralRoom.GenericOpening> openings = new List<ProceduralRoom.GenericOpening>();
            List<Vector3> pointList = null;
            UIBaseItem[] items = GameObject.FindObjectsOfType<UIBaseItem>();

            for (int i = 0; i < items.Length; i++)
            {
                ProceduralRoom.GenericOpening.OpeningType oType = ProceduralRoom.GenericOpening.OpeningType.Opening;
                Enum.TryParse<ProceduralRoom.GenericOpening.OpeningType>(items[i].sequencingItemType.ToString(), out oType);
                if (items[i].cpc == null)
                {
                    continue;
                }
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
            //print("BuildingController openings:" + openings);

            if (proceduralBuilding == null)
                proceduralBuilding = GetComponent<ProceduralBuilding>();
            proceduralBuilding.Openings = openings;
            proceduralBuilding.DisableCollider();
            proceduralBuilding.Generate(new List<ProceduralSpace>(rooms));

            if (proceduralRoof == null)
                proceduralRoof = GetComponent<ProceduralRoofTop>();
            //print("proceduralRoof:" + proceduralRoof);
            if (proceduralRoof != null && proceduralBuilding.BuildingContoursOuter != null)
            {
                proceduralRoof.ClearPreviousDrafts();
                proceduralRoof.GenerateFromWalls(proceduralBuilding.BuildingContoursOuter,
                    proceduralBuilding.RoomsContours, false);

                proceduralRoof.DisableCollider();
                proceduralRoof.Render();
            }

        }


#endif
    }
}
