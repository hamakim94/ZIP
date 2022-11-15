using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Album : MonoBehaviour
{
    public Button albumCloseButton;
    public GameObject mainPanel;
    public GameObject albumPanel;


    // Start is called before the first frame update
/*    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
*/
    public void AlbumCloseButtonClicked(){
        mainPanel.SetActive(true);
        albumPanel.SetActive(false);
    }
}
