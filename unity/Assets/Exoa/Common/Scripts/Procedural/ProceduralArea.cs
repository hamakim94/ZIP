using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralArea : MonoBehaviour
    {
        public enum Type { Rectangle, Cube };
        public Type type;
        public float width = 50f;
        public float depth = 50f;
        public float height = 3f;
        public float thickness = .2f;
        public MeshFilter wallsMf;

        void OnDestroy()
        {

        }

        void Start()
        {

        }



        public void Generate()
        {
            if (type == Type.Cube)
            {
                MeshDraft cubeExt = MeshDraft.Cube(width + thickness, true);
                MeshDraft cubeInt = MeshDraft.Cube(width, true);
                cubeInt.FlipFaces();
                MeshDraft walls = new MeshDraft();
                walls.Add(cubeExt);
                walls.Add(cubeInt);
                wallsMf.mesh = walls.ToMesh();
            }
            else if (type == Type.Rectangle)
            {
                List<Vector3> points = new List<Vector3>();
                points.Add(new Vector3(-width * .5f, 0, -depth * .5f));
                points.Add(new Vector3(-width * .5f, 0, depth * .5f));
                points.Add(new Vector3(width * .5f, 0, depth * .5f));
                points.Add(new Vector3(width * .5f, 0, -depth * .5f));


                List<List<Vector2>> pointsInput = new List<List<Vector2>>();
                pointsInput.Add(MathUtils.ConvertVector3To2(points, MathUtils.PlanType.XZ));
                List<List<Vector2>> output1 = new List<List<Vector2>>();
                List<List<Vector2>> output2 = new List<List<Vector2>>();


                PathOffsetter offsetter = new PathOffsetter();
                offsetter.AddPaths(pointsInput);
                offsetter.Offset(ref output1, 0);
                offsetter.Offset(ref output2, thickness);

                List<Vector3> points1 = MathUtils.ConvertVector2To3(output1[0], MathUtils.PlanType.XZ);
                List<Vector3> points2 = MathUtils.ConvertVector2To3(output2[0], MathUtils.PlanType.XZ);

                MeshDraft walls = new MeshDraft();
                walls.Add(GenerateWalls(points1, false));
                walls.Add(GenerateWalls(points2, true));
                walls.Add(GenerateCeiling(output1[0], output2[0]));

                wallsMf.mesh = walls.ToMesh();
            }
        }

        private MeshDraft GenerateCeiling(List<Vector2> points1, List<Vector2> points2)
        {
            List<List<Vector2>> output = new List<List<Vector2>>();

            var clipper = new PathClipper();
            clipper.AddPath(points2, PolyType.ptSubject);
            clipper.AddPath(points1, PolyType.ptClip);
            clipper.Clip(ClipType.ctDifference, ref output);


            Tessellator tessellator = new Tessellator();
            for (int i = 0; i < output.Count; i++)
                tessellator.AddContour(output[i]);
            tessellator.Tessellate(normal: Vector3.back);
            MeshDraft md = tessellator.ToMeshDraft();
            md.Rotate(Quaternion.Euler(90, 0, 0));
            md.Move(Vector3.up * height);
            return md;
        }

        private MeshDraft GenerateWalls(List<Vector3> points, bool inward)
        {
            MeshDraft md = new MeshDraft { name = "Walls" };

            Vector3 p0, p1;
            for (int i = 0; i < points.Count; i++)
            {
                p0 = points[i];
                p1 = points[(i + 1) % points.Count];
                MeshDraft wall = ProceduralRoom.CreateWall(p0, p1, height, inward);
                md.Add(wall);
            }
            //md = md.FlipFaces();
            return md;

        }
    }
}
