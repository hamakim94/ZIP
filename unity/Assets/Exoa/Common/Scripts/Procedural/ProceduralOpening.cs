using ProceduralToolkit;
using ProceduralToolkit.ClipperLib;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class ProceduralOpening : MonoBehaviour
    {
        public MeshFilter doorMf;
        public MeshFilter glassMf;
        public MeshFilter handleMf;

        public bool addMeshColliders;

        void Start()
        {

        }
        public DataModel.FloorMapItemType type;

        public float width = 1;
        public float height = 2.5f;
        public float wallsHeight = 3f;
        [Range(0, 2.5f)]
        public float yPos;
        [Range(0.01f, 0.1f)]
        public float thickness = .02f;
        [Range(0.01f, 0.1f)]
        public float handleRadius = 0.03f;
        [Range(0.0f, 1f)]
        public float handleX = 0.9f;
        [Range(0.0f, 1f)]
        public float handleY = 0.5f;
        [Range(4, 16)]
        public int handleSegments = 10;

        public bool hasWindow;
        public bool hasHandle;
        [Range(0, 10)]
        public int horizontalWindowSubs = 2;
        [Range(0, 10)]
        public int verticalWindowSubs = 2;
        [Range(0f, 1f)]
        public float horizontalWindowSize = 0.9f;
        [Range(0f, 1f)]
        public float verticalWindowSize = 0.5f;
        [Range(0.01f, 0.1f)]
        public float windowFrameSize = 0.01f;



        public void Generate()
        {
            Generate(type, width, height, yPos,
                hasWindow, windowFrameSize, horizontalWindowSize,
                verticalWindowSize, horizontalWindowSubs, verticalWindowSubs,
                wallsHeight, thickness);
        }

        public void Generate(ProceduralRoom.GenericOpening go, float wallsHeight, float thickness)
        {
            DataModel.FloorMapItemType t = DataModel.FloorMapItemType.Opening;
            if (go.type == ProceduralRoom.GenericOpening.OpeningType.Door) t = DataModel.FloorMapItemType.Door;
            if (go.type == ProceduralRoom.GenericOpening.OpeningType.Window) t = DataModel.FloorMapItemType.Window;
            Generate(t, go.width, go.height, go.yPos, go.hasWindow, go.windowFrameSize, go.windowSizeH, go.windowSizeV, go.windowSubDivH, go.windowSubDivV, wallsHeight, thickness);
        }
        public void Generate(DataModel.FloorMapItemType t, float width, float height, float yPos,
            bool hasWindow, float windowFrameSize, float windowSizeH, float windowSizeV,
            int windowSubDivH, int windowSubDivV,
            float wallsHeight, float thickness)
        {
            if (t != DataModel.FloorMapItemType.Door && t != DataModel.FloorMapItemType.Window)
                return;

            this.type = t;
            this.width = width;
            this.height = height;
            this.yPos = yPos;
            this.wallsHeight = wallsHeight;
            this.thickness = thickness;
            this.hasWindow = hasWindow;
            this.windowFrameSize = windowFrameSize;
            this.horizontalWindowSize = windowSizeH;
            this.verticalWindowSize = windowSizeV;
            this.horizontalWindowSubs = windowSubDivH;
            this.verticalWindowSubs = windowSubDivV;

            if (type == DataModel.FloorMapItemType.Door)
            {
                this.hasHandle = true;
                this.height = AppController.Instance.doorsHeight < AppController.Instance.wallsHeight ?
                    AppController.Instance.doorsHeight : AppController.Instance.wallsHeight;
            }
            if (type == DataModel.FloorMapItemType.Window)
            {
                this.verticalWindowSize = 1;
                this.horizontalWindowSize = 1;
                this.hasWindow = true;
                this.hasHandle = false;
            }

            //print("Generate DoorOrWindow width:" + width + " height:" + height + " ypos:" + yPos);
            GenerateMesh();
        }
        void GenerateMesh()
        {

            MeshDraft md = new MeshDraft() { name = "Opening" };
            MeshDraft glass = GenerateGlass(type, width, height);

            MeshDraft front = GenerateFace(type, width, height, yPos, true);
            MeshDraft back = GenerateFace(type, width, height, yPos, false);

            back.FlipTriangles();
            back.FlipNormals();
            back.Move(-Vector3.forward * thickness * .5f);
            front.Move(Vector3.forward * thickness * .5f);

            if (hasHandle)
            {
                MeshDraft handle = GenerateHandle(width, height);
                handle.Move(Vector3.forward * thickness * .5f);

                MeshDraft handle2 = GenerateHandle(width, height);
                handle2.Move(-Vector3.forward * (thickness * .5f + handleRadius * 2));
                handle.Add(handle2);
                handleMf.mesh = handle.ToMesh();
            }


            md.Add(front);
            md.Add(back);
            doorMf.mesh = md.ToMesh();
            glassMf.mesh = glass.ToMesh();

            AddMeshColliders();
        }

        private MeshDraft GenerateHandle(float width, float height)
        {
            MeshDraft md = MeshDraft.Sphere(handleRadius, handleSegments, handleSegments);

            md.Move(new Vector3(width * handleX, height * handleY, handleRadius));
            return md;
        }

        private void AddMeshColliders()
        {
            if (addMeshColliders)
            {
                if (doorMf != null && doorMf.GetComponent<MeshCollider>() == null)
                    doorMf.gameObject.AddComponent<MeshCollider>();
                if (glassMf != null && glassMf.GetComponent<MeshCollider>() == null)
                    glassMf.gameObject.AddComponent<MeshCollider>();
                if (handleMf != null && handleMf.GetComponent<MeshCollider>() == null)
                    handleMf.gameObject.AddComponent<MeshCollider>();


            }
        }



        public MeshDraft GenerateGlass(DataModel.FloorMapItemType t, float width, float height)
        {
            float yFromMiddle = yPos + wallsHeight * .5f;
            float holeMidSizeY = height * .5f;
            float holeTop = Mathf.Clamp(yFromMiddle + holeMidSizeY, 0, wallsHeight);
            float holeBottom = t == DataModel.FloorMapItemType.Door ? 0 : Mathf.Clamp(yFromMiddle - holeMidSizeY, 0, wallsHeight);

            MeshDraft md = MeshDraft.Quad(new Vector3(0, holeBottom, 0), Vector3.right * width, Vector3.up * height, true);
            md.FlipTriangles();
            md.FlipNormals();
            md.Add(MeshDraft.Quad(new Vector3(0, holeBottom, 0), Vector3.right * width, Vector3.up * height, true));
            return md;
        }
        public MeshDraft GenerateFace(DataModel.FloorMapItemType type, float width, float height, float yPos, bool sides)
        {

            MeshDraft md = new MeshDraft() { name = "Face" };

            float yFromMiddle = yPos + wallsHeight * .5f;
            float holeMidSizeY = height * .5f;
            float holeTop = Mathf.Clamp(yFromMiddle + holeMidSizeY, 0, wallsHeight);
            float holeBottom = Mathf.Clamp(yFromMiddle - holeMidSizeY, 0, wallsHeight);
            //print("GenerateMesh yFromMiddle:" + yFromMiddle + " holeMidSizeY:" + holeMidSizeY + " holeBottom:" + holeBottom + " holeTop:" + holeTop);

            if (type == DataModel.FloorMapItemType.Door)
            {
                holeBottom = 0;
                holeTop = height;
            }


            List<Vector2> subject = new List<Vector2>();

            subject.Add(new Vector2(0, holeBottom));
            subject.Add(new Vector2(0, holeTop));
            subject.Add(new Vector2(width, holeTop));
            subject.Add(new Vector2(width, holeBottom));

            List<List<Vector2>> output = new List<List<Vector2>>();

            var clipper = new PathClipper();
            clipper.AddPath(subject, PolyType.ptSubject);




            float mw = width * .5f;
            float mwf = width * .5f - windowFrameSize;
            float mh = height * .5f;
            float hf = height - windowFrameSize;
            float hf2 = height - windowFrameSize * .5f;
            float hf3 = height - windowFrameSize * 2f;
            float windowHeight = (hf3 * verticalWindowSize);
            float windowWidthHalf = mwf * horizontalWindowSize;
            float windowWidth = (width - windowFrameSize) * horizontalWindowSize;

            if (hasWindow)
            {
                List<Vector2> clip = new List<Vector2>();
                if (type == DataModel.FloorMapItemType.Window)
                {
                    clip.Add(new Vector2(mw - windowWidthHalf, holeBottom + windowFrameSize));
                    clip.Add(new Vector2(mw - windowWidthHalf, holeTop - windowFrameSize));
                    clip.Add(new Vector2(mw + windowWidthHalf, holeTop - windowFrameSize));
                    clip.Add(new Vector2(mw + windowWidthHalf, holeBottom + windowFrameSize));
                }
                else if (type == DataModel.FloorMapItemType.Door)
                {
                    clip.Add(new Vector2(mw - windowWidthHalf, hf - windowHeight));
                    clip.Add(new Vector2(mw - windowWidthHalf, hf));
                    clip.Add(new Vector2(mw + windowWidthHalf, hf));
                    clip.Add(new Vector2(mw + windowWidthHalf, hf - windowHeight));
                }

                clipper.AddPath(clip, PolyType.ptClip);
            }

            if (sides)
            {
                for (int i = 1; i < horizontalWindowSubs; i++)
                {
                    MeshDraft cy = MeshDraft.Cylinder(thickness * .5f, 7, height, true);
                    cy.Move(new Vector3(mw - windowWidthHalf + (i * (windowWidth) / horizontalWindowSubs) - windowFrameSize * .5f, holeBottom + height * .5f, -thickness * .5f));
                    md.Add(cy);

                }
                for (int j = 1; j < verticalWindowSubs; j++)
                {
                    MeshDraft cy = MeshDraft.Cylinder(thickness * .5f, 7, width, true);
                    cy.Rotate(Quaternion.Euler(0, 0, 90));
                    cy.Move(new Vector3(width * .5f, holeBottom + hf2 - j * windowHeight / verticalWindowSubs, -thickness * .5f));
                    //cy.Move(new Vector3(j * height / verticalWindowSubs, height * .5f, -thickness * .5f));
                    md.Add(cy);
                }
            }

            clipper.Clip(ClipType.ctDifference, ref output);

            if (output.Count == 0)
                return md;

            Tessellator tessellator = new Tessellator();
            for (int i = 0; i < output.Count; i++)
            {
                tessellator.AddContour(output[i]);

                if (sides)
                {
                    MeshDraft windowFrame = MathUtils.Extrude(output[i], -Vector3.forward, thickness, i != 0);
                    md.Add(windowFrame);
                }
            }
            tessellator.Tessellate(normal: Vector3.forward);

            MeshDraft wall = tessellator.ToMeshDraft();
            md.Add(wall);
            md.Paint(Color.white);


            return md;
        }

    }
}
