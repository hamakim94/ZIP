using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

namespace Exoa.Cameras
{
    [CustomEditor(typeof(CameraBoundaries))]
    public class CameraBounderiesEditor : CameraBaseEditor
    {
        protected override void HideProperties()
        {
            CameraBoundaries cb = target as CameraBoundaries;
            List<string> dontIncludeMe = new List<string>() { "m_Script", };

            if (cb.bounderiesCollider != null && cb.bounderiesCollider is BoxCollider && cb.boxCollider == null)
            {
                cb.boxCollider = cb.bounderiesCollider as BoxCollider;
                dontIncludeMe.Add("bounderiesCollider");
            }
            else if (cb.boxCollider != null)
            {
                dontIncludeMe.Add("bounderiesCollider");
            }
        }
        protected override void DrawDebug()
        {

        }
    }
}
