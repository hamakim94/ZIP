using Exoa.Events;
using Exoa.Json;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class BaseSerializable : BaseReader, IDataSerializer
    {


        override public object DeserializeToScene(string str)
        {
            throw new NotImplementedException();
        }

        virtual public GameEditorEvents.FileType GetFileType()
        {
            throw new NotImplementedException();
        }

        override public string GetFolderName()
        {
            throw new NotImplementedException();
        }

        virtual public bool IsSceneEmpty()
        {
            throw new NotImplementedException();
        }

        virtual public string SerializeEmpty(string name)
        {
            throw new NotImplementedException();
        }

        virtual public string SerializeScene()
        {
            throw new NotImplementedException();
        }

    }
}
