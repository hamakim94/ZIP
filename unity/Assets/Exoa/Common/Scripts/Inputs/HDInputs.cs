using UnityEngine;
using UnityEngine.EventSystems;

namespace Exoa.Designer
{
    public class HDInputs : MonoBehaviour
    {
        public static bool ControlKey => (Event.current != null && Event.current.control && Event.current.type == EventType.KeyDown);
        public static bool IsOverUI => EventSystem.current != null && EventSystem.current.IsPointerOverGameObject();


        [Header("Key Map")]
        public static KeyCode resetCamera = KeyCode.F;
        public static KeyCode save = KeyCode.S;
        public static KeyCode switchPerspective = KeyCode.Space;
        public static KeyCode openSaveFolder = KeyCode.D;
        public static KeyCode toggleGizmos = KeyCode.G;
        public static KeyCode toggleRoofs = KeyCode.R;
        public static KeyCode toggleExteriorWalls = KeyCode.E;
        public static KeyCode escape = KeyCode.Escape;
        public static KeyCode leftAlt = KeyCode.LeftAlt;

        public static bool ResetCamera()
        {
            return Input.GetKeyDown(resetCamera) && !IsOverUI;
        }

        public static bool SavePressed()
        {
            return Input.GetKeyDown(save) && ControlKey;
        }

        public static bool OpenSaveFolderPressed()
        {
            return Input.GetKeyDown(openSaveFolder) && ControlKey;
        }


        public static bool ChangePlanMode()
        {
            return Input.GetKeyDown(switchPerspective) && !IsOverUI;
        }

        public static bool ToggleGizmo()
        {
            return Input.GetKeyDown(toggleGizmos) && !IsOverUI;
        }

        public static bool ToggleExteriorWalls()
        {
            return Input.GetKeyDown(toggleExteriorWalls) && !IsOverUI;
        }

        public static bool ToggleRoof()
        {
            return Input.GetKeyDown(toggleRoofs) && !IsOverUI;
        }

        public static bool ReleaseDrag()
        {
            return Input.GetMouseButtonUp(0);
        }

        public static bool OptionPress()
        {
            return Input.GetMouseButtonDown(1);
        }

        public static bool EscapePressed()
        {
            return Input.GetKeyDown(escape);
        }

        public static bool AltPressed()
        {
            return Input.GetKey(leftAlt);
        }
    }
}
