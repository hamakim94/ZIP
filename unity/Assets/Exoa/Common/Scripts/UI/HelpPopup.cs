using Exoa.Designer;
using Exoa.Events;

public class HelpPopup : BaseStaticPopup
{

    void OnDestroy()
    {
        GameEditorEvents.OnRequestButtonAction -= OnRequestButtonAction;
    }

    override protected void Awake()
    {
        base.Awake();
        GameEditorEvents.OnRequestButtonAction += OnRequestButtonAction;
    }

    private void OnRequestButtonAction(GameEditorEvents.Action action, bool active)
    {
        if (action == GameEditorEvents.Action.Help)
        {
            Toggle();
        }
    }


}
