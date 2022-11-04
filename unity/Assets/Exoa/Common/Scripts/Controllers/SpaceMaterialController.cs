using Exoa.Designer;
using System;
using System.Collections.Generic;
using UnityEngine;
using static Exoa.Designer.DataModel;

namespace Exoa.Designer
{
    public class SpaceMaterialController : MonoBehaviour
    {

        public List<MeshRenderer> separateWalls;
        public MeshRenderer walls;
        public MeshRenderer floor;
        public MeshRenderer ceiling;

        private TextureSetting floorMapSetting;
        private TextureSetting ceilingMatSetting;
        private List<TextureSetting> separateWallMatSettings;

        public void ApplyCeilingMaterial(Material m)
        {
            if (m != null)
            {
                ceiling.material = m;

                ceilingMatSetting.materialName = m.name;
            }
        }

        public void ApplyCeilingMaterial(TextureSetting ts)
        {
            Material m = Resources.Load<Material>(HDSettings.CEILING_MATERIALS_FOLDER + ts.materialName);
            if (m != null)
                ceiling.material = m;
            SetScale(ceiling.material, ts.tiling);
            ceilingMatSetting = ts;
        }

        public void ApplyCeilingTiling(float tiling)
        {
            SetScale(ceiling.material, tiling);
            ceilingMatSetting.tiling = tiling;
        }

        public void ApplyInteriorWallTiling(int v, float tiling)
        {
            SetScale(GetSeparateWall(v).material, tiling);
            SetWallMaterialTiling(v, tiling);
        }

        public void ApplyFloorTiling(float tiling)
        {
            floorMapSetting.tiling = tiling;
            SetScale(floor.material, tiling);
        }

        public void ApplyFloorMaterial(Material m)
        {
            if (m != null)
            {
                floor.material = m;
                SetScale(floor.material, floorMapSetting.tiling);
                floorMapSetting.materialName = m.name;
            }
        }

        private void SetScale(Material material, float tiling)
        {
            material.SetTextureScale("_MainTex", Vector2.one * tiling);
            material.SetTextureScale("_MetallicGlossMap", Vector2.one * tiling);
            material.SetTextureScale("_BumpMap", Vector2.one * tiling);
            material.SetTextureScale("_OcclusionMap", Vector2.one * tiling);
            material.SetTextureScale("_EmissionMap", Vector2.one * tiling);
            material.SetTextureScale("_DetailNormalMap", Vector2.one * tiling);
        }

        public void ApplyFloorMaterial(TextureSetting ts)
        {
            Material m = Resources.Load<Material>(HDSettings.FLOOR_MATERIALS_FOLDER + ts.materialName);
            if (m == null)
                m = Resources.Load<Material>(HDSettings.OUTSIDE_MATERIALS_FOLDER + ts.materialName);
            if (m != null)
                floor.material = m;
            SetScale(floor.material, ts.tiling);
            floorMapSetting = ts;
        }

        internal TextureSetting GetInteriorWallTextureSettings(int v)
        {
            return GetWallTextureSetting(v);
        }

        public TextureSetting GetFloorTextureSettings()
        {
            floorMapSetting.tiling = floorMapSetting.tiling == 0 ? 1f : floorMapSetting.tiling;
            return floorMapSetting;
        }

        public void ApplyInteriorWallTiling(float tiling)
        {
            for (int i = 0; i < walls.transform.childCount; i++)
            {
                SetWallMaterialTiling(i, tiling);
            }
        }
        public void ApplyInteriorWallMaterial(Material mat)
        {
            for (int i = 0; i < walls.transform.childCount; i++)
            {
                GetSeparateWall(i).material = mat;
                SetWallMaterialName(i, mat.name);
            }
        }

        internal TextureSetting GetCeilingTextureSettings()
        {
            ceilingMatSetting.tiling = ceilingMatSetting.tiling == 0 ? 1f : ceilingMatSetting.tiling;
            return ceilingMatSetting;
        }

        public void ApplyInteriorWallMaterial(int wallId, Material mat)
        {
            GetSeparateWall(wallId).material = mat;
            SetWallMaterialName(wallId, mat.name);
        }

        public void ApplyInteriorWallMaterial(int wallId, TextureSetting ts)
        {
            Material mat = Resources.Load<Material>(HDSettings.WALL_MATERIALS_FOLDER + ts.materialName);
            if (mat == null) return;
            MeshRenderer mr = GetSeparateWall(wallId);
            mr.material = mat;
            SetScale(mr.material, ts.tiling);
            SetWallTextureSetting(wallId, ts);
        }

        private void SetWallTextureSetting(int wallId, TextureSetting ts)
        {
            GetWallTextureSetting(wallId);

            separateWallMatSettings[wallId] = ts;
        }

        private void SetWallMaterialName(int wallId, string name)
        {

            TextureSetting ts = GetWallTextureSetting(wallId);
            ts.materialName = name;
            separateWallMatSettings[wallId] = ts;
        }

        public TextureSetting GetWallTextureSetting(int wallId)
        {
            if (separateWallMatSettings == null)
            {
                separateWallMatSettings = new List<TextureSetting>();
            }
            if (wallId >= separateWallMatSettings.Count)
            {
                int start = separateWallMatSettings.Count;
                for (int i = start; i <= wallId; i++)
                {
                    separateWallMatSettings.Add(new TextureSetting(null, 1f));
                }
            }
            return separateWallMatSettings[wallId];
        }
        private void SetWallMaterialTiling(int wallId, float tiling)
        {
            TextureSetting ts = GetWallTextureSetting(wallId);
            ts.tiling = tiling;
            separateWallMatSettings[wallId] = ts;
        }


        private MeshRenderer GetSeparateWall(int id)
        {
            //Debug.Log("GetSeparateWall id:" + id + " walls children:" + walls.transform.childCount);

            if (separateWalls == null || separateWalls.Count == 0)
            {
                separateWalls = new List<MeshRenderer>();
                walls.gameObject.GetComponentsInChildren<MeshRenderer>(separateWalls, false, false);
            }
            if (separateWalls.Count <= id)
            {
                throw new Exception("Trying to allocate a material to wall id:" + id + " but this wall cannot be found");
            }
            return separateWalls[id];
        }

#if INTERIOR_MODULE
        public RoomSetting GetRoomSetting()
        {
            RoomSetting rs = new RoomSetting();
            rs.separateWallTextureSettings = separateWallMatSettings;
            rs.floorTextureSetting = floorMapSetting;
            rs.ceilingTextureSetting = ceilingMatSetting;
            rs.floorMapItemId = transform.GetSiblingIndex();
            return rs;
        }
        public void SetRoomSetting(RoomSetting roomSetting)
        {
            HDLogger.Log("SetRoomSetting " + roomSetting.wall + " " + roomSetting.floor, HDLogger.LogCategory.Interior);

            if (!string.IsNullOrEmpty(roomSetting.floorTextureSetting.materialName))
            {
                ApplyFloorMaterial(roomSetting.floorTextureSetting);
            }
            else if (!string.IsNullOrEmpty(roomSetting.floor))
            {
                ApplyFloorMaterial(new TextureSetting(roomSetting.floor, 1));
            }
            if (roomSetting.separateWallTextureSettings != null && roomSetting.separateWallTextureSettings.Count > 0)
            {
                for (int i = 0; i < roomSetting.separateWallTextureSettings.Count; i++)
                {
                    ApplyInteriorWallMaterial(i, roomSetting.separateWallTextureSettings[i]);
                }

            }
            else if (!string.IsNullOrEmpty(roomSetting.wall))
            {
                Material m = Resources.Load<Material>(HDSettings.WALL_MATERIALS_FOLDER + roomSetting.wall);
                if (m != null) ApplyInteriorWallMaterial(m);
            }
            if (!string.IsNullOrEmpty(roomSetting.ceiling))
            {
                Material m = Resources.Load<Material>(HDSettings.CEILING_MATERIALS_FOLDER + roomSetting.ceiling);
                if (m != null) ApplyCeilingMaterial(m);
            }
        }
#else
    public object GetRoomSetting()
    {
        return null;
    }

    public void SetRoomSetting(object roomSetting)
    {

    }
#endif
    }
}
