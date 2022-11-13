using System;
using System.Collections;
using UnityEngine;

public class ProcessMove : Process
{
    public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
    {
        this.handler = handler;
        setting = boardSetting;
        type = ProcessType.Move;
        StartCoroutine(MovePosition(EndProcess));
    }

    public override void StartProcess(BoardSetting boardSetting)
    {
        setting = boardSetting;
        type = ProcessType.Move;
        StartCoroutine(MovePosition(EndProcess));
    }

    protected override void EndProcess()
    {
        if (this.handler != null)
        {
            this.handler.EndProcess(this);
        }
        Destroy(this);
    }

    private IEnumerator MovePosition(Action endMove)
    {
        while (transform.localPosition != Vector3.zero)
        {
            transform.localPosition = Vector3.MoveTowards(transform.localPosition, Vector3.zero, Time.deltaTime * (setting.durationMove * 1000));
            yield return null;
        }

        EndProcess();
    }

}

