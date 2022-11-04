using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralSpace : MonoBehaviour
    {
        [System.Serializable]
        public struct GenericOpening
        {
            public enum OpeningType { Door, Window, Opening };
            public OpeningType type;

            public float width;
            public float height;

            public float xPos;
            public float yPos;
            public Vector3 worldPos;
            public Vector3 direction;


            public bool hasWindow;
            public float windowFrameSize;
            public float windowSizeH;
            public float windowSizeV;
            public int windowSubDivH;
            public int windowSubDivV;

#if FLOORMAP_MODULE
            public GenericOpening(OpeningType type, Vector3 worldPos, UIBaseItem data) : this()
            {
                this.type = type;
                this.worldPos = worldPos;
                this.width = data.Width;
                this.height = data.Height;
                this.yPos = data.YPos;
                this.hasWindow = data.HasWindow;
                this.windowFrameSize = data.WindowFrameSize;
                this.windowSizeH = data.WindowSizeH;
                this.windowSizeV = data.WindowSizeV;
                this.windowSubDivH = data.WindowSubDivH;
                this.windowSubDivV = data.WindowSubDivV;
            }
#endif

            public GenericOpening(OpeningType type, Vector3 worldPos, DataModel.FloorMapItem data) : this()
            {
                this.type = type;
                this.worldPos = worldPos;
                this.width = data.width;
                this.height = data.height;
                this.yPos = data.ypos;
                this.hasWindow = data.hasWindow;
                this.windowFrameSize = data.windowFrameSize;
                this.windowSizeH = data.windowSizeH;
                this.windowSizeV = data.windowSizeV;
                this.windowSubDivH = data.windowSubDivH;
                this.windowSubDivV = data.windowSubDivV;
            }
        }
        public Transform pointsContainer;
        protected List<Vector3> normalRoomPoints; // points on drawn path, no offset
        protected List<Vector3> innerRoomPoints; // with inner thickness

        public float triangulationThreshold = 1;
        public float triangulationAngle = 20;

        protected Color roomVertexColor = Color.white;
        protected List<GenericOpening> openings;
        public bool addMeshColliders;

        public Color SpaceVertexColor
        {
            get
            {
                return roomVertexColor;
            }

            set
            {
                roomVertexColor = value;
            }
        }

        public List<GenericOpening> Openings
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

        public List<Vector3> Points
        {
            get
            {
                return normalRoomPoints;
            }

            set
            {
                normalRoomPoints = value;
            }
        }

        public List<Vector3> InnerRoomPoints
        {
            get
            {
                return innerRoomPoints;
            }

            set
            {
                innerRoomPoints = value;
            }
        }


        virtual public void GenerateEmpty()
        {
            // TO BE EXTENDED
        }

        virtual public void Generate()
        {
            normalRoomPoints = new List<Vector3>();
            for (int i = 0; i < pointsContainer.childCount; i++)
                normalRoomPoints.Add(pointsContainer.GetChild(i).position);

            Generate(normalRoomPoints);
        }


        virtual public void Generate(List<Vector3> worldPosList)
        {
            normalRoomPoints = MathUtils.GetClockwise(worldPosList, MathUtils.PlanType.XZ);
            // TO BE EXTENDED
        }


        public static List<GenericOpening> GetOpeningsBetweenPoints(List<GenericOpening> openings,
                               Vector3 p0, Vector3 p1, Vector3 p0Outer, Vector3 p1Outer)
        {
            List<GenericOpening> list = new List<GenericOpening>();
            if (openings == null)
                return list;
            for (int i = 0; i < openings.Count; i++)
            {
                float distance = MathUtils.DistancePointLine(openings[i].worldPos, p0, p1, out float angle);
                //Debug.Log("GetOpeningsBetweenPoints distance:" + distance);
                if (distance < .2f)
                {
                    Vector3 openingPosOnOuter = MathUtils.ProjectPointLine(openings[i].worldPos, p0Outer, p1Outer);

                    GenericOpening go = openings[i];
                    go.xPos = Vector3.Distance(openingPosOnOuter, p0Outer);
                    list.Add(go);
                }
            }
            //print("GetGenericOpeningsBetweenPoints count:" + list.Count);
            return list;
        }

    }
}
