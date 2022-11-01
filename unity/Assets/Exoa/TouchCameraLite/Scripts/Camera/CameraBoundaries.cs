using UnityEngine;

namespace Exoa.Cameras
{
    public class CameraBoundaries : MonoBehaviour
    {
        public enum Type { Rectangle };
        public enum Mode { CameraCenter };
        public Type type;

        public Collider bounderiesCollider;
        public BoxCollider boxCollider;
        public bool drawGizmos;
        private Bounds bounds;

        public Mode mode;

        /// <summary>
        /// Clamp any given points inside the defined boundaries
        /// </summary>
        /// <param name="p"></param>
        /// <param name="isInBoundaries"></param>
        /// <param name="groundHeight"></param>
        /// <returns></returns>
        public Vector3 ClampInBoundsXZ(Vector3 p, out bool isInBoundaries, float groundHeight)
        {
            isInBoundaries = true;

            if (type == Type.Rectangle && boxCollider == null)
                return p;



            if (type == Type.Rectangle)
            {
                if (boxCollider.enabled)
                {
                    bounds = boxCollider.bounds;
                    boxCollider.enabled = false;
                }
                bounds.center = bounds.center.SetY(groundHeight);
                bounds.size = bounds.size.SetY(0);


                if (bounds.Contains(p.SetY(groundHeight)))
                    return p;
                isInBoundaries = false;
                return bounds.ClosestPoint(p).SetY(p.y);
            }
            return p;
        }

        /// <summary>
        /// Clamp any given points inside the defined boundaries
        /// </summary>
        /// <param name="p"></param>
        /// <param name="isInBoundaries"></param>
        /// <param name="groundHeight"></param>
        /// <returns></returns>
        public Vector3 ClampInBoundsXY(Vector3 p, out bool isInBoundaries, float groundHeight)
        {
            isInBoundaries = true;

            if (type == Type.Rectangle && boxCollider == null)
                return p;


            if (type == Type.Rectangle)
            {
                if (boxCollider.enabled)
                {
                    bounds = boxCollider.bounds;
                    boxCollider.enabled = false;
                }
                bounds.center = bounds.center.SetZ(groundHeight);
                bounds.size = bounds.size.SetZ(0);


                if (bounds.Contains(p.SetZ(groundHeight)))
                    return p;
                isInBoundaries = false;
                return bounds.ClosestPoint(p).SetZ(p.z);
            }
            return p;
        }



        void OnDrawGizmos()
        {
            //print("bounderiesCollider:" + bounderiesCollider);
            if (!drawGizmos)
                return;

            if (type == Type.Rectangle && boxCollider == null)
                return;



            Color c = Color.yellow;
            c.a = .5f;
            Gizmos.color = c;

            if (type == Type.Rectangle && bounderiesCollider is BoxCollider)
            {
                Bounds b = boxCollider.bounds;
                b.center = bounds.center.SetY(0);
                b.size = bounds.size.SetY(0);
                Gizmos.matrix = boxCollider.transform.localToWorldMatrix;
                Gizmos.DrawCube(b.center, b.size);
            }
        }
    }
}
