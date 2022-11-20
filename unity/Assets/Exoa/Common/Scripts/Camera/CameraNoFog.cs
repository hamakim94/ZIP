using Exoa.Events;
using UnityEngine;

namespace Exoa.Designer.Cameras
{
    public class CameraNoFog : MonoBehaviour
    {

        void OnPreRender()
        {
            GameEditorEvents.OnRenderForScreenshot?.Invoke(true);
            if (!enabled) return;
            RenderSettings.fog = false;
        }

        void OnPostRender()
        {
            GameEditorEvents.OnRenderForScreenshot?.Invoke(false);
            if (!enabled) return;
            RenderSettings.fog = true;
        }
    }
}
