using System.Collections;
using UnityEngine;

public class ProcessEmpty : Process
{
    public ProcessEmpty(ProcessType type)
    {
        this.type = type;
    }

    public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
    {
        EndProcess();
    }

    public override void StartProcess(BoardSetting boardSetting)
    {
        EndProcess();
    }

    protected override void EndProcess()
    {
        this.handler.EndProcess(this);
        Destroy(this);
    }
}
