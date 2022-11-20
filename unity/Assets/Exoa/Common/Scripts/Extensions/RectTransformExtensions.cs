using UnityEngine;

namespace Exoa.Designer
{
    public static class RectTransformExtensions
    {


        public static Vector3 ScreenPointToRectTransformPosition(this RectTransform rt, Vector3 screenPoint, Camera cam = null)
        {
            Vector2 pos;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(rt, new Vector2(screenPoint.x, screenPoint.y), cam, out pos);

            return pos;
        }


        public static float GetWidth(this RectTransform trans)
        {
            return trans.rect.width;
        }

        public static float GetHeight(this RectTransform trans)
        {
            return trans.rect.height;
        }



        public static void SetSize(this RectTransform trans, Vector2 newSize)
        {
            Vector2 oldSize = trans.rect.size;
            Vector2 deltaSize = newSize - oldSize;
            trans.offsetMin = trans.offsetMin - new Vector2(deltaSize.x * trans.pivot.x, deltaSize.y * trans.pivot.y);
            trans.offsetMax = trans.offsetMax + new Vector2(deltaSize.x * (1f - trans.pivot.x), deltaSize.y * (1f - trans.pivot.y));
        }
        public static void SetHeight(this RectTransform trans, float newSize)
        {
            SetSize(trans, new Vector2(trans.rect.size.x, newSize));
        }








    }
}
