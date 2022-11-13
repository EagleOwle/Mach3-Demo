using System;
using System.Collections;
using UnityEngine;

public class ProcessDestroy : Process
{
    public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
    {
        this.handler = handler;
        setting = boardSetting;
        type = ProcessType.Destroy;
        StartCoroutine(ScaleDown(EndProcess));
    }

    public override void StartProcess(BoardSetting boardSetting)
    {
        setting = boardSetting;
        type = ProcessType.Destroy;
        StartCoroutine(ScaleDown(EndProcess));
    }

    private IEnumerator ScaleDown(Action endScale)
    {
        float current = 1;
        while (current > 0)
        {
            current = Mathf.MoveTowards(current, 0, Time.deltaTime * setting.durationScale);
            transform.localScale = Vector3.one * current;
            yield return null;
        }

        EndProcess();
    }

    private void Pause()
    {
        Debug.Break();
    }

    protected override void EndProcess()
    {
        if (this.handler != null)
        {
            this.handler.EndProcess(this);
        }

        Destroy(gameObject);
    }
}
