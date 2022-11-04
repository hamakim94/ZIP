using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralRoom : ProceduralSpace
    {
        private List<MeshFilter> separateWallsList;
        public MeshFilter walls;
        public MeshFilter floor;
        public MeshFilter ceiling;
        public MeshFilter roomBox;
        public ReflectionProbe reflectionProbe;
        public bool roomBoxFlipCollider;

        override public void GenerateEmpty()
        {
            walls.mesh = null;
            floor.mesh = null;
            ceiling.mesh = null;
            if (roomBox != null) roomBox.mesh = null;
            if (separateWallsList != null && separateWallsList.Count > 0)
            {
                foreach (MeshFilter filter in separateWallsList)
                {
                    if (filter != null)
                    {
                        filter.mesh = null;
                    }
                }
            }
        }

        override public void Generate(List<Vector3> worldPosList)
        {
            normalRoomPoints = MathUtils.GetClockwise(worldPosList, MathUtils.PlanType.XZ);
            GenerateWalls();
            GenerateFloor();
            GenerateCeiling();
            GenerateRoomBox();
            SetupReflection();
            AddMeshColliders();
        }

        private void SetupReflection()
        {
            if (reflectionProbe != null)
            {
                Bounds b = walls.GetComponent<MeshRenderer>().bounds;
                reflectionProbe.center = b.center;
                reflectionProbe.size = b.size;
            }
        }

        private void AddMeshColliders()
        {
            if (addMeshColliders)
            {
                if (walls != null && walls.GetComponent<MeshCollider>() == null)
                    walls.gameObject.AddComponent<MeshCollider>();
                if (floor != null && floor.GetComponent<MeshCollider>() == null)
                    floor.gameObject.AddComponent<MeshCollider>();
                if (ceiling != null && ceiling.GetComponent<MeshCollider>() == null)
                    ceiling.gameObject.AddComponent<MeshCollider>();
                if (separateWallsList != null && separateWallsList.Count > 0)
                {
                    foreach (MeshFilter filter in separateWallsList)
                    {
                        if (filter != null && filter.GetComponent<MeshCollider>() == null)
                        {
                            filter.gameObject.AddComponent<MeshCollider>();
                        }
                    }
                }
            }
        }

        private void GenerateRoomBox()
        {
            if (roomBox == null)
                return;

            MeshDraft md = new MeshDraft() { name = "RoomBox" };
            md.Add(new MeshDraft(walls.sharedMesh));
            md.Add(new MeshDraft(floor.sharedMesh));
            md.Add(new MeshDraft(ceiling.sharedMesh));
            if (roomBoxFlipCollider)
                md.FlipFaces();
            md.Paint(SpaceVertexColor);

            roomBox.mesh = md.ToMesh();
            roomBox.GetComponent<MeshCollider>().sharedMesh = roomBox.sharedMesh;
        }

        private void GenerateFloor()
        {
            Tessellator tessellator = new Tessellator();
            tessellator.AddContour(normalRoomPoints);
            tessellator.Tessellate(normal: Vector3.up);
            MeshDraft md = tessellator.ToMeshDraft();
            md.uv = MathUtils.GenerateUVs(md.vertices, AppController.Instance.wallsHeight, AppController.Instance.wallsHeight, MathUtils.PlanType.XZ);
            md.Paint(SpaceVertexColor);
            floor.mesh = md.ToMesh();
        }
        private void GenerateCeiling()
        {
            MeshDraft md = new MeshDraft(floor.sharedMesh) { name = "Ceiling" };
            md.Move(Vector3.up * AppController.Instance.wallsHeight);
            md.Paint(SpaceVertexColor);

            MeshCollider mc = ceiling.GetComponent<MeshCollider>();
            if (mc != null)
            {
                Mesh colliderMesh = md.ToMesh();
                mc.sharedMesh = colliderMesh;
            }

            Mesh renderMesh = md.FlipFaces().ToMesh();
            ceiling.mesh = renderMesh;

        }


        public void GenerateWalls()
        {
            //generate inner points;
            List<List<Vector2>> pointsInput = new List<List<Vector2>>();
            pointsInput.Add(MathUtils.ConvertVector3To2(normalRoomPoints, MathUtils.PlanType.XZ));
            List<List<Vector2>> output2 = new List<List<Vector2>>();
            List<List<Vector2>> output3 = new List<List<Vector2>>();
            PathOffsetter offsetter = new PathOffsetter();
            offsetter.AddPaths(pointsInput);
            offsetter.Offset(ref output3, 0);
            offsetter.Offset(ref output2, -AppController.Instance.interiorWallThickness);

            if (output2 == null || output2.Count == 0)
                return;

            innerRoomPoints = MathUtils.ConvertVector2To3(output2[0], MathUtils.PlanType.XZ);
            normalRoomPoints = MathUtils.ConvertVector2To3(output3[0], MathUtils.PlanType.XZ);


            MeshDraft md = new MeshDraft { name = "Walls" };
            Vector3 extrusionNormal = Vector3.up;
            float extrusionSize = AppController.Instance.wallsHeight;

            Vector3 p0Outer, p1Outer, p0, p1;

            InitSeparateWallsList(innerRoomPoints.Count);

            for (int i = 0; i < innerRoomPoints.Count; i++)
            {
                if (normalRoomPoints.Count <= (i + 1) % innerRoomPoints.Count)
                    break;

                p0Outer = innerRoomPoints[i];
                p1Outer = innerRoomPoints[(i + 1) % innerRoomPoints.Count];
                p0 = normalRoomPoints[i];
                p1 = normalRoomPoints[(i + 1) % innerRoomPoints.Count];
                List<GenericOpening> selectedOpenings = GetOpeningsBetweenPoints(openings, p0, p1, p0Outer, p1Outer);
                MeshDraft wall = CreateWallWithOpening(p0Outer, p1Outer, AppController.Instance.wallsHeight, selectedOpenings, true, AppController.Instance.interiorWallThickness);
                md.Paint(SpaceVertexColor);

                // Add the wall to a separate mesh filter
                GetOrCreateSeparateWallMeshFilter(i).mesh = wall.ToMesh();

                // Add the same wall to the merged room walls
                md.Add(wall);

            }
            //md = md.FlipFaces();
            md.Paint(SpaceVertexColor);

            // Merged wall has been replaced by separate walls
            //walls.mesh = md.ToMesh();

            // Deactivating the merged wall rendering, only separate walls are displayed
            //MeshRenderer wallsMr = walls.GetComponent<MeshRenderer>();
            //wallsMr.enabled = false;
        }

        public void InitSeparateWallsList(int count)
        {
            if (separateWallsList == null)
            {
                separateWallsList = new List<MeshFilter>();
            }
            if (separateWallsList.Count > count)
            {
                for (int i = count; i < separateWallsList.Count; i++)
                {
                    separateWallsList[i].mesh = null;
                }
            }
        }

        public MeshFilter GetOrCreateSeparateWallMeshFilter(int id)
        {

            if (separateWallsList == null)
            {
                separateWallsList = new List<MeshFilter>();
            }
            //Debug.Log("GetOrCreateSeparateWallMeshFilter id:" + id + " separateWallsList:" + separateWallsList.Count);


            if (separateWallsList.Count < id)
            {
                throw new System.Exception("You must first create wall id:" + separateWallsList.Count + " before trying to get/create id:" + id);
            }
            if (separateWallsList.Count == id)
            {
                GameObject wall = Instantiate(walls.gameObject);
                wall.transform.ClearChildren();
                wall.name = "Wall" + id;
                wall.transform.parent = walls.transform;
                MeshRenderer wallMr = wall.GetComponent<MeshRenderer>();
                wallMr.enabled = true;
                separateWallsList.Add(wall.GetComponent<MeshFilter>());
            }
            return separateWallsList[id];
        }

        public static MeshDraft CreateWallWithOpening(Vector3 p0, Vector3 p1, float height, List<GenericOpening> openings, bool inward, float thickness = .1f)
        {
            MeshDraft md = new MeshDraft() { name = "WallFull" };
            Vector3 vec = p1 - p0;
            float magnitude = vec.magnitude;

            List<Vector2> subject = new List<Vector2>();
            subject.Add(new Vector2(0, 0));
            subject.Add(new Vector2(0, height));
            subject.Add(new Vector2(magnitude, height));
            subject.Add(new Vector2(magnitude, 0));

            List<List<Vector2>> output = new List<List<Vector2>>();

            var clipper = new PathClipper();
            clipper.AddPath(subject, PolyType.ptSubject);

            for (int i = 0; i < openings.Count; i++)
            {
                float xPos = openings[i].xPos;
                float yPos = openings[i].yPos + height * .5f;
                //float yPos = height * .5f;
                //print("middle:" + middle);
                float holeMidSizeX = openings[i].width * .5f;
                float holeMidSizeY = openings[i].height * .5f;
                float holeLeft = Mathf.Clamp(xPos - holeMidSizeX, 0, magnitude);
                float holeRight = Mathf.Clamp(xPos + holeMidSizeX, 0, magnitude);
                float holeTop = Mathf.Clamp(yPos + holeMidSizeY, 0, height);
                float holeBottom = Mathf.Clamp(yPos - holeMidSizeY, 0, height);

                List<Vector2> clip = new List<Vector2>();

                if (openings[i].type == GenericOpening.OpeningType.Door)
                {
                    clip.Add(new Vector2(holeLeft, -0.001f));
                    clip.Add(new Vector2(holeLeft, AppController.Instance.doorsHeight));
                    clip.Add(new Vector2(holeRight, AppController.Instance.doorsHeight));
                    clip.Add(new Vector2(holeRight, -0.001f));
                }
                else if (openings[i].type == GenericOpening.OpeningType.Window || openings[i].type == GenericOpening.OpeningType.Opening)
                {
                    clip.Add(new Vector2(holeLeft, holeTop));
                    clip.Add(new Vector2(holeRight, holeTop));
                    clip.Add(new Vector2(holeRight, holeBottom));
                    clip.Add(new Vector2(holeLeft, holeBottom));
                }

                clipper.AddPath(clip, PolyType.ptClip);

                MeshDraft windowFrame = MathUtils.Extrude(clip, inward ? Vector3.back : Vector3.forward, thickness, inward);
                md.Add(windowFrame);
            }


            clipper.Clip(ClipType.ctDifference, ref output);

            if (output.Count == 0)
                return md;

            Tessellator tessellator = new Tessellator();
            for (int i = 0; i < output.Count; i++)
                tessellator.AddContour(output[i]);
            tessellator.Tessellate(normal: inward ? Vector3.forward : Vector3.back);

            MeshDraft wall = tessellator.ToMeshDraft();
            Mesh wallMesh = wall.ToMesh();

            md.Add(wall);
            md.uv = MathUtils.GenerateUVs(md.vertices, magnitude, height, MathUtils.PlanType.XY);
            md.Rotate(Quaternion.FromToRotation(Vector3.right, vec.normalized));
            md.Move(p0);

            return md;
        }


        public static MeshDraft CreateWall(Vector3 p0, Vector3 p1, float height, bool inward)
        {
            MeshDraft md = new MeshDraft() { name = "WallFull" };
            Vector3 vec = p1 - p0;
            float magnitude = vec.magnitude;

            List<Vector2> uvs = new List<Vector2>();
            uvs.Add(new Vector2(0, 0));
            uvs.Add(new Vector2(0, 1));
            uvs.Add(new Vector2(1, 1));
            uvs.Add(new Vector2(1, 0));

            List<Vector3> points = new List<Vector3>();
            points.Add(new Vector3(0, 0, 0));
            points.Add(new Vector3(0, height, 0));
            points.Add(new Vector3(magnitude, height, 0));
            points.Add(new Vector3(magnitude, 0, 0));

            if (!inward)
            {
                points.Reverse();
                uvs.Reverse();
            }

            md.AddQuad(points[0], points[1], points[2], points[3], true, uvs[0], uvs[1], uvs[2], uvs[3]);
            md.Rotate(Quaternion.FromToRotation(Vector3.right, vec.normalized));
            md.Move(p0);

            return md;
        }
    }
}
