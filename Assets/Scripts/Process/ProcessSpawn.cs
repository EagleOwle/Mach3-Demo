using System;
using System.Collections;
using UnityEngine;

public class ProcessSpawn : Process, IProcess
{
    public void StartProcess(BoardSetting boardSetting)
    {
        this.boardSetting = boardSetting;
        type = ProcessType.Spawn;
        StartCoroutine(ScaleUp(EndProcess));
    }

    private IEnumerator ScaleUp(Action endScale)
    {
        float current = 0;
        while (current < 1)
        {
            current = Mathf.MoveTowards(current, 1, Time.deltaTime * boardSetting.durationScale);
            transform.localScale = Vector3.one * current;
            yield return null;
        }

        EndProcess();
    }
}

