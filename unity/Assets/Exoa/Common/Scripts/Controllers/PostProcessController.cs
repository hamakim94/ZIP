
using Exoa.Events;
using Exoa.Maths;
using UnityEngine;
//using UnityEngine.Rendering.PostProcessing;

namespace Exoa.Designer
{
    public class PostProcessController : MonoBehaviour
    {
        //private PostProcessLayer layer;
        public Light directionalLight;
        public float defaultShadowStrength = 0.22f;
        public Springs shadowStrengthMove;
        private FloatSpring shadowStrengthSpring;
        private float shadowStrengthTarget;

        void OnDestroy()
        {
            CameraEvents.OnBeforeSwitchPerspective -= OnBeforeSwitchPerspective;
        }
        void Awake()
        {
            //layer = GetComponent<PostProcessLayer>();
            CameraEvents.OnBeforeSwitchPerspective += OnBeforeSwitchPerspective;
        }
        private void Start()
        {
            shadowStrengthTarget = directionalLight.shadowStrength;
            shadowStrengthSpring.Value = shadowStrengthTarget;
        }

        private void OnBeforeSwitchPerspective(bool orthoMode)
        {
            shadowStrengthTarget = orthoMode ? 0 : defaultShadowStrength;
        }
        private void Update()
        {
            directionalLight.shadowStrength = shadowStrengthMove.Update(ref shadowStrengthSpring, shadowStrengthTarget);
        }
    }
}
