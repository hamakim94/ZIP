namespace Exoa.Designer
{
    public class UIOpeningItem : UIBaseItem
    {


        override public void OnDestroy()
        {
            base.OnDestroy();


        }


        override public void Start()
        {
            base.Start();


        }


        private void OnChangeWidth(string arg0)
        {
            BroadcastChange(true);
        }



        override public DataModel.FloorMapItem GetData()
        {
            DataModel.FloorMapItem data = base.GetData();

            return data;
        }


        override public void SetData(DataModel.FloorMapItem data)
        {
            base.SetData(data);
        }

    }
}
