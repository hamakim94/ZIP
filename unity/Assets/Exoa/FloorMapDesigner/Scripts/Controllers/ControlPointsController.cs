using Exoa.Events;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Exoa.Designer
{
    public class ControlPointsController : MonoBehaviour
    {
        protected static ControlPoint ghostPoint;
        protected ControlPoint draggedPoint;
        public GameObject prefabPoint;
        protected Exoa.Designer.Grid grid;
        protected LineRenderer lr;
        protected uint globalIndex = 0;
        protected bool isDrawing = true;
        public bool snapToGrid = true;
        public bool snapToPathLines = false;
        protected List<ControlPoint> list;

        public delegate void OnControlPointEventHandler(ControlPoint cp);
        public GameEditorEvents.OnGameEditorEventHandler OnControlPointsChanged;
        public GameEditorEvents.OnGameEditorEventHandler OnPathChanged;
        public GameEditorEvents.OnGameEditorEventBoolHandler OnRequestDrawMode;
        public static GameEditorEvents.OnGameEditorEventHandler OnRequestPathRedraw;

        public Color[] randomColors;
        [HideInInspector]
        public Color pathColor;
        public bool drawPath;
        public bool drawWidth;
        protected float width;

        public bool IsDrawing
        {
            get
            {
                return isDrawing;
            }

            set
            {
                HDLogger.Log("[CPC] Set IsDrawing:" + value, HDLogger.LogCategory.Floormap);
                isDrawing = value;
                if (isDrawing)
                {
                    CreateGhost();
                    ShowPoints(true);
                }
                else
                {
                    ShowPoints(false);
                }
            }
        }



        public float Width
        {
            get
            {
                return width;
            }

            set
            {
                width = value;
                List<ControlPoint> list = GetPointsList();

                foreach (ControlPoint cp in list)
                {
                    cp.width = width;
                }
                if (ghostPoint != null)
                    ghostPoint.width = width;
            }
        }

        void OnDestroy()
        {
            GameEditorEvents.OnRequestClearAll -= OnRequestClearAll;
            GameEditorEvents.OnFileLoaded -= OnFileLoaded;
            OnControlPointsChanged -= CreatePathVisualization;
            OnRequestPathRedraw -= CreatePathVisualization;
        }
        void Awake()
        {
            UIBaseItem[] cpcs = GameObject.FindObjectsOfType<UIBaseItem>();
            int id = cpcs.Length % randomColors.Length;
            pathColor = randomColors[id];
            //print("cpcs.Length :" + cpcs.Length);
            //print("pathColor :" + pathColor);
        }
        void Start()
        {
            lr = GetComponent<LineRenderer>();
            if (lr != null)
                lr.startColor = lr.endColor = pathColor;

            grid = GetGrid();

            CreateGhost();
            ghostPoint.gameObject.SetActive(isDrawing);
            HDLogger.Log("[CPC] Start Ghost active:" + isDrawing, HDLogger.LogCategory.Floormap);

            GameEditorEvents.OnRequestClearAll += OnRequestClearAll;
            GameEditorEvents.OnFileLoaded += OnFileLoaded;
            OnControlPointsChanged += CreatePathVisualization;
            OnRequestPathRedraw += CreatePathVisualization;
        }

        protected void OnFileLoaded(GameEditorEvents.FileType fileType)
        {
            if (fileType == GameEditorEvents.FileType.FloorMapFile)
            {
                RequestDrawMode(false);
            }
        }

        protected void ShowPoints(bool v)
        {
            List<ControlPoint> list = GetPointsList();
            foreach (ControlPoint cp in list)
            {
                cp.gameObject.SetActive(v);
            }
        }

        public void ReSnapControlPoints()
        {
            List<ControlPoint> list = GetPointsList();
            Vector3 bestDir = Vector3.zero;
            foreach (ControlPoint cp in list)
            {
                Vector3 worldPoint = cp.transform.position;
                if (snapToGrid)
                    worldPoint = SnapToGrid(worldPoint);
                if (snapToPathLines)
                    worldPoint = SnapToAnyPathLine(worldPoint, out bestDir);

                worldPoint.y = 0;
                //print("bestDir:" + bestDir);
                Vector2 normalizedPos = grid.GetNormalizedPosition(worldPoint);
                cp.SetNormalizedPosition(normalizedPos);
                cp.dir = bestDir;
                cp.transform.position = worldPoint;

            }
        }

        public Grid GetGrid()
        {
            //return gameObject.transform.parent.GetComponentInChildren<Exoa.Designer.Grid>();
            return GameObject.FindObjectOfType<Grid>();
        }

        public void CreatePathVisualization()
        {
            if (lr == null)
                lr = GetComponent<LineRenderer>();

            if (lr == null)
                return;

            if (drawPath)
            {
                //print("CreatePathVisualization");
                list = GetPointsList();

                int ex = 0;
                lr.positionCount = (list.Count + 1);

                foreach (ControlPoint cp in list)
                {
                    if (cp.enabled == false)
                        continue;

                    lr.SetPosition(ex++, cp.transform.position);
                }
                if (list.Count > 0)
                    lr.SetPosition(ex, list[0].transform.position);
            }
            OnPathChanged?.Invoke();
        }

        public List<ControlPoint> GetPointsList()
        {
            if (gameObject == null)
                return new List<ControlPoint>();

            ControlPoint[] cps = gameObject.GetComponentsInChildren<ControlPoint>(true);
            list = new List<ControlPoint>(cps);
            list = list.OrderBy(s => s.transform.GetSiblingIndex()).ToList();
            return list;
        }

        public List<Vector3> GetPointsWorldPositionList()
        {
            List<Vector3> list = new List<Vector3>();
            list = GetPointsList().Select(s => s.transform.position).ToList();
            return list;
        }

        public List<Vector3> GetPointsDirectionList()
        {
            List<Vector3> list = new List<Vector3>();
            list = GetPointsList().Select(s => s.dir).ToList();
            return list;
        }
        public List<Vector3> GetNormalizedPositionList()
        {
            List<Vector3> list = new List<Vector3>();
            list = GetPointsList().Select(s => (Vector3)s.GetNormalizedPostion(grid)).ToList();
            return list;
        }
        public Vector3 GetStartPosition()
        {
            List<ControlPoint> list = GetPointsList();
            if (list.Count > 0)
            {
                Vector3 worldPos = grid.GetWorldPosition(list[0].normalizedPosition);
                Vector3 localPos = grid.GetLocalPosition(list[0].normalizedPosition, transform);
                return localPos;
            }
            return Vector3.zero;
        }

        protected void OnRequestClearAll(bool clearFloorsUI, bool clearFloorMapUI, bool clearScene)
        {
            if (!clearScene) return;

            //if (ghostPoint != null)
            //Destroy(ghostPoint.gameObject);
            transform.ClearChildren();

        }

        void Update()
        {
            //print("IsOverUI" + Inputs.IsOverUI + " ghostPoint:" + ghostPoint);

            if (HDInputs.IsOverUI)
                return;

            if (ghostPoint == null)
                return;


            Vector3 bestDir = Vector3.zero;
            Vector3 mouseWorld = Vector3.zero;
            Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            bool mouseHitSurface = false;
            if (Physics.Raycast(r, out hit))
            {
                mouseWorld = hit.point;
                mouseHitSurface = true;
            }
            Vector3 gridWorldPoint = mouseWorld;
            if (snapToGrid)
                gridWorldPoint = SnapToGrid(gridWorldPoint);
            if (snapToPathLines)
                gridWorldPoint = SnapToAnyPathLine(gridWorldPoint, out bestDir);

            gridWorldPoint.y = 0;

            Vector2 normalizedPos = grid.GetNormalizedPosition(gridWorldPoint);
            if (IsDrawing)
            {
                ghostPoint.SetNormalizedPosition(normalizedPos);
                ghostPoint.dir = bestDir;
                ghostPoint.transform.position = gridWorldPoint;
                //print("gridWorldPoint:" + gridWorldPoint);

                if (draggedPoint != null)
                {
                    draggedPoint.SetNormalizedPosition(normalizedPos);
                    draggedPoint.dir = bestDir;
                    draggedPoint.transform.position = gridWorldPoint;
                    CreatePathVisualization();
                }
            }
            if (Input.GetMouseButtonDown(0))
            {
                bool altPressed = HDInputs.AltPressed();

                if (mouseHitSurface)
                {
                    ControlPoint cp = FindControlPointObject(hit.collider.gameObject);
                    if (altPressed && cp != null && cp != ghostPoint && cp.transform.parent == transform)
                    {
                        RemoveControlPoint(cp);
                    }
                    else if (!altPressed && cp != null && cp != ghostPoint && cp.transform.parent == transform)
                    {
                        RequestDrawMode();
                        DragPoint(cp);
                    }
                    else if ((cp == null || cp == ghostPoint) && IsDrawing)
                    {
                        cp = CreateControlPointBasedOnGhost();
                        // removed to prevent the point from being edited when clicking to spawn it
                        //DragPoint(cp);
                    }
                    else if (cp == null && !IsDrawing && drawPath && AppController.Instance.State == AppController.States.Idle)
                    {
                        if (IsInsidePoints(mouseWorld))
                        {
                            RequestDrawMode();
                        }
                    }
                }
                //HideInfoPopup();
            }
            else if (HDInputs.ReleaseDrag())
            {
                DropPoint();
            }
            else if (HDInputs.OptionPress())
            {
                if (mouseHitSurface && AppController.Instance.State == AppController.States.Idle)
                {
                    ControlPoint cp = FindControlPointObject(hit.collider.gameObject);
                    if (cp != null && cp != ghostPoint)
                    {
                        RequestDrawMode();
                        ShowInfoPopup(cp);
                    }
                    else if (cp == null && !IsDrawing && drawPath)
                    {
                        if (IsInsidePoints(mouseWorld))
                        {
                            ShowInfoPopup(mouseWorld);
                        }
                    }
                    else
                    {
                        HideInfoPopup();
                    }
                }
                else
                {
                    //HideInfoPopup();
                }
            }


        }

        protected bool IsInsidePoints(Vector3 mouseWorld)
        {
            List<Vector2> poly = MathUtils.ConvertVector3To2(GetPointsWorldPositionList(), MathUtils.PlanType.XZ);
            Vector2 point = MathUtils.ConvertVector3To2(mouseWorld, MathUtils.PlanType.XZ);
            bool mouseIsInRoom = MathUtils.IsInPolygon(point, poly);
            //Debug.Log("mouseIsInRoom:" + mouseIsInRoom);
            return mouseIsInRoom;
        }

        public void HideGhost()
        {
            HDLogger.Log("[CPC] Hide Ghost", HDLogger.LogCategory.Floormap);
            if (ghostPoint != null)
                ghostPoint.gameObject.SetActive(false);
        }

        protected Vector3 SnapToAnyPathLine(Vector3 worldPoint, out Vector3 bestDir)
        {
            UIBaseItem[] items = GameObject.FindObjectsOfType<UIBaseItem>();

            float smallestDistance = float.MaxValue;
            Vector3 bestPosition = Vector3.zero, position;
            Vector3 dir;
            bestDir = Vector3.zero;

            for (int i = 0; i < items.Length; i++)
            {

                if (items[i].sequencingItemType == DataModel.FloorMapItemType.Room && items[i].cpc != null)
                {
                    float distance = 0;
                    position = items[i].cpc.SnapToPathLine(worldPoint, out distance, out dir);

                    //print("dir:" + dir);
                    if (distance < smallestDistance)
                    {
                        bestPosition = position;
                        bestDir = dir;
                        smallestDistance = distance;
                        //print("bestDir:" + dir);
                    }
                }
            }
            return bestPosition;
        }

        protected Vector3 SnapToGrid(Vector3 mouseWorld)
        {
            return FindClosestToThelastCreatedPoint(grid.GetNearestPointOnGrid(mouseWorld), list);
            //return (grid.GetNearestPointOnGrid(mouseWorld));
        }

        public static Vector3 FindClosestToThelastCreatedPoint(Vector3 snappedToGrid, List<ControlPoint> controlPoints, ControlPoint cp = null)
        {
            List<ControlPoint> controlPointsClone = new List<ControlPoint>();
            controlPointsClone.AddRange(controlPoints);
            List<ControlPoint> controlPointsManuplateClone = new List<ControlPoint>();
            controlPointsManuplateClone.AddRange(controlPoints);
            if (controlPointsManuplateClone.Count < 1)
            {
                return snappedToGrid;
            }
            if (cp != null)
            {
                controlPointsManuplateClone.Remove(cp);
            }
            ControlPoint selectedFirstPoint = null;
            float minimumDistance = Mathf.Infinity;

            foreach (ControlPoint point in controlPointsManuplateClone)
            {
                float distance = Vector3.Distance(snappedToGrid, point.transform.position);
                if (distance < minimumDistance)
                {
                    minimumDistance = distance;
                    selectedFirstPoint = point;
                }
            }
            Vector3 compareSnappedPos = snappedToGrid;
            if (selectedFirstPoint != null)
            {
                ControlPoint firstControlPoint = selectedFirstPoint;
                controlPointsManuplateClone.Remove(firstControlPoint);
                compareSnappedPos = CompareVectors(snappedToGrid, selectedFirstPoint.transform);

            }

            string lastPointChanged = "na";
            if (compareSnappedPos.x != snappedToGrid.x)
            {
                lastPointChanged = "x";
            }
            if (compareSnappedPos.z != snappedToGrid.z)
            {
                lastPointChanged = "z";
            }



            ControlPoint selectedSecondPoint = null;
            float minimumDistanceSecond = Mathf.Infinity;

            foreach (ControlPoint point in controlPointsManuplateClone)
            {
                float distance = Vector3.Distance(snappedToGrid, point.transform.position);
                if (distance < minimumDistanceSecond)
                {
                    minimumDistanceSecond = distance;
                    selectedSecondPoint = point;
                }
            }

            if (selectedSecondPoint != null)
            {
                ControlPoint secondControlPoint = selectedSecondPoint;

            }

            if (controlPointsClone.Count >= 3)
            {
                Vector3 secondPointSnappedPos = CompareVectors(snappedToGrid, selectedSecondPoint.transform);
                if (lastPointChanged == "x")
                {
                    compareSnappedPos = new Vector3(compareSnappedPos.x, compareSnappedPos.y, secondPointSnappedPos.z);
                }
                else if (lastPointChanged == "z")
                {
                    compareSnappedPos = new Vector3(secondPointSnappedPos.x, compareSnappedPos.y, compareSnappedPos.z);
                }

            }
            return compareSnappedPos;
        }
        public static Vector3 CompareVectors(Vector3 snappedToGrid, Transform controlPoint, ControlPoint cp = null)
        {
            Vector3 snappedXPos = new Vector3(controlPoint.transform.position.x, snappedToGrid.y, snappedToGrid.z);
            float xDistance = Vector3.Distance(snappedXPos, snappedToGrid);
            Vector3 snappedZPos = new Vector3(snappedToGrid.x, snappedToGrid.y, controlPoint.transform.position.z);
            float zDistance = Vector3.Distance(snappedZPos, snappedToGrid);
            Vector3 compareSnappedPos = snappedToGrid;
            float toCompareDistance = 0.35f;
            if (cp != null)
            {
                toCompareDistance = 1f;
            }
            if (xDistance > zDistance)
            {
                if (zDistance <= toCompareDistance)
                {
                    compareSnappedPos = new Vector3(compareSnappedPos.x, compareSnappedPos.y, controlPoint.transform.position.z);
                }
            }
            else
            {
                if (xDistance <= toCompareDistance)
                {
                    compareSnappedPos = new Vector3(controlPoint.transform.position.x, compareSnappedPos.y, compareSnappedPos.z);
                }
            }

            return compareSnappedPos;
        }



        protected void RequestDrawMode(bool request = true)
        {
            //print("RequestDrawMode isDrawing:" + IsDrawing);
            OnRequestDrawMode?.Invoke(request);
        }

        protected void DropPoint()
        {
            if (draggedPoint != null)
            {
                draggedPoint = null;
                OnControlPointsChanged?.Invoke();
                CameraEvents.OnRequestButtonAction?.Invoke(CameraEvents.Action.DisableCameraMoves, false);
            }
        }

        protected void DragPoint(ControlPoint cp)
        {
            //Debug.Log("DragPoint " + cp);
            draggedPoint = cp;
            CameraEvents.OnRequestButtonAction?.Invoke(CameraEvents.Action.DisableCameraMoves, true);
        }

        protected void ShowInfoPopup(Vector3 mouseWorld)
        {
            ControlPointInfoPopup.Instance.Show(this, mouseWorld, true);
        }

        protected void ShowInfoPopup(ControlPoint cp)
        {
            ControlPointInfoPopup.Instance.Show(cp, true);
        }

        protected void HideInfoPopup()
        {
            ControlPointInfoPopup.Instance.Hide();
        }
        public void CreateGhost()
        {
            if (ghostPoint == null)
            {
                GameObject go = Instantiate(prefabPoint);
                go.name = "GhostPoint";
                ghostPoint = go.GetComponent<ControlPoint>();
            }
            ghostPoint.gameObject.SetActive(true);
            ghostPoint.cpc = this;
            ghostPoint.enableDashedLine = drawPath;
            ghostPoint.enableWidthLine = drawWidth;
            ghostPoint.width = width;
            ghostPoint.SetGhost(true);
            HDLogger.Log("[CPC] Create Ghost active:true", HDLogger.LogCategory.Floormap);
        }
        public ControlPoint CreateControlPointBasedOnGhost(bool sendEvent = true)
        {
            int bestIndex = GetBestPositionInList(ghostPoint.transform.position);
            GameObject copy = Instantiate(prefabPoint, ghostPoint.transform.position, Quaternion.identity, transform);
            ControlPoint copyCP = copy.GetComponent<ControlPoint>();
            copyCP.cpc = this;
            copyCP.dir = ghostPoint.dir;
            copyCP.normalizedPosition = ghostPoint.normalizedPosition;
            copyCP.usePosition = (ghostPoint.usePosition);
            copyCP.enableWidthLine = drawWidth;
            copyCP.width = width;
            copyCP.isGhost = (false);
            copyCP.UpdateLabel();
            copyCP.gameObject.name = "CP" + globalIndex++;
            copyCP.transform.SetSiblingIndex(bestIndex);
            ghostPoint.SetGhost(true);
            if (sendEvent)
            {
                OnControlPointsChanged?.Invoke();
            }
            return copyCP;
        }

        public Vector3 SnapToPathLine(Vector3 newPointPosition, out float smallestDistance, out Vector3 bestDir)
        {
            Vector3 bestPosition = Vector3.zero;
            bestDir = Vector3.zero;
            Vector3 pointOnLine = Vector3.zero;
            smallestDistance = float.MaxValue;
            float distance;

            if (transform.childCount < 2)
                return Vector3.zero;

            for (int i = 0; i < transform.childCount; i++)
            {
                int j = (i + 1) % transform.childCount;
                Transform first = transform.GetChild(i);
                Transform second = transform.GetChild(j);
                pointOnLine = MathUtils.ProjectPointLine(newPointPosition, first.position, second.position);
                distance = Vector3.Magnitude(pointOnLine - newPointPosition);

                if (distance < smallestDistance)
                {
                    smallestDistance = distance;
                    bestPosition = pointOnLine;
                    bestDir = (second.position - first.position).normalized;
                    //print("set bestDir:" + bestDir);
                    //print("set best index for now:" + bestIndex);
                }

            }
            return bestPosition;
        }

        public int GetBestPositionInList(Vector3 newPointPosition)
        {
            int bestIndex = transform.childCount;
            float smallestDistance = float.MaxValue;
            float bestAngle = 0f;
            float distance, angle;

            List<Vector3> list = GetPointsWorldPositionList();
            list.Add(newPointPosition);
            //if (transform.childCount < 3 || MathUtils.PointsAreInLine(list))
            if (transform.childCount < 3)
                return bestIndex;

            for (int i = 0; i < transform.childCount; i++)
            {
                int j = (i + 1) % transform.childCount;
                Transform first = transform.GetChild(i);
                Transform second = transform.GetChild(j);
                distance = MathUtils.DistancePointLine(newPointPosition, first.position, second.position, out angle);
                if (distance < smallestDistance)
                {
                    smallestDistance = distance;
                    bestAngle = angle;
                    bestIndex = second.GetSiblingIndex();
                    //print("set best index for now:" + bestIndex);
                }
                if (distance == smallestDistance)
                {
                    //print("Same distance, check angle now bestAngle:" + bestAngle + " angle:" + angle);
                    if (angle < bestAngle)
                    {
                        smallestDistance = distance;
                        bestAngle = angle;
                        bestIndex = second.GetSiblingIndex();
                        //print("set best index for now:" + bestIndex);
                    }
                }
            }
            //print("bestIndex:" + bestIndex);
            return bestIndex;
        }

        public void Mirror(bool horizontal)
        {
            List<ControlPoint> cps = GetPointsList();
            for (int i = 0; i < cps.Count; i++)
            {
                if (horizontal)
                {
                    float x = cps[i].normalizedPosition.x;
                    cps[i].normalizedPosition.x = (0.5f - x) * 2 + x;
                }
                else
                {
                    float y = cps[i].normalizedPosition.y;
                    cps[i].normalizedPosition.y = (0.5f - y) * 2 + y;
                }
                Vector3 worldPos = grid.GetWorldPosition(cps[i].normalizedPosition);
                worldPos.y = 0;
                cps[i].transform.position = worldPos;
                cps[i].UpdateLabel();
            }
            OnControlPointsChanged?.Invoke();
        }

        public ControlPoint CreateControlPointBasedOnNormalizedPosition(Vector3 normalizedPosition, bool useThickness = false, uint index = uint.MaxValue, bool sendEvent = true)
        {
            //print("CreateControlPointBasedOnNormalizedPosition useThickness:" + useThickness);
            if (grid == null)
                grid = GetGrid();

            Vector3 worldPos = grid.GetWorldPosition(normalizedPosition);
            worldPos.y = 0;

            GameObject copy = Instantiate(prefabPoint, worldPos, Quaternion.identity, transform);
            ControlPoint copyCP = copy.GetComponent<ControlPoint>();
            copyCP.cpc = this;
            copyCP.normalizedPosition = normalizedPosition;
            copyCP.usePosition = true;
            copyCP.enableWidthLine = drawWidth;
            copyCP.width = width;
            copyCP.isGhost = (false);
            copyCP.UpdateLabel();
            copyCP.gameObject.name = "CP" + index;
            globalIndex = index + 1;
            if (sendEvent)
            {
                OnControlPointsChanged?.Invoke();
            }
            return copyCP;
        }
        public void RemoveControlPoint(ControlPoint cp)
        {
            cp.transform.parent = null;
            cp.enabled = false;
            cp.gameObject.DestroyUniversal();
            OnControlPointsChanged?.Invoke();
            OnPathChanged?.Invoke();
        }

        public static ControlPoint FindControlPointObject(GameObject go)
        {
            return go.GetComponentInParent<ControlPoint>();

        }
    }
}
