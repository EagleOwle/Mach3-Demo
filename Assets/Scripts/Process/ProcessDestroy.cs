using System;
using System.Collections;
using UnityEngine;

public class ProcessDestroy : Process
{
    public void StartProcess(BoardSetting boardSetting)
    {
        this.boardSetting = boardSetting;
        type = ProcessType.Destroy;
        StartCoroutine(ScaleDown(EndProcess));
    }

    private IEnumerator ScaleDown(Action endScale)
    {
        float current = 1;
        while (current > 0)
        {
            current = Mathf.MoveTowards(current, 0, Time.deltaTime * boardSetting.durationScale);
            transform.localScale = Vector3.one * current;
            yield return null;
        }

        EndProcess();
    }

    protected override void EndProcess()
    {
        base.EndProcess();
        Destroy(gameObject);
    }
}
