namespace Exoa.Designer
{
    public interface IDataReader
    {
        string GetFolderName();
        object DeserializeToScene(string str);
    }
}
