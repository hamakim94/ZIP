using ProceduralToolkit;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Exoa.Designer
{
    public class MathUtils : MonoBehaviour
    {
        public enum PlanType { XY, XZ, YZ };



        public static List<Vector2> GenerateUVs2(List<Vector3> vertices, List<Vector3> normals, float tiling = 5f, float eaveHeight = 3)
        {
            List<Vector2> newUvs = new List<Vector2>(new Vector2[vertices.Count]);
            for (int v = 0; v < vertices.Count; v++)
            {
                var vertex = vertices[v];
                var normal = normals[v];

                // This will make the u axis run along the roof edge
                var uAxis = (new Vector3(-normal.z, 0, normal.x)).normalized;

                // This will make the v axis run up the roof
                var vAxis = Vector3.Cross(uAxis, normal);

                // Translates the UVs so the eaves sit at v = 0
                var eaveCorrection = Vector3.Dot(vAxis, vertex + vAxis * (eaveHeight - vertex.y) / vAxis.y);

                var uv = new Vector2(Vector3.Dot(vertex, uAxis) / tiling, (Vector3.Dot(vAxis, vertex) - eaveCorrection) / tiling);
                //Debug.DrawRay(vertex, uAxis, Color.yellow, 100);
                //Debug.DrawRay(vertex, vAxis, Color.red, 100);
                newUvs[v] = uv;
            }
            //HDLogger.Log("newUvs:" + newUvs.Dump(), HDLogger.LogCategory.Building);
            return newUvs;
        }


        public static List<Vector2> GenerateUVs(List<Vector3> vertices, float xMax, float yMax, PlanType planType, bool autoTiling = true)
        {
            Vector2[] uvAr = new Vector2[vertices.Count];
            List<Vector2> uv = new List<Vector2>(uvAr);
            xMax = autoTiling ? yMax : xMax;

            for (int i = 0; i < vertices.Count; i++)
            {
                if (planType == PlanType.XY)
                    uv[i] = new Vector2(vertices[i].x / (float)xMax, vertices[i].y / (float)yMax);
                else if (planType == PlanType.YZ)
                    uv[i] = new Vector2(vertices[i].z / (float)xMax, vertices[i].y / (float)yMax);
                else if (planType == PlanType.XZ)
                    uv[i] = new Vector2(vertices[i].x / (float)xMax, vertices[i].z / (float)yMax);
            }
            return uv;
        }


        public static Vector2[] GenerateUVs(Vector3[] vertices, float xMax, float yMax, PlanType planType, bool autoTiling = true)
        {
            Vector2[] uv = new Vector2[vertices.Length];
            xMax = autoTiling ? yMax : xMax;

            for (int i = 0; i < vertices.Length; i++)
            {
                if (planType == PlanType.XY)
                    uv[i] = new Vector2(vertices[i].x / (float)xMax, vertices[i].y / (float)yMax);
                else if (planType == PlanType.XZ)
                    uv[i] = new Vector2(vertices[i].x / (float)xMax, vertices[i].z / (float)yMax);
            }
            return uv;
        }


        public static MeshDraft Extrude(List<Vector2> points,
            Vector3 extrusionNormal, float extrusionSize, bool flipFaces)
        {
            points = MathUtils.GetClockwise(points);
            MeshDraft md = new MeshDraft { name = "Borders" };
            Vector3 current, next, p0, p1, p2, p3;
            for (int i = 0; i < points.Count; i++)
            {
                current = points[i];
                next = points[(i + 1) % points.Count];
                p0 = (current);
                p1 = (next);
                p2 = (next + (extrusionNormal * extrusionSize));
                p3 = (current + (extrusionNormal * extrusionSize));

                md.AddQuad(p0, p1, p2, p3, true);
            }
            if (flipFaces)
                md = md.FlipFaces();
            return md;
        }
        public static MeshDraft Extrude(List<Vector3> points,
            MathUtils.PlanType planType,
            Vector3 extrusionNormal, float extrusionSize, bool flipFaces)
        {
            points = MathUtils.GetClockwise(points, planType);
            MeshDraft md = new MeshDraft { name = "Borders" };
            Vector3 current, next, p0, p1, p2, p3;
            for (int i = 0; i < points.Count; i++)
            {
                current = points[i];
                next = points[(i + 1) % points.Count];
                p0 = (current);
                p1 = (next);
                p2 = (next + (extrusionNormal * extrusionSize));
                p3 = (current + (extrusionNormal * extrusionSize));

                md.AddQuad(p0, p1, p2, p3, true);
            }
            if (flipFaces)
                md = md.FlipFaces();
            return md;
        }

        public static bool PointsAreInLine(List<Vector3> list)
        {
            bool result = true;
            for (int i = 1; i < list.Count - 1; i++)
            {
                if (!IsBetweenAB(list[0], list[list.Count - 1], list[i]))
                {
                    result = false;
                    break;
                }
            }
            //Debug.Log("PointsAreInLine :" + result + " points:" + list.Count);
            return result;
        }
        public static bool IsBetweenAB(Vector3 A, Vector3 B, Vector3 testPoint)
        {
            float d1 = Vector3.Dot((B - A).normalized, (testPoint - B).normalized);
            float d2 = Vector3.Dot((A - B).normalized, (testPoint - A).normalized);
            //Debug.Log("IsBetweenAB " + d1 + " " + d2);
            return (d1 == 1 || d1 == -1) && (d2 == 1 || d2 == -1);
        }

        public static List<Vector3> GetClockwise(List<Vector3> points, PlanType planType)
        {
            Vector2 center = ConvertVector3To2(GetCenterPosition(points), planType);
            int amountClockwise = 0;
            Vector2 first, second;
            for (int i = 0; i < points.Count; i++)
            {
                first = ConvertVector3To2(points[i], planType);
                second = ConvertVector3To2(points[(i + 1) % points.Count], planType);
                if (IsClockwise(first, second, center))
                    amountClockwise++;
            }
            bool isClockWise = amountClockwise > points.Count * .5f;

            if (isClockWise)
                return points;
            return points.Reverse<Vector3>().ToList();
        }

        public static List<Vector2> ConvertVector3To2(List<Vector3> vector3, PlanType planType)
        {
            return vector3.Select(v => ConvertVector3To2(v, planType)).ToList();
        }
        public static Vector2 ConvertVector3To2(Vector3 vector3, PlanType planType)
        {
            if (planType == PlanType.XY)
                return new Vector2(vector3.x, vector3.y);
            if (planType == PlanType.XZ)
                return new Vector2(vector3.x, vector3.z);
            return new Vector2(vector3.y, vector3.z);
        }
        public static List<Vector3> ConvertVector2To3(List<Vector2> vec2, PlanType planType)
        {
            return vec2.Select(v => ConvertVector2To3(v, planType)).ToList();
        }
        public static Vector3 ConvertVector2To3(Vector2 vec2, PlanType planType)
        {
            if (planType == PlanType.XY)
                return new Vector3(vec2.x, vec2.y, 0);
            if (planType == PlanType.XZ)
                return new Vector3(vec2.x, 0, vec2.y);
            return new Vector3(0, vec2.x, vec2.y);
        }


        public static List<Vector2> GetClockwise(List<Vector2> points)
        {
            Vector2 center = GetCenterPosition(points);
            int amountClockwise = 0;
            Vector2 first, second;
            for (int i = 0; i < points.Count; i++)
            {
                first = points[i];
                second = points[(i + 1) % points.Count];
                if (IsClockwise(first, second, center))
                    amountClockwise++;
            }
            bool isClockWise = amountClockwise > points.Count * .5f;

            if (isClockWise)
                return points;
            return points.Reverse<Vector2>().ToList();
        }

        /// <summary>
        ///     Returns 1 if first comes before second in clockwise order.
        ///     Returns -1 if second comes before first.
        ///     Returns 0 if the points are identical.
        /// </summary>
        /// <param name="first">First.</param>
        /// <param name="second">Second.</param>
        /// <param name="origin">Origin.</param>
        public static bool IsClockwise(Vector2 first, Vector2 second, Vector2 origin)
        {
            if (first == second)
                return false;

            Vector2 firstOffset = first - origin;
            Vector2 secondOffset = second - origin;

            float angle1 = Mathf.Atan2(firstOffset.x, firstOffset.y);
            float angle2 = Mathf.Atan2(secondOffset.x, secondOffset.y);

            if (angle1 < angle2)
                return true;

            if (angle1 > angle2)
                return false;

            // Check to see which point is closest
            return (firstOffset.sqrMagnitude < secondOffset.sqrMagnitude);
        }

        public static Vector3 GetCenterPosition(List<Vector3> points)
        {
            Bounds bound = new Bounds(points[0], Vector3.zero);
            for (int i = 1; i < points.Count; i++)
            {
                bound.Encapsulate(points[i]);
            }
            return bound.center;
        }

        public static Vector2 GetCenterPosition(List<Vector2> points)
        {
            if (points.Count == 0) return Vector2.zero;

            Bounds bound = new Bounds(points[0], Vector3.zero);
            for (int i = 1; i < points.Count; i++)
            {
                bound.Encapsulate(points[i]);
            }
            return bound.center;
        }

        public static float DistancePointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd, out float angle)
        {
            Vector3 pointOnLine = ProjectPointLine(point, lineStart, lineEnd);
            angle = Mathf.Abs(Vector3.Dot(pointOnLine - point, lineStart - lineEnd));
            return Vector3.Magnitude(pointOnLine - point);
        }

        public static bool IsInPolygon(Vector2 point, List<Vector2> polygon)
        {
            bool result = false;
            if (polygon == null || polygon.Count == 0)
                return false;

            Vector2 a = polygon.Last();
            foreach (Vector2 b in polygon)
            {
                if ((b.x == point.x) && (b.y == point.y))
                    return true;

                if ((b.y == a.y) && (point.y == a.y) && (a.x <= point.x) && (point.x <= b.x))
                    return true;

                if ((b.y < point.y) && (a.y >= point.y) || (a.y < point.y) && (b.y >= point.y))
                {
                    if (b.x + (point.y - b.y) / (a.y - b.y) * (a.x - b.x) <= point.x)
                        result = !result;
                }
                a = b;
            }
            return result;
        }

        // Project /point/ onto a line.
        public static Vector2 ProjectPointPolygon(Vector2 point, List<Vector2> polygon)
        {
            Vector2 bestPosition = Vector3.zero;
            Vector2 pointOnLine = Vector3.zero;
            float smallestDistance = float.MaxValue;
            float distance;

            if (polygon.Count < 3)
                return Vector3.zero;

            for (int i = 0; i < polygon.Count; i++)
            {
                int j = (i + 1) % polygon.Count;
                Vector2 first = polygon[i];
                Vector2 second = polygon[j];
                pointOnLine = MathUtils.ProjectPointLine(point, first, second);
                distance = Vector3.Magnitude(pointOnLine - point);

                if (distance < smallestDistance)
                {
                    smallestDistance = distance;
                    bestPosition = pointOnLine;
                }

            }
            return bestPosition;
        }
        public static Vector3 ProjectPointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd)
        {
            Vector3 relativePoint = point - lineStart;
            Vector3 lineDirection = lineEnd - lineStart;
            float length = lineDirection.magnitude;
            Vector3 normalizedLineDirection = lineDirection;
            if (length > .000001f)
                normalizedLineDirection /= length;

            float dot = Vector3.Dot(normalizedLineDirection, relativePoint);
            dot = Mathf.Clamp(dot, 0.0F, length);

            return lineStart + normalizedLineDirection * dot;
        }
    }
}
