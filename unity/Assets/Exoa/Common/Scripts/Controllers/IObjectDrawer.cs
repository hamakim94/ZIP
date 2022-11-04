using UnityEngine;

namespace Exoa.Designer
{
    public interface IObjectDrawer
    {
        GameObject GO { get; }

#if FLOORMAP_MODULE
        ControlPointsController Cpc { get; set; }
        
        UIBaseItem UI { get; set; }
        Color DrawingColor { get; set; }

        void Init();
        void Build(DataModel.FloorMapItem data);
#endif
    }
}
