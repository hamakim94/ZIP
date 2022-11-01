using Exoa.Events;

namespace Exoa.Designer
{
    public interface IDataSerializer
    {
        string GetFolderName();
        string SerializeScene();
        string SerializeEmpty(string name);
        bool IsSceneEmpty();
        object DeserializeToScene(string str);
        GameEditorEvents.FileType GetFileType();
    }
}
