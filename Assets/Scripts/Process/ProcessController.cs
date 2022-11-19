using System.Collections.Generic;

public class ProcessController : IEndProcessListener
{
    private IEndProcessTypeListener endProcessListener;
    private List<IProcess> processes;
    private BoardSetting setting;

    public ProcessController(IEndProcessTypeListener endProcessListener, BoardSetting setting)
    {
        processes = new List<IProcess>();
        this.endProcessListener = endProcessListener;
        this.setting = setting;
    }

    public void AddProcess(IProcess value)
    {
        processes.Add(value);
        value.AddListener(this as IEndProcessListener);
    }

    public void AddProcessRange(List<IProcess> value)
    {
        processes.AddRange(value);

        foreach (var item in value)
        {
            item.AddListener(this as IEndProcessListener);
        } 
    }

    void IEndProcessListener.EndProcess(IProcess value)
    {
        processes.Remove(value);

        if (processes.Count == 0)
        {
            this.endProcessListener.EndProcessType(value.Type());
        }
    }

}
