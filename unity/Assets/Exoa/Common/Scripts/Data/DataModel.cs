using Exoa.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Exoa.Designer
{
    public class DataModel
    {

        #region FLOOR MAP PROJECT

        public enum FloorMapItemType { Room, Door, Window, Opening, Outside };


        /// <summary>
        /// V2 with multi floors
        /// </summary>
        [System.Serializable]
        public struct FloorMapV2
        {
            public string version;
            public List<FloorMapLevel> floors;
            public BuildingSettings settings;

            public FloorMapLevel GetFloorMapLevelByUniqueId(string floorUniqueId)
            {
                return floors.Find(s => s.uniqueId == floorUniqueId);
            }

            internal FloorMapLevel Find()
            {
                throw new NotImplementedException();
            }
        }

        /// <summary>
        /// V1 single floor support
        /// </summary>
        [System.Serializable]
        public struct FloorMapV1
        {
            public List<FloorMapItem> spaces;
            public BuildingSettings settings;

        }

        [System.Serializable]
        public struct FloorMapLevel
        {
            public string uniqueId;
            public List<FloorMapItem> spaces;

            public string GenerateUniqueId()
            {
                if (string.IsNullOrEmpty(uniqueId))
                {
                    uniqueId = System.Guid.NewGuid().ToString();
                }
                return uniqueId;
            }
            public List<FloorMapItem> GetRoomSpaces()
            {
                return spaces.Where(s => s.GetItemType() == FloorMapItemType.Room).ToList();
            }
            public List<FloorMapItem> GetOutsideSpaces()
            {
                return spaces.Where(s => s.GetItemType() == FloorMapItemType.Outside).ToList();
            }
            public List<FloorMapItem> GetAllOpeningSpaces()
            {
                //Debug.Log("spaces:" + spaces);
                //Debug.Log("spaces:" + spaces.Count);
                return spaces.Where(s => s.GetItemType() == FloorMapItemType.Window ||
                s.GetItemType() == FloorMapItemType.Door || s.GetItemType() == FloorMapItemType.Opening).ToList();
            }
        }

        [System.Serializable]
        public struct BuildingSettings
        {
            public float wallsHeight;
            public float doorsHeight;
            public float interiorWallThickness;
            public float exteriorWallThickness;
            public float windowsThickness;
            public float doorsThickness;
            public float roofThickness;
            public float roofOverhang;
            public int roofType;
        }

        [System.Serializable]
        public struct FloorMapItem
        {
            public string type;
            public string name;
            public float width;
            public float height;
            public float ypos;

            public bool hasWindow;
            public float windowFrameSize;
            public float windowSizeH;
            public float windowSizeV;
            public int windowSubDivH;
            public int windowSubDivV;

            public List<Vector3> normalizedPositions;
            public List<Vector3> directions;

            public FloorMapItemType GetItemType(GameObject go = null)
            {
                DataModel.FloorMapItemType t = DataModel.FloorMapItemType.Room;
                if (string.IsNullOrEmpty(type) && go != null)
                {
                    if (go.name.ToLower().Contains("window"))
                        t = FloorMapItemType.Window;
                    if (go.name.ToLower().Contains("door"))
                        t = FloorMapItemType.Door;

                }
                else
                {
                    DataModel.FloorMapItemType.TryParse(type, out t);
                }

                return t;
            }
        }
        #endregion

        #region INTERIOR PROJECT

        /// <summary>
        /// V2 with multi floors
        /// </summary>
        [System.Serializable]
        public class InteriorProjectV2
        {
            public string version;
            public string title;
            public string floorMapFile;
            public List<InteriorLevel> floors;
            public BuildingSetting settings;

            public InteriorLevel GetInteriorLevelByUniqueId(string floorUniqueId)
            {
                return floors.Find(s => s.floorUniqueId == floorUniqueId);
            }
        }

        /// <summary>
        /// Interior file v1
        /// </summary>
        [System.Serializable]
        public class InteriorProjectV1
        {
            public string title;
            public string floorMapFile;

            public List<SceneObject> sceneObjects;
            public List<RoomSetting> roomSettings;
            public BuildingSetting buildingSetting;

        }


        [System.Serializable]
        public struct InteriorLevel
        {
            public string floorUniqueId;
            public List<SceneObject> sceneObjects;
            public List<RoomSetting> roomSettings;

        }


        [System.Serializable]
        public struct SceneObject
        {
            public string prefabName;
            public string materialVariantName;
            public Color colorVariant;
            public Vector3 position;
            public Vector3 rotation;
            public Vector3 scale;
        }

        [System.Serializable]
        public struct RoomSetting
        {
            public int floorMapItemId;

            // kept for retro compatibility
            public string wall;
            public string floor;
            public string ceiling;

            // New implementation
            public List<TextureSetting> separateWallTextureSettings;
            public TextureSetting floorTextureSetting;
            public TextureSetting ceilingTextureSetting;
        }

        [System.Serializable]
        public struct TextureSetting
        {
            public string materialName;
            public float tiling;

            public TextureSetting(string name, float tiling) : this()
            {
                this.materialName = name;
                this.tiling = tiling;
            }
        }

        [System.Serializable]
        public struct BuildingSetting
        {
            // Kept for retro compatibility
            public string exteriorWallMat;
            public string roofMat;

            // New implementation
            public TextureSetting roofTextureSetting;
            public TextureSetting exteriorWallTextureSetting;
        }

        [System.Serializable]
        public class InteriorCategory
        {
            [SerializeField] public string folder;
            [SerializeField] public string name;

            public InteriorCategory(string name, string folder)
            {
                this.name = name;
                this.folder = folder;
            }
        }

        [System.Serializable]
        public struct InteriorCategories
        {
            public List<InteriorCategory> folders;
        }


        #endregion

        #region CONVERTERS
        public static InteriorProjectV2 DeserializeInteriorJsonFile(string str)
        {
            if (string.IsNullOrEmpty(str))
                return default;

            InteriorProjectV2 fileV2 = JsonConvert.DeserializeObject<InteriorProjectV2>(str);
            if (fileV2.floors != null && fileV2.floors.Count > 0)
            {
                // file has a v2 format
            }
            else
            {
                // Fallback to V1

                InteriorProjectV1 fileV1 = JsonConvert.DeserializeObject<InteriorProjectV1>(str);

                // Converting to V2
                InteriorLevel floor = new InteriorLevel();
                floor.sceneObjects = fileV1.sceneObjects;
                floor.roomSettings = fileV1.roomSettings;
                //floor.floorUniqueId = fileV1.floorUniqueId;

                fileV2 = new InteriorProjectV2();
                fileV2.version = "v2";
                fileV2.title = fileV1.title;
                fileV2.floorMapFile = fileV1.floorMapFile;
                fileV2.settings = fileV1.buildingSetting;
                fileV2.floors = new System.Collections.Generic.List<InteriorLevel>();
                fileV2.floors.Add(floor);
            }
            return fileV2;
        }

        public static FloorMapV2 DeserializeFloorMapJsonFile(string str)
        {
            if (string.IsNullOrEmpty(str))
                return default;

            FloorMapV2 fileV2 = JsonConvert.DeserializeObject<FloorMapV2>(str);
            if (fileV2.floors != null && fileV2.floors.Count > 0)
            {
                // file has a v2 format
            }
            else
            {

                // Fallback to V1

                FloorMapV1 fileV1 = JsonConvert.DeserializeObject<FloorMapV1>(str);

                // Converting to V2
                FloorMapLevel floor = new FloorMapLevel();
                floor.spaces = fileV1.spaces;
                floor.GenerateUniqueId();

                fileV2 = new FloorMapV2();
                fileV2.version = "v2";
                fileV2.settings = fileV1.settings;
                fileV2.floors = new System.Collections.Generic.List<FloorMapLevel>();
                fileV2.floors.Add(floor);

            }
            return fileV2;
        }
        #endregion

    }
}
