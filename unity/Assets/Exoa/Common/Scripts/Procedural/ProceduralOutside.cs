using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralOutside : ProceduralSpace
    {

        public MeshFilter floor;

        override public void GenerateEmpty()
        {
            floor.mesh = null;
        }

        override public void Generate(List<Vector3> worldPosList)
        {
            normalRoomPoints = MathUtils.GetClockwise(worldPosList, MathUtils.PlanType.XZ);
            GenerateFloor();
            AddMeshColliders();
        }


        protected void AddMeshColliders()
        {
            if (addMeshColliders)
            {
                if (floor != null && floor.GetComponent<MeshCollider>() == null)
                    floor.gameObject.AddComponent<MeshCollider>();

            }
        }

        protected void GenerateFloor()
        {
            //print("GenerateFloor points:" + normalRoomPoints.Dump());
            for (int i = 0; i < normalRoomPoints.Count; i++)
                normalRoomPoints[i] = normalRoomPoints[i].SetY(0);
            //print("GenerateFloor points:" + normalRoomPoints.Dump());

            Tessellator tessellator = new Tessellator();
            tessellator.AddContour(normalRoomPoints);
            tessellator.Tessellate(normal: Vector3.up);
            MeshDraft md = tessellator.ToMeshDraft();
            md.uv = MathUtils.GenerateUVs(md.vertices, AppController.Instance.wallsHeight,
                AppController.Instance.wallsHeight, MathUtils.PlanType.XZ);
            md.Paint(SpaceVertexColor);
            floor.mesh = md.ToMesh();
        }

    }
}
