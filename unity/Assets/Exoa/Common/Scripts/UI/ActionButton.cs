using Exoa.Events;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer.UI
{
    public class ActionButton : MonoBehaviour
    {
        public bool genericAction;
        public GameEditorEvents.Action action;
        public bool cameraAction;
        public CameraEvents.Action camAction;
        private Button btn;

        void Start()
        {
            btn = GetComponent<Button>();
            if (genericAction)
                btn.onClick.AddListener(() => GameEditorEvents.OnRequestButtonAction?.Invoke(action, true));
            if (cameraAction)
                btn.onClick.AddListener(() => CameraEvents.OnRequestButtonAction?.Invoke(camAction, true));

#if !(UNITY_EDITOR)
            if (genericAction && action == GameEditorEvents.Action.ExportFBX)
            {
                gameObject.SetActive(false);
            }
#endif
        }

    }
}
