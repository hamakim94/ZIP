using Exoa.Effects;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class OutlineHandler : MonoBehaviour
    {
        [HideInInspector]
        public bool isGhost = false;
        protected Dictionary<string, Material> materials;
        protected List<Outlinable> outlines;
        protected MeshRenderer[] renderers;
        protected bool showingOutlines;

        virtual protected void Start()
        {
            outlines = new List<Outlinable>();
            materials = new Dictionary<string, Material>();
            renderers = GetComponentsInChildren<MeshRenderer>();

            foreach (MeshRenderer r in renderers)
            {
                if (r.gameObject.name == "Collider")
                    continue;

                if (materials.ContainsKey(r.name) == false)
                    materials.Add(r.name, r.material);

                Outlinable outline = r.GetComponent<Outlinable>();
                if (outline == null)
                {
                    outline = r.gameObject.AddComponent<Outlinable>();
                    outline.AddAllChildRenderersToRenderingList(RenderersAddingMode.MeshRenderer);
                }
                outline.enabled = showingOutlines;
                outlines.Add(outline);

            }
        }

        virtual protected void OnDestroy()
        {
            renderers = null;
            outlines = null;
            materials = null;
        }


        public void Unghost()
        {
            if (renderers != null)
                foreach (MeshRenderer r in renderers)
                {
                    Material mat = null;
                    materials.TryGetValue(r.name, out mat);
                    if (mat != null) r.material = mat;
                }
        }

        public void Ghost(Material transparentMaterial, float alpha)
        {
            if (renderers != null)
                foreach (MeshRenderer r in renderers)
                {
                    r.material = transparentMaterial;
                    r.material.color = new Color(1, 1, 1, alpha);
                }
        }

        public void ShowOutline(bool show, int colorIndex = 0)
        {
            //print("ShowOutline outlines:" + outlines + " show:" + show);
            showingOutlines = show;
            if (outlines != null)
            {
                //print("ShowOutline:" + outlines.Count + " show:" + show);
                foreach (Outlinable r in outlines)
                {
                    r.enabled = show;
                }
            }
        }

    }
}
