using System;
using System.Collections;
using UnityEngine;

public class ProcessSpawn : Process
{
    public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
    {
        this.handler = handler;
        setting = boardSetting;
        type = ProcessType.Spawn;
        StartCoroutine(ScaleUp(EndProcess));
    }

    public override void StartProcess(BoardSetting boardSetting)
    {
        setting = boardSetting;
        type = ProcessType.Spawn;
        StartCoroutine(ScaleUp(EndProcess));
    }

    protected override void EndProcess()
    {
        if (this.handler != null)
        {
            this.handler.EndProcess(this);
        }
        Destroy(this);
    }

    private IEnumerator ScaleUp(Action endScale)
    {
        float current = 0;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, Time.deltaTime * setting.durationScale);
            transform.localScale = Vector3.one * current;
            yield return null;
        }

        EndProcess();
    }


}

