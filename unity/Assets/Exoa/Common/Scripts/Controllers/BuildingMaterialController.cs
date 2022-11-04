using Exoa.Designer;
using Exoa.Events;
using System;
using UnityEngine;
using static Exoa.Designer.DataModel;

namespace Exoa.Designer
{
    public class BuildingMaterialController : MonoBehaviour
    {
        public MeshRenderer exteriorWalls;
        public MeshRenderer roof;
        public MeshCollider exteriorWallsCol;
        public MeshCollider roofCol;


        private TextureSetting roofTextureSetting;
        private TextureSetting exteriorWallTextureSetting;

        private bool areWallsDisplayed = true;
        private bool areRoofsDisplayed = true;

        void OnDestroy()
        {
            GameEditorEvents.OnRequestButtonAction -= OnRequestButtonAction;
            GameEditorEvents.OnRenderForScreenshot -= OnRenderForScreenshot;
            AppController.OnAppStateChange -= OnAppStateChange;
        }

        void Start()
        {
            GameEditorEvents.OnRequestButtonAction += OnRequestButtonAction;
            GameEditorEvents.OnRenderForScreenshot += OnRenderForScreenshot;
            AppController.OnAppStateChange += OnAppStateChange;

            bool showRoofAndWalls = AppController.Instance.State == AppController.States.PreviewBuilding ||
                                    AppController.Instance.State == AppController.States.PlayMode;
            ShowExteriorWalls(showRoofAndWalls);
            ShowRoof(showRoofAndWalls);
        }

        internal void ApplyExteriorWallTiling(float tiling)
        {
            exteriorWalls.material.mainTextureScale = new Vector2(tiling, tiling);
            exteriorWallTextureSetting.tiling = tiling;
        }

        internal void ApplyRoofTiling(float tiling)
        {
            roof.material.mainTextureScale = new Vector2(tiling, tiling);
            roofTextureSetting.tiling = tiling;
        }

        private void OnAppStateChange(AppController.States state)
        {
            if (state == AppController.States.PreviewBuilding)
            {
                ShowRoof(true);
                ShowExteriorWalls(true);
            }
            if (state == AppController.States.Draw)
            {
                ShowRoof(false);
            }
        }

        private void OnRequestButtonAction(GameEditorEvents.Action action, bool active)
        {
            switch (action)
            {
                case GameEditorEvents.Action.ToggleExteriorWalls: ToggleExteriorWalls(); break;
                case GameEditorEvents.Action.ShowExteriorWalls: ShowExteriorWalls(active); break;
                case GameEditorEvents.Action.ToggleRoof: ToggleRoof(); break;
                case GameEditorEvents.Action.ShowRoof: ShowRoof(active); break;
            }
        }

        private bool exteriorWallsEnabledBeforeScreenshot;
        private bool roofEnabledBeforeScreenshot;
        private void OnRenderForScreenshot(bool preRender)
        {
            HDLogger.Log("OnRenderForScreenshot preRender:" + preRender, HDLogger.LogCategory.Screenshot);
            if (preRender)
            {
                exteriorWallsEnabledBeforeScreenshot = exteriorWalls.enabled;
                roofEnabledBeforeScreenshot = roof.enabled;

                exteriorWalls.enabled = true;
                roof.enabled = false;
            }
            else
            {
                exteriorWalls.enabled = exteriorWallsEnabledBeforeScreenshot;
                roof.enabled = roofEnabledBeforeScreenshot;
            }

        }

        internal TextureSetting GetExteriorWallsTextureSettings()
        {
            exteriorWallTextureSetting.tiling = exteriorWallTextureSetting.tiling == 0 ? 1f : exteriorWallTextureSetting.tiling;
            return exteriorWallTextureSetting;
        }

        internal TextureSetting GetRoofTextureSettings()
        {
            roofTextureSetting.tiling = roofTextureSetting.tiling == 0 ? 1f : roofTextureSetting.tiling;
            return roofTextureSetting;
        }

        void Update()
        {
            if (HDInputs.ToggleExteriorWalls())
            {
                ToggleExteriorWalls();
            }
            if (HDInputs.ToggleRoof())
            {
                ToggleRoof();
            }
        }

        private void ToggleExteriorWalls()
        {
            areWallsDisplayed = !areWallsDisplayed;
            ShowExteriorWalls(areWallsDisplayed);
        }
        private void ShowExteriorWalls(bool show)
        {
            HDLogger.Log("Show Ext Walls show:" + show, HDLogger.LogCategory.Building);
            areWallsDisplayed = show;
            exteriorWalls.enabled = areWallsDisplayed;
            if (exteriorWallsCol != null)
                exteriorWallsCol.enabled = areWallsDisplayed;
        }

        private void ToggleRoof()
        {
            areRoofsDisplayed = !areRoofsDisplayed;
            ShowRoof(areRoofsDisplayed);
        }
        private void ShowRoof(bool active)
        {
            HDLogger.Log("Show Roof show:" + active, HDLogger.LogCategory.Building);
            areRoofsDisplayed = active;
            roof.enabled = areRoofsDisplayed;
            if (roofCol != null) roofCol.enabled = areRoofsDisplayed;
        }

        public void ApplyExteriorWallMaterial(Material m)
        {
            ApplyExteriorWallMaterial(new TextureSetting(m.name, 0));
        }
        public void ApplyExteriorWallMaterial(string matName)
        {
            ApplyExteriorWallMaterial(new TextureSetting(matName, 1f));
        }

        public void ApplyRoofMaterial(Material m)
        {
            ApplyRoofMaterial(new TextureSetting(m.name, 0));
        }
        public void ApplyRoofMaterial(string matName)
        {
            ApplyRoofMaterial(new TextureSetting(matName, 0));
        }


        private void ApplyExteriorWallMaterial(TextureSetting ts)
        {
            Material m = Resources.Load<Material>(HDSettings.EXTERIOR_WALL_MATERIALS_FOLDER + ts.materialName);
            if (m != null)
            {
                exteriorWallTextureSetting.materialName = ts.materialName;
                exteriorWallTextureSetting.tiling = ts.tiling > 0f ? ts.tiling : (exteriorWallTextureSetting.tiling > 0 ? exteriorWallTextureSetting.tiling : 1);

                exteriorWalls.material = m;
                exteriorWalls.material.mainTextureScale = new Vector2(exteriorWallTextureSetting.tiling, exteriorWallTextureSetting.tiling);
            }
        }

        private void ApplyRoofMaterial(TextureSetting ts)
        {
            Material m = Resources.Load<Material>(HDSettings.ROOF_MATERIALS_FOLDER + ts.materialName);
            if (m != null)
            {
                roofTextureSetting.materialName = ts.materialName;
                roofTextureSetting.tiling = ts.tiling > 0f ? ts.tiling : (roofTextureSetting.tiling > 0 ? roofTextureSetting.tiling : 1);

                roof.material = m;
                roof.material.mainTextureScale = new Vector2(roofTextureSetting.tiling, roofTextureSetting.tiling);
            }
        }

#if INTERIOR_MODULE
        public BuildingSetting GetBuildingSetting()
        {
            BuildingSetting rs = new BuildingSetting();
            rs.exteriorWallTextureSetting = GetExteriorWallsTextureSettings();
            rs.roofTextureSetting = GetRoofTextureSettings();
            return rs;
        }

        public void SetBuildingSetting(BuildingSetting bs)
        {
            if (!string.IsNullOrEmpty(bs.exteriorWallMat))
            {
                ApplyExteriorWallMaterial(bs.exteriorWallMat);
            }
            else if (!string.IsNullOrEmpty(bs.exteriorWallTextureSetting.materialName))
            {
                ApplyExteriorWallMaterial(bs.exteriorWallTextureSetting);
            }
            if (!string.IsNullOrEmpty(bs.roofMat))
            {
                ApplyRoofMaterial(bs.roofMat);
            }
            else if (!string.IsNullOrEmpty(bs.roofTextureSetting.materialName))
            {
                ApplyRoofMaterial(bs.roofTextureSetting);
            }
        }

#else
    public object GetBuildingSetting()
    {
        return null;
    }

    public void SetBuildingSetting(object bs)
    {

    }
#endif
    }
}
