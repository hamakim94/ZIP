using Exoa.Events;
using ProceduralToolkit;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using static Exoa.Designer.AppController;

namespace Exoa.Designer
{
    public class ProceduralRoofTop : MonoBehaviour
    {
        private AppController.RoofConfig config;
        private AppController appController;
        public MeshFilter roofMf;
        public MeshRenderer roofRd;
        private List<MeshDraft> drafts;
        public List<Vector2> polygon;

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

        public bool Generate(List<Vector2> polygon, AppController.RoofConfig config)
        {
            //print("Roof Generate polygon:" + polygon.Count);

            this.config = config;
            this.polygon = polygon;
            return Generate();
        }
        public void ClearPreviousDrafts()
        {
            drafts = new List<MeshDraft>();
        }
        public void Clear(bool clearFloorsUI = false, bool clearFloorMapUI = false, bool clearScene = false)
        {
            if (!clearScene) return;
            //print("Roof Clear");
            roofMf.mesh = null;
            ClearPreviousDrafts();
        }
        public bool Generate()
        {
            if (drafts == null) drafts = new List<MeshDraft>();

            IConstructible<MeshDraft> roofConstructible = Plan(polygon, config);
            try
            {
                MeshDraft draft = roofConstructible.Construct(Vector2.zero);
                if (config.type != RoofType.Flat)
                    draft.uv = MathUtils.GenerateUVs2(draft.vertices, draft.normals, 5, AppController.Instance.wallsHeight);

                //Debug.Log("Roof Generate:" + drafts.Count);

                drafts.Add(draft);
            }
            catch (Exception e)
            {
                Debug.LogWarning("Roof : " + e.Message);
                return false;
            }
            return true;
        }



        public GameObject Render()
        {
            if (drafts == null || drafts.Count == 0)
                return gameObject;

            //Debug.Log("Roof Render:" + drafts.Count);

            MeshDraft md = new MeshDraft() { name = "MergedRoofs" };
            for (int i = 0; i < drafts.Count; i++)
            {
                md.Add(drafts[i]);
            }
            roofMf.mesh = md.ToMesh();
            MeshCollider mc = roofMf.GetComponent<MeshCollider>();
            if (mc != null)
            {
                mc.sharedMesh = roofMf.sharedMesh;
            }
            roofMf.transform.localPosition = Vector3.up * AppController.Instance.wallsHeight;
            return gameObject;
        }


        private IConstructible<MeshDraft> Plan(List<Vector2> foundationPolygon, AppController.RoofConfig config)
        {
            switch (config.type)
            {
                case AppController.RoofType.Flat:
                    return new ProceduralFlatRoof(foundationPolygon, config, config.color);
                case AppController.RoofType.Hipped:
                    return new ProceduralHippedRoof(foundationPolygon, config, config.color);
                case AppController.RoofType.Gabled:
                    return new ProceduralGabledRoof(foundationPolygon, config, config.color);
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }

        public void GenerateFromWalls(List<List<Vector2>> walls, List<List<Vector2>> rooms, bool flatRoot)
        {
            RoofConfig flatRoofConfig = new RoofConfig(RoofType.Flat, .001f, 0);
            HDLogger.Log("[Roof] GenerateFromWalls walls:" + walls.Count, HDLogger.LogCategory.Building);

            bool hasErrors = false;
            for (int j = 0; j < walls.Count; j++)
            {
                List<Vector2> outerPoints = new List<Vector2>(walls[j]);

                outerPoints = MathUtils.GetClockwise(outerPoints);
                //HDLogger.Log("[Roof] Dump1:" + outerPoints.Dump(), HDLogger.LogCategory.Building);
                if (!Generate(outerPoints, flatRoot ? flatRoofConfig : AppController.Instance.roof))
                    hasErrors = true;
            }
            if (hasErrors)
            {
                ClearPreviousDrafts();
                HDLogger.Log("[Roof] GenerateFromWalls rooms:" + rooms.Count, HDLogger.LogCategory.Building);

                for (int i = 0; i < rooms.Count; i++)
                {
                    List<Vector2> outerPoints = new List<Vector2>(rooms[i]);
                    outerPoints = MathUtils.GetClockwise(rooms[i]);
                    //HDLogger.Log("[Roof]  room(" + i + "):" + outerPoints.Count, HDLogger.LogCategory.Building);
                    //HDLogger.Log("[Roof] Dump2:" + outerPoints.Dump(), HDLogger.LogCategory.Building);
                    Generate(outerPoints, flatRoot ? flatRoofConfig : AppController.Instance.roof);
                }
            }

        }


        public void DisableCollider()
        {
            MeshCollider mc = roofMf.GetComponent<MeshCollider>();
            if (mc != null)
            {
                //mc.enabled = false;
                Destroy(mc);
            }
        }
    }
}
