using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace Exoa.Designer
{
    public class ControlPoint : MonoBehaviour
    {
        [HideInInspector]
        public ControlPointsController cpc;

        public TMP_Text label;
        public Transform canvas;
        public Material ghostMaterial;
        public Material normalMaterial;
        protected SphereCollider sphereCollider;
        protected MeshRenderer mr;
        protected LineRenderer lr;

        public bool usePosition = true;
        public bool enableDashedLine = true;
        public bool enableWidthLine;
        public float width = 2f;
        public Vector3 dir;

        public Vector2 normalizedPosition;

        public bool isGhost;
        protected float textLineSpace = .2f;
        protected Transform prevCP;
        protected Transform nextCP;

        virtual protected void OnDestroy()
        {
            cpc.OnPathChanged -= OnPathChanged;
        }

        virtual protected void Start()
        {
            sphereCollider = GetComponent<SphereCollider>();
            mr = GetComponent<MeshRenderer>();
            cpc.OnPathChanged += OnPathChanged;
            SetGhost(isGhost);
        }

        virtual protected void OnPathChanged()
        {
            UpdateLabel();
        }

        virtual public void SetGhost(bool isGhost)
        {
            this.isGhost = isGhost;

            if (sphereCollider != null)
            {
                sphereCollider.isTrigger = isGhost;
                sphereCollider.enabled = !isGhost;
            }
            if (mr != null)
                mr.material = isGhost ? ghostMaterial : normalMaterial;


            if (enableWidthLine)
            {
                if (lr == null) lr = gameObject.AddComponent<LineRenderer>();
                lr.material = Resources.Load<Material>("Materials/OpeningLine");
                lr.numCapVertices = lr.numCornerVertices = 6;
                lr.textureMode = LineTextureMode.Tile;
                lr.widthMultiplier = .25f;
            }
            else if (isGhost && enableDashedLine)
            {
                if (lr == null) lr = gameObject.AddComponent<LineRenderer>();
                lr.material = Resources.Load<Material>("Materials/DashedLine");
                lr.numCapVertices = lr.numCornerVertices = 6;
                lr.textureMode = LineTextureMode.Tile;
                lr.widthMultiplier = .15f;
            }
            else if (lr != null && !enableWidthLine && !enableDashedLine)
            {
                Destroy(lr);
            }
        }
        virtual public void SetNormalizedPosition(Vector2 normalizedPos)
        {
            normalizedPosition = normalizedPos;
            UpdateLabel();
        }



        virtual public void Update()
        {
            if (enableWidthLine && lr != null)
            {
                lr.positionCount = 2;
                lr.SetPosition(0, transform.position + (dir * width * .5f));
                lr.SetPosition(1, transform.position - (dir * width * .5f));
            }
            Transform previousPrevCP = prevCP;
            Transform previousNextCP = nextCP;

            if (isGhost && cpc != null)
            {
                int bestPostion = cpc.GetBestPositionInList(transform.position);
                List<Vector3> positions = new List<Vector3>();
                if (bestPostion > 0)
                {
                    prevCP = cpc.transform.GetChild(bestPostion - 1);
                    positions.Add(prevCP.position);
                }
                else if (bestPostion == 0 && cpc.transform.childCount > 0)
                {
                    prevCP = cpc.transform.GetChild(cpc.transform.childCount - 1);
                    positions.Add(prevCP.position);
                }
                else prevCP = null;
                positions.Add(transform.position);
                if (bestPostion < cpc.transform.childCount)
                {
                    nextCP = cpc.transform.GetChild(bestPostion);
                    positions.Add(nextCP.position);
                }
                else
                    nextCP = null;

                if (lr != null && enableDashedLine)
                {
                    lr.positionCount = positions.Count;
                    lr.SetPositions(positions.ToArray());
                }
            }
            else if (!isGhost)
            {
                int currentIndex = transform.GetSiblingIndex();
                if (currentIndex > 0)
                {
                    prevCP = transform.parent.GetChild(currentIndex - 1);
                }
                else if (currentIndex == 0 && transform.parent.childCount > 2)
                {
                    prevCP = transform.parent.GetChild(transform.parent.childCount - 1);
                }
                else prevCP = null;
                if (currentIndex < transform.parent.childCount - 1)
                {
                    nextCP = transform.parent.GetChild(currentIndex + 1);
                }
                else nextCP = null;
            }
            if (previousPrevCP != prevCP || previousNextCP != nextCP)
            {
                UpdateLabel();
            }
        }

        virtual public void UpdateLabel()
        {

            if ((prevCP == null || prevCP.parent != transform.parent || (cpc != null && !cpc.drawPath)) && label.gameObject.activeSelf)
            {
                canvas.gameObject.SetActive(false);
            }
            else if (prevCP != null)
            {
                if (!canvas.gameObject.activeSelf)
                    canvas.gameObject.SetActive(true);
                float distance = Vector3.Distance(prevCP.position, transform.position);
                label.text = distance.ToString("0.00") + "m";

                Vector3 vec = (prevCP.position - transform.position);
                Vector3 up = Vector3.up;
                Vector3 perp = Vector3.Cross(vec.normalized, up).normalized;

                canvas.position = transform.position + vec * .5f + perp * textLineSpace + up * 0.01f;
                canvas.rotation = Quaternion.LookRotation(-up, vec) * Quaternion.Euler(0, 0, 90);
            }
        }

        public Vector3 GetNormalizedPostion(Grid grid)
        {
            return grid.GetNormalizedPosition(transform.position);
        }
    }
}
