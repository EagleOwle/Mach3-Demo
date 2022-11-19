using UnityEngine;

public interface IProcess
{
    void AddListener(IEndProcessListener endProcessListener);
    ProcessType Type();
}

public abstract class Process : MonoBehaviour, IProcess
{
    protected BoardSetting boardSetting;
    protected IEndProcessListener endProcessListener;
    protected ProcessType type;

    public void AddListener(IEndProcessListener endProcessListener)
    {
        this.endProcessListener = endProcessListener;
    }

    public ProcessType Type()
    {
        return type;
    }

    protected virtual void EndProcess()
    {
        if (this.endProcessListener != null)
        {
            this.endProcessListener.EndProcess(this);
        }
    }
}

