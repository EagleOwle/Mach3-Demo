using UnityEngine;

public abstract class Process : MonoBehaviour
{
    protected BoardSetting setting;
    protected IEndProcess handler;
    protected ProcessType type;
    public ProcessType ProcessType => type;

    public abstract void StartProcess(IEndProcess handler, BoardSetting boardSetting);
    public abstract void StartProcess(BoardSetting boardSetting);
    protected abstract void EndProcess();

}

