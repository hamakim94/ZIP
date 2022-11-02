using System;
using System.Collections.Generic;
using UnityEngine;

namespace Exoa.Designer
{
    public class BaseReader : MonoBehaviour, IDataReader
    {


        protected List<GameObject> floorContainers;

        virtual public object DeserializeToScene(string str)
        {
            throw new NotImplementedException();
        }

        virtual public string GetFolderName()
        {
            throw new NotImplementedException();
        }
        virtual public void ReplaceAndLoad(string name, bool sendLoadedEvent = true)
        {
            throw new NotImplementedException();
        }

        protected FloorController CreateFloorContainer(float yPos)
        {
            GameObject prefab = null;
            GameObject floorContainer = null;

            prefab = Resources.Load<GameObject>("Room/FloorController_Prefab");

            if (prefab != null)
            {
                floorContainer = Instantiate(prefab, Vector3.zero, Quaternion.identity, transform);
                floorContainer.name = "FloorContainer";

            }
            else floorContainer = GameObject.Find("FloorContainer");
            if (floorContainers == null)
                floorContainers = new List<GameObject>();

            floorContainer.transform.localPosition = new Vector3(0, yPos, 0);

            floorContainers.Add(floorContainer);
            return floorContainer.GetComponent<FloorController>();
        }

        virtual public void Unload()
        {
            throw new NotImplementedException();
        }
    }
}
