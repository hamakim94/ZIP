using Exoa.Events;
using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralBuilding : MonoBehaviour
    {
        private List<ProceduralSpace> allRooms;

        public LayerMask layerMask;
        public MeshFilter wallsMf;
        public MeshCollider wallsCol;
        private List<ProceduralRoom.GenericOpening> openings;
        private List<List<Vector2>> roomsContours;
        private List<List<Vector2>> roomsContoursInner;
        private List<List<Vector2>> buildingNormalContour;
        private List<List<Vector2>> buildingContoursOuter;
        private AppController appController;

        public List<ProceduralRoom.GenericOpening> Openings
        {
            get
            {
                return openings;
            }

            set
            {
                openings = value;
            }
        }


        public List<List<Vector2>> RoomsContoursInner
        {
            get
            {
                return roomsContoursInner;
            }

            set
            {
                roomsContoursInner = value;
            }
        }

        public List<List<Vector2>> BuildingContoursOuter { get => buildingContoursOuter; set => buildingContoursOuter = value; }
        public List<List<Vector2>> BuildingContoursOuter1 { get => buildingContoursOuter; set => buildingContoursOuter = value; }
        public List<List<Vector2>> RoomsContours { get => roomsContours; set => roomsContours = value; }

        public void Clear(bool clearFloorsUI = false, bool clearFloorMapUI = false, bool clearScene = false)
        {
            if (!clearScene) return;

            //print("Ext Wall Clear");
            wallsMf.mesh = null;
            roomsContoursInner = null;
            buildingNormalContour = null;
            buildingContoursOuter = null;
            allRooms = new List<ProceduralSpace>();
            //wallsCol.mesh = null;
        }
        void OnDestroy()
        {
            GameEditorEvents.OnRequestClearAll -= Clear;
        }
        void Awake()
        {
            appController = GetComponentInParent<AppController>();
            if (appController == null)
            {
                appController = GameObject.FindObjectOfType<AppController>();
            }
            if (appController.currentState != AppController.States.PlayMode)
            {
                GameEditorEvents.OnRequestClearAll += Clear;
            }
        }


        public void Generate(List<ProceduralSpace> allRooms)
        {
            this.allRooms = allRooms;
            GenerateMergedFloor();
            GenerateWalls();
            GenerateCollider();
        }

        public void Generate()
        {
            //print("Building Generate");
            GenerateMergedFloor();
            GenerateWalls();
            GenerateCollider();
        }

        private void GenerateCollider()
        {
            if (wallsCol != null)
                wallsCol.sharedMesh = wallsMf.sharedMesh;
        }

        private void GenerateMergedFloor()
        {
            if (allRooms == null || allRooms.Count == 0 || allRooms[0].Points == null || allRooms[0].Points.Count == 0)
                return;

            //print("Ext Wall GenerateMergedFloor");

            MeshDraft md = new MeshDraft() { name = "FloorMerged" };

            List<List<Vector2>> outputRoomInnerContours = new List<List<Vector2>>();
            List<List<Vector2>> outputBuildingOutsideContour = new List<List<Vector2>>();
            List<List<Vector2>> outputRoomNormalContours = new List<List<Vector2>>();
            List<List<Vector2>> outputRoomNormalContours2 = new List<List<Vector2>>();
            roomsContours = new List<List<Vector2>>();

            List<Vector2> subjectRoom = MathUtils.ConvertVector3To2(allRooms[0].InnerRoomPoints, MathUtils.PlanType.XZ);
            List<Vector2> subjectBuilding = MathUtils.ConvertVector3To2(allRooms[0].Points, MathUtils.PlanType.XZ);

            PathClipper roomClipper = new PathClipper();
            roomClipper.AddPath(subjectRoom, PolyType.ptSubject);

            PathClipper buildingClipper = new PathClipper();
            buildingClipper.AddPath(subjectBuilding, PolyType.ptSubject);
            roomsContours.Add(subjectBuilding);

            for (int i = 1; i < allRooms.Count; i++)
            {
                if (allRooms[i].InnerRoomPoints != null)
                {
                    subjectRoom = MathUtils.ConvertVector3To2(allRooms[i].InnerRoomPoints, MathUtils.PlanType.XZ);
                    roomClipper.AddPath(subjectRoom, PolyType.ptClip);

                }
                if (allRooms[i].Points != null)
                {
                    subjectBuilding = MathUtils.ConvertVector3To2(allRooms[i].Points, MathUtils.PlanType.XZ);
                    buildingClipper.AddPath(subjectBuilding, PolyType.ptClip);
                    roomsContours.Add(subjectBuilding);
                }
            }

            roomClipper.Clip(ClipType.ctUnion, ref outputRoomInnerContours);
            buildingClipper.Clip(ClipType.ctUnion, ref outputRoomNormalContours);

            var offsetter = new PathOffsetter();
            offsetter.AddPaths(outputRoomNormalContours);
            offsetter.Offset(ref outputRoomNormalContours2, 0);

            for (int i = 0; i < outputRoomNormalContours2.Count; i++)
            {
                List<List<Vector2>> temp = new List<List<Vector2>>();
                offsetter = new PathOffsetter(10);
                offsetter.AddPath(outputRoomNormalContours2[i]);
                offsetter.Offset(ref temp, AppController.Instance.exteriorWallThickness);
                outputBuildingOutsideContour.Add(temp[0]);
            }

            roomsContoursInner = outputRoomInnerContours;
            buildingContoursOuter = outputBuildingOutsideContour;
            buildingNormalContour = outputRoomNormalContours2;

            //print("allRooms:" + allRooms.Count);
            //print("roomsContoursInner:" + roomsContoursInner.Count);
            //print("buildingContoursOuter:" + buildingContoursOuter.Count);
            //print("buildingNormalContour:" + buildingNormalContour.Count);
        }

        public void DisableCollider()
        {
            if (wallsCol != null)
            {
                //wallsCol.enabled = false;
                Destroy(wallsCol);
            }
        }

        public void GenerateWalls()
        {
            if (buildingContoursOuter == null)
                return;

            MeshDraft md = new MeshDraft { name = "Walls" };
            Vector3 extrusionNormal = Vector3.up;
            float extrusionSize = AppController.Instance.wallsHeight;

            Vector3 p0, p1, p0Outer, p1Outer;
            for (int j = 0; j < buildingContoursOuter.Count; j++)
            {
                List<Vector2> outerPoints = buildingContoursOuter[j];
                List<Vector2> normalPoints = buildingNormalContour[j];

                if (outerPoints.Count == normalPoints.Count)
                    for (int i = 0; i < outerPoints.Count; i++)
                    {
                        p0 = MathUtils.ConvertVector2To3(normalPoints[i], MathUtils.PlanType.XZ);
                        p1 = MathUtils.ConvertVector2To3(normalPoints[(i + 1) % normalPoints.Count], MathUtils.PlanType.XZ);

                        p0Outer = MathUtils.ConvertVector2To3(outerPoints[i], MathUtils.PlanType.XZ);
                        p1Outer = MathUtils.ConvertVector2To3(outerPoints[(i + 1) % outerPoints.Count], MathUtils.PlanType.XZ);

                        List<ProceduralRoom.GenericOpening> selectedOpenings = ProceduralRoom.GetOpeningsBetweenPoints(openings, p0, p1, p0Outer, p1Outer);

                        MeshDraft wall = ProceduralRoom.CreateWallWithOpening(p0Outer, p1Outer, AppController.Instance.wallsHeight, selectedOpenings, false, AppController.Instance.exteriorWallThickness);
                        md.Add(wall);
                        //HDLogger.Log("Building wall.mesh uvs:" + wall.ToMesh().uv.Dump(), HDLogger.LogCategory.Building);
                    }
            }
            Tessellator tessellator = new Tessellator();

            for (int i = 0; i < buildingContoursOuter.Count; i++)
                tessellator.AddContour(buildingContoursOuter[i]);
            for (int i = 0; i < roomsContoursInner.Count; i++)
                tessellator.AddContour(roomsContoursInner[i]);
            tessellator.Tessellate(normal: Vector3.back);

            MeshDraft wallsTopCap = tessellator.ToMeshDraft();
            wallsTopCap.uv = MathUtils.GenerateUVs(wallsTopCap.vertices, AppController.Instance.wallsHeight, AppController.Instance.wallsHeight, MathUtils.PlanType.XZ);

            wallsTopCap.Rotate(Quaternion.Euler(90, 0, 0));
            wallsTopCap.Move(Vector3.up * AppController.Instance.wallsHeight);
            md.Add(wallsTopCap);

            wallsMf.mesh = md.ToMesh();
            //HDLogger.Log("Building wallsMf.mesh uvs:" + wallsMf.mesh.uv.Dump(), HDLogger.LogCategory.Building);
        }


    }
}
