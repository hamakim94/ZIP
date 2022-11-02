using UnityEngine;
using UnityEngine.SceneManagement;

namespace Exoa.Designer
{
    public class ModuleController : OutlineHandler
    {
        public bool snapOnGrid = true;
        public bool isGroundTile;
        public bool isCeilTile;
        public bool ignoreOtherModuleColliders;
        public Vector3 initRotation;

        override protected void Start()
        {
            base.Start();
            if (SceneManager.GetActiveScene().name != "LevelEditor")
            {
                transform.DestroyChildrenByName("remove", true);
            }
        }
        public Quaternion GetInitRotation()
        {
            return Quaternion.Euler(initRotation);
        }

    }
}
