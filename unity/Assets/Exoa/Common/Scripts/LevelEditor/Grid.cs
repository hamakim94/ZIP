using UnityEngine;

namespace Exoa.Designer
{
    public class Grid : MonoBehaviour
    {
        public Vector3 space = Vector3.one;
        public Vector3 offset = Vector3.zero;
        public bool drawGizmo;
        public Renderer normalizationRenderer;

        public Material Mat
        {
            get { return GetComponentInChildren<MeshRenderer>().material; }
        }
        public Bounds GetBounds()
        {
            Bounds b = normalizationRenderer.bounds;
            return b;
        }
        public float GetWidth()
        {
            return GetBounds().size.x;
        }

        public Vector3 GetNearestPointOnGrid(Vector3 position)
        {
            position -= transform.position;

            int xCount = Mathf.RoundToInt(position.x / space.x);
            int yCount = Mathf.RoundToInt(position.y / space.y);
            int zCount = Mathf.RoundToInt(position.z / space.z);

            Vector3 result = new Vector3(
                (float)xCount * space.x,
                (float)yCount * space.y,
                (float)zCount * space.z) + offset;

            result += transform.position;

            return result;
        }
        public Vector2 GetNormalizedPosition(Vector3 p)
        {
            Bounds b = GetBounds();
            //print("b:" + b);

            Vector3 vec = p - b.center + b.extents;
            Vector2 noramized = new Vector2(vec.x / b.size.x, vec.z / b.size.z);
            //print("vec:" + vec + " noramized:" + noramized);
            return noramized;
        }
        public Vector3 GetWorldPosition(Vector2 normalizedPoint)
        {
            Bounds b = GetBounds();
            //print("bounds:" + b);

            Vector3 p = new Vector3(normalizedPoint.x * b.size.x, 0, normalizedPoint.y * b.size.z);
            p = p + b.center - b.extents;
            //print("GetWorldPosition normalizedPoint:" + normalizedPoint + " p:" + p);

            return p;
        }

        public Vector3 GetLocalPosition(Vector2 normalizedPoint, Transform obj)
        {
            Vector3 worldPos = GetWorldPosition(normalizedPoint);
            Vector3 localPos = obj.InverseTransformPoint(worldPos);
            //Vector3 localPos = worldPos + obj.position - normalizationRenderer.transform.position;
            return localPos;
        }


        private void OnDrawGizmos()
        {
            if (!drawGizmo) return;
            Gizmos.color = Color.yellow;
            for (float x = -20; x < 20; x += space.x)
            {
                for (float y = -20; y < 20; y += space.y)
                {
                    var point = GetNearestPointOnGrid(new Vector3(x, 0, y));
                    Gizmos.DrawSphere(point, 0.1f);
                }

            }
        }
    }
}
