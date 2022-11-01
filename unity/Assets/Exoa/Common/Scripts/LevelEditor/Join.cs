using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

namespace Exoa.Designer
{
    public class Join : MonoBehaviour
    {
        public Color gizmoColor;
        public GameObject takenBy;

        private Text debugText;


        void OnDrawGizmos()
        {
            // Draw a yellow sphere at the transform's position
            Gizmos.color = gizmoColor;
            Gizmos.DrawSphere(transform.position, transform.localScale.x);
        }



        public static bool SnapToWalls(LayerMask wallMask, Transform obj, Vector3 mousePos, float wallDetectionRadius, float angleToAvoidWall)
        {
            Transform objLJoint = obj.Find("LJoint");
            Transform objRJoint = obj.Find("RJoint");

            if (objLJoint == null || objRJoint == null)
                return false;

            Vector3 startPos = mousePos.SetY(.1f);
            float angleIncrement = 45;
            angleIncrement = Mathf.Clamp(angleIncrement, 5, 90);
            float angle = 0;
            List<RaycastHit> allHits = new List<RaycastHit>();

            while (angle <= 360)
            {
                Vector3 dir = Quaternion.AngleAxis(angle, Vector3.up) * Vector3.forward;
                RaycastHit[] hits = Physics.RaycastAll(startPos - dir * 0.1f, dir, wallDetectionRadius, wallMask);
                angle += angleIncrement;
                allHits.AddRange(hits);
            }

            RaycastHit selected = default(RaycastHit);
            allHits = allHits.OrderBy(h => Vector3.Distance(h.point, startPos)).ToList();

            foreach (RaycastHit hit in allHits)
            {
                float angleWithCamera = Vector3.Angle(Camera.main.transform.forward, hit.normal);
                selected = hit;
                break;
            }
            if (selected.point != Vector3.zero)
            {
                obj.rotation = Quaternion.LookRotation(selected.normal, Vector3.up);

                Vector3 center = (objLJoint.position + objRJoint.position) * .5f;
                Vector3 gap = center - obj.transform.position;
                obj.transform.position = selected.point.SetY(0) - gap;

                return true;
            }
            return false;
        }

#if FLOORMAP_MODULE && !UCB_HOME_DESIGNER

        private static Exoa.Designer.ProceduralBuilding proceduralBuilding;

        public static bool SnapInsideRoom(Transform obj)
        {

            Transform objLJoint = obj.Find("LJoint");
            Transform objRJoint = obj.Find("RJoint");
            bool modified = false;
            //print("SnapInsideRoom ");

            if (objLJoint == null || objRJoint == null)
                return false;

            if (proceduralBuilding == null)
                proceduralBuilding = GameObject.FindObjectOfType<ProceduralBuilding>();

            List<List<Vector2>> roomPolys = proceduralBuilding.RoomsContoursInner;

            //print("roomPolys:" + roomPolys.Count);

            foreach (List<Vector2> poly in roomPolys)
            {
                bool objIsInPolygon = MathUtils.IsInPolygon(MathUtils.ConvertVector3To2(obj.position, MathUtils.PlanType.XZ), poly);
                //print("objIsInPolygon:" + objIsInPolygon);

                if (!objIsInPolygon) continue;

                bool IsInPolygonL = MathUtils.IsInPolygon(MathUtils.ConvertVector3To2(objLJoint.position, MathUtils.PlanType.XZ), poly);
                bool IsInPolygonR = MathUtils.IsInPolygon(MathUtils.ConvertVector3To2(objRJoint.position, MathUtils.PlanType.XZ), poly);
                //print("IsInPolygonL:" + IsInPolygonL + " IsInPolygonR:" + IsInPolygonR);

                if (!IsInPolygonL)
                {
                    Vector2 newL = MathUtils.ProjectPointPolygon(MathUtils.ConvertVector3To2(objLJoint.position, MathUtils.PlanType.XZ), poly);
                    obj.position += MathUtils.ConvertVector2To3(newL, MathUtils.PlanType.XZ) - objLJoint.position;
                    modified = true;
                }
                if (!IsInPolygonR)
                {
                    Vector2 newR = MathUtils.ProjectPointPolygon(MathUtils.ConvertVector3To2(objRJoint.position, MathUtils.PlanType.XZ), poly);
                    obj.position += MathUtils.ConvertVector2To3(newR, MathUtils.PlanType.XZ) - objRJoint.position;
                    modified = true;
                }
                break;
            }
            return modified;
        }
#else
		private static Collider objRoomBoxCol;

		public static bool SnapInsideRoom(Transform obj)
		{
			Transform objLJoint = obj.Find("LJoint");
			Transform objRJoint = obj.Find("RJoint");
			bool modified = false;
			
			if (objLJoint == null || objRJoint == null)
				return false;

			if (objRoomBoxCol == null)
			{
				GameObject objRoomBox = GameObject.Find("RoomBox");
				if (objRoomBox == null)
				{
					//("No RoomBox object found in room");
					return false;
				}
				objRoomBoxCol = objRoomBox.GetComponent<Collider>();
				if (objRoomBoxCol == null)
				{
					//("No RoomBox collider found on RoomBox");
					return false;
				}
			}
			Bounds bounds = objRoomBoxCol.bounds;

			bool objIsInPolygon = bounds.Contains(obj.position);
			//print("objIsInPolygon:" + objIsInPolygon);

			if (!objIsInPolygon)
				return modified;

			bool IsInPolygonL = bounds.Contains(objLJoint.position);
			bool IsInPolygonR = bounds.Contains(objRJoint.position);
			//print("IsInPolygonL:" + IsInPolygonL + " IsInPolygonR:" + IsInPolygonR);

			if (!IsInPolygonL)
			{
				Vector3 newL = bounds.ClosestPoint(objLJoint.position);
				obj.position += newL - objLJoint.position;
				modified = true;
			}
			if (!IsInPolygonR)
			{
				Vector3 newR = bounds.ClosestPoint(objRJoint.position);
				obj.position += newR - objRJoint.position;
				modified = true;
			}
			return modified;
		}
#endif


        public static bool SnapToJointsLeftRight(LayerMask jointMask, Transform obj, Vector3 mousePos, float jointDetectionRadius)
        {
            Transform objLJoint = obj.Find("LJoint");
            Transform objRJoint = obj.Find("RJoint");

            if (objLJoint == null || objRJoint == null)
                return false;

            Join[] myjoints = obj.GetComponentsInChildren<Join>();
            float minDistance = float.MaxValue;
            Collider bestForeignJoin = null;
            Join bestOwnJoin = null;
            Vector3 offset = Vector3.one * 100;
            Quaternion rot = Quaternion.identity;

            foreach (Join myJoin in myjoints)
            {
                Collider[] joints = Physics.OverlapSphere(myJoin.transform.position, jointDetectionRadius, jointMask.value);
                foreach (Collider c in joints)
                {
                    if (c.transform.parent == obj)
                        continue;
                    if (c.GetComponent<Join>().takenBy != null)
                        continue;
                    float d = Vector3.Distance(c.transform.position, obj.position);
                    if (d < minDistance)
                    {
                        minDistance = d;
                        bestForeignJoin = c;
                        bestOwnJoin = myJoin;
                    }
                }
            }

            if (bestForeignJoin != null)
            {
                obj.rotation = bestForeignJoin.transform.rotation;
                obj.position += bestForeignJoin.transform.position - bestOwnJoin.transform.position;
                return true;

            }

            return false;
        }


        public static bool SnapToJointsFacing(LayerMask jointMask, Transform obj, Vector3 mousePos, float jointDetectionRadius)
        {
            Transform objJoint = obj.Find("FJoint");

            if (objJoint == null)
                return false;

            Join[] myjoints = obj.GetComponentsInChildren<Join>();
            float minDistance = float.MaxValue;
            Collider bestForeignJoin = null;
            Join bestOwnJoin = null;
            Vector3 offset = Vector3.one * 100;
            Quaternion rot = Quaternion.identity;

            foreach (Join myJoin in myjoints)
            {
                Collider[] joints = Physics.OverlapSphere(myJoin.transform.position, jointDetectionRadius, jointMask.value);
                foreach (Collider c in joints)
                {
                    if (c.transform.parent == obj)
                        continue;
                    if (c.transform.name != "FJoint")
                        continue;

                    if (c.GetComponent<Join>().takenBy != null)
                        continue;

                    float dot = Vector3.Dot(c.transform.forward, myJoin.transform.forward);
                    if (dot > -.5f)
                        continue;

                    float d = Vector3.Distance(c.transform.position, obj.position);
                    if (d < minDistance)
                    {
                        minDistance = d;
                        bestForeignJoin = c;
                        bestOwnJoin = myJoin;
                    }
                }
            }

            if (bestForeignJoin != null)
            {
                float rotationBetweenObjAndJoint = GetObjectAngleY(obj.transform) - GetObjectAngleY(bestOwnJoin.transform);
                obj.rotation = bestForeignJoin.transform.rotation
                 * Quaternion.Euler(0, 180 + rotationBetweenObjAndJoint, 0);
                obj.position += bestForeignJoin.transform.position - bestOwnJoin.transform.position;
                return true;

            }

            return false;
        }


        public static float GetObjectAngleY(Transform obj, float angleAddY = 0)
        {
            float angle = Vector3.SignedAngle(obj.forward, Vector3.forward, -Vector3.up);
            angle += angleAddY;
            angle = angle < 0 ? angle + 360 : angle;
            return angle;
        }

    }
}
