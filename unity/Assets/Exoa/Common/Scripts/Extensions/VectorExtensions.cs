using UnityEngine;

public static class VectorExtensions
{

    public static string Dump(this Vector3 v)
    {
        return "x:" + v.x + " y:" + v.y + " z:" + v.z;
    }

    public static Vector3 Scale2(this Vector3 current, Vector3 scale)
    {
        current.Scale(scale);
        return current;
    }
    public static Vector2 SetX(this Vector2 v, float x)
    {
        //Debug.Log("SetX " + v + " " + x);
        Vector2 newv = new Vector2(x, v.y);
        return newv;
    }
    public static Vector2 SetY(this Vector2 v, float y)
    {
        Vector2 newv = new Vector2(v.x, y);
        return newv;
    }
    public static Vector3 SetZ(this Vector2 v, float z)
    {
        Vector3 newv = new Vector3(v.x, v.y, z);
        return newv;
    }

    public static Vector3 SetX(this Vector3 v, float x)
    {
        Vector3 newv = v;
        newv.x = x;
        return newv;
    }
    public static Vector3 SetY(this Vector3 v, float y)
    {
        Vector3 newv = v;
        newv.y = y;
        return newv;
    }
    public static Vector3 SetZ(this Vector3 v, float z)
    {
        Vector3 newv = v;
        newv.z = z;
        return newv;
    }


    /// <summary>
    /// Snap Vector3 to nearest grid position
    /// </summary>
    /// <param name="vector3">Sloppy position</param>
    /// <param name="gridSize">Grid size</param>
    /// <returns>Snapped position</returns>
    public static Vector3 Snap(this Vector3 vector3, float gridSize = 1.0f)
    {
        return new Vector3(
            Mathf.Round(vector3.x * gridSize) / gridSize,
            Mathf.Round(vector3.y * gridSize) / gridSize,
            Mathf.Round(vector3.z * gridSize) / gridSize);
    }
    /// <summary>
    /// Snap Vector3 to nearest grid position with offset
    /// </summary>
    /// <param name="vector3">Sloppy position</param>
    /// <param name="gridSize">Grid size</param>
    /// <returns>Snapped position</returns>
    public static Vector3 SnapOffset(this Vector3 vector3, Vector3 offset, float gridSize = 1.0f)
    {
        Vector3 snapped = vector3 + offset;
        snapped = new Vector3(
            Mathf.Round(snapped.x / gridSize) * gridSize,
            Mathf.Round(snapped.y / gridSize) * gridSize,
            Mathf.Round(snapped.z / gridSize) * gridSize);
        return snapped - offset;
    }

    public static Vector3 Perpendicular(this Vector3 v)
    {
        return Vector3.Cross(v, Vector3.up).normalized;
    }
}
