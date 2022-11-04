using System;
using Exoa.Designer;
using Exoa.Events;
using UnityEngine.UI;

public class WizardPopup : BaseStaticPopup
{
    public Button createNewBtn;
    public Button loadBtn;


    override protected void Awake()
    {
        base.Awake();
        createNewBtn.onClick.AddListener(OnClickCreateNew);
        loadBtn.onClick.AddListener(OnClickLoad);
    }

    private void OnClickLoad()
    {
        UISaving.instance.Open(false);
        Hide();
    }

    private void OnClickCreateNew()
    {
        GameEditorEvents.OnRequestButtonAction?.Invoke(GameEditorEvents.Action.NewProject, true);
        Hide();
    }

}
