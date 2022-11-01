using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static Exoa.Designer.DataModel;
using static Exoa.Designer.ProceduralSpace;

namespace Exoa.Designer
{
    public class FloorController : MonoBehaviour
    {
        public GameObject proceduralRoomPrefab;
        public GameObject proceduralOutsidePrefab;
        public GameObject proceduralOpeningPrefab;
        public ProceduralBuilding building;
        public ProceduralRoofTop roof;
        public BuildingMaterialController buildingMaterialController;
        public Transform roomsContainer;
        public Transform openingsContainer;
        public Transform modulesContainer;
        private List<ProceduralSpace> allRoomSpaces = new List<ProceduralSpace>();
        private List<ProceduralOpening> allOpenings = new List<ProceduralOpening>();
        private List<ProceduralSpace> allOutsideSpaces = new List<ProceduralSpace>();
        private DataModel.FloorMapLevel levelData;

        /*
        public string FileName
        {
#if INTERIOR_MODULE
            get
            {
                return InteriorDesigner.instance.FloorMapFileName;
            }

            set
            {
                InteriorDesigner.instance.FloorMapFileName = value;
            }
#else
            set { }
            get { return null; }
#endif
        }*/

        public FloorMapLevel LevelData { get => levelData; set => levelData = value; }

        public void Clear()
        {
            //print("Clear");
            allOpenings = new List<ProceduralOpening>();
            allRoomSpaces = new List<ProceduralSpace>();
            allOutsideSpaces = new List<ProceduralSpace>();

            roomsContainer.ClearChildren();
            openingsContainer.ClearChildren();
            if (building != null)
            {
                building.Clear(clearScene: true);
            }
            if (roof != null)
            {
                roof.Clear(clearScene: true);
            }
        }



        private List<Vector3> GetPointsWorldPositionList(List<Vector3> normalizedPositions)
        {
            Grid grid = GetGrid();
            List<Vector3> list = normalizedPositions.Select(s => grid.GetWorldPosition(s)).ToList();
            return list;
        }


        public ProceduralOpening BuildOpening(Vector3 normPos, Vector3 direction, GenericOpening go)
        {

            GameObject inst = Instantiate(proceduralOpeningPrefab, openingsContainer);

            ProceduralOpening proceduralOpening = inst.GetComponent<ProceduralOpening>();
            Vector3 p = go.worldPos + direction * go.width * .5f;
            p.y = 0;
            inst.transform.localPosition = p;
            inst.transform.localRotation = Quaternion.Euler(0, 90, 0) * Quaternion.LookRotation(direction, Vector3.up);
            proceduralOpening.Generate(go, AppController.Instance.wallsHeight, AppController.Instance.windowsThickness);
            return proceduralOpening;
        }



        public ProceduralOutside BuildOusideSpace(FloorMapItem outsideSpace)
        {
            HDLogger.Log("Build Outside space", HDLogger.LogCategory.Floormap);

            List<Vector3> worldPosList = GetPointsWorldPositionList(outsideSpace.normalizedPositions);

            if (worldPosList.Count < 3 || MathUtils.PointsAreInLine(worldPosList))
                return null;

            GameObject inst = Instantiate(proceduralOutsidePrefab, roomsContainer);

            ProceduralOutside proc = inst.GetComponent<ProceduralOutside>();
            proc.SpaceVertexColor = Color.white;
            proc.addMeshColliders = true;
            proc.Generate(worldPosList);
            return proc;
        }

        public ProceduralRoom BuildRoom(FloorMapItem room, List<ProceduralRoom.GenericOpening> openings)
        {
            HDLogger.Log("Build Room", HDLogger.LogCategory.Floormap);

            List<Vector3> worldPosList = GetPointsWorldPositionList(room.normalizedPositions);

            if (worldPosList.Count < 3 || MathUtils.PointsAreInLine(worldPosList))
                return null;

            GameObject inst = Instantiate(proceduralRoomPrefab, roomsContainer);

            ProceduralRoom proc = inst.GetComponent<ProceduralRoom>();
            proc.Openings = openings;
            proc.SpaceVertexColor = Color.white;
            proc.addMeshColliders = true;
            proc.Generate(worldPosList);
            return proc;
        }

        public void BuildFloor(DataModel.FloorMapLevel floorData, bool renderRoof)
        {
            if (floorData.spaces == null || floorData.spaces.Count == 0)
            {
                HDLogger.LogWarning("[FloorController] BuildFloor Error:No spaces", HDLogger.LogCategory.Building);
                return;
            }
            levelData = floorData;
            HDLogger.Log("[FloorController] BuildFloor spaces:" + floorData.spaces.Count + " renderRoof:" + renderRoof, HDLogger.LogCategory.Building);

            List<FloorMapItem> openingSpaces = floorData.GetAllOpeningSpaces();
            List<FloorMapItem> roomSpaces = floorData.GetRoomSpaces();
            List<FloorMapItem> outsideSpaces = floorData.GetOutsideSpaces();

            List<ProceduralRoom.GenericOpening> openings = new List<ProceduralRoom.GenericOpening>();

            foreach (FloorMapItem openingItem in openingSpaces)
            {
                ProceduralRoom.GenericOpening.OpeningType oType = ProceduralRoom.GenericOpening.OpeningType.Opening;
                Enum.TryParse<ProceduralRoom.GenericOpening.OpeningType>(openingItem.type, out oType);

                List<Vector3> pointList = GetPointsWorldPositionList(openingItem.normalizedPositions);
                for (int j = 0; j < pointList.Count; j++)
                {
                    //print("Opening " + j + ":" + pointList[j]);
                    ProceduralRoom.GenericOpening go = new ProceduralRoom.GenericOpening(oType, pointList[j], openingItem);
                    openings.Add(go);
                    ProceduralOpening pr = null;
                    // only construct the opening if we have the direction data (plugin latest version)
                    if (openingItem.directions != null)
                        pr = BuildOpening(openingItem.normalizedPositions[j], openingItem.directions[j], go);

                    if (pr != null)
                        allOpenings.Add(pr);
                }
            }

            foreach (FloorMapItem outsideItem in outsideSpaces)
            {
                ProceduralOutside po = BuildOusideSpace(outsideItem);
                if (po != null) allOutsideSpaces.Add(po);
            }
            foreach (FloorMapItem roomItem in roomSpaces)
            {
                ProceduralRoom pr = BuildRoom(roomItem, openings);
                if (pr != null) allRoomSpaces.Add(pr);
            }

            if (building != null)
            {
                building.Openings = openings;
                building.Generate(allRoomSpaces);

                if (roof != null && building.BuildingContoursOuter != null)
                {
                    roof.GenerateFromWalls(building.BuildingContoursOuter,
                        building.RoomsContours,
                        !renderRoof);

                    roof.Render();
                }
            }
        }

        public Grid GetGrid()
        {
            return GameObject.FindObjectOfType<Grid>();
        }

        public List<SpaceMaterialController> GetSpaceMaterialControllers()
        {
            List<SpaceMaterialController> list = new List<SpaceMaterialController>();
            list.AddRange(allRoomSpaces.Select(s => s.GetComponent<SpaceMaterialController>()));
            list.AddRange(allOutsideSpaces.Select(s => s.GetComponent<SpaceMaterialController>()));
            HDLogger.Log("GetRoomMaterialControllers list " + list.Count, HDLogger.LogCategory.Interior);
            return list;
        }

        internal BuildingMaterialController GetBuildingMaterialController()
        {
            HDLogger.Log("GetBuildingMaterialController:" + buildingMaterialController, HDLogger.LogCategory.Building);
            return buildingMaterialController;
        }
    }
}
