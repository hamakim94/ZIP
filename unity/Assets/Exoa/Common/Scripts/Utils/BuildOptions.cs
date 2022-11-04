using UnityEngine;

namespace Exoa.Designer
{

    public class BuildOptions : MonoBehaviour
    {
        public static bool DEBUG_MODE;

        public static bool LOG_FILE_SYSTEM;
        public static bool LOG_SCREENSHOTS;
        public static bool LOG_FLOORMAP;
        public static bool LOG_INTERIOR;
        public static bool LOG_BUILDING;

        void Awake()
        {

#if UCB_DEBUG_MODE || (!UNITY_CLOUD_BUILD && DEBUG_MODE)
        DEBUG_MODE = true;
#endif

#if UCB_LOG_FILE_SYSTEM || (!UNITY_CLOUD_BUILD && LOG_FILE_SYSTEM)
        LOG_FILE_SYSTEM = true;
#endif

#if UCB_LOG_SCREENSHOTS || (!UNITY_CLOUD_BUILD && LOG_SCREENSHOTS)
        LOG_SCREENSHOTS = true;
#endif

#if UCB_LOG_FLOORMAP || (!UNITY_CLOUD_BUILD && LOG_FLOORMAP)
        LOG_FLOORMAP = true;
#endif

#if UCB_LOG_INTERIOR || (!UNITY_CLOUD_BUILD && LOG_INTERIOR)
        LOG_INTERIOR = true;
#endif

#if UCB_LOG_BUILDING || (!UNITY_CLOUD_BUILD && LOG_BUILDING)
        LOG_BUILDING = true;
#endif

#if !UNITY_EDITOR
        Debug.unityLogger.logEnabled = DEBUG_MODE;
#endif
        }


    }

}
