using System;
using System.Collections;
using UnityEngine;

namespace Match
{
    public abstract class Process : MonoBehaviour
    {
        public abstract void StartProcess(IEndProcess handler, BoardSetting boardSetting);
    }

    public class ProcessSpawn : Process
    {
        private BoardSetting setting;
        private IEndProcess handler;

        public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
        {
            this.handler = handler;
            setting = boardSetting;
            StartCoroutine(ScaleUp(EndProcess));
        }

        private void EndProcess()
        {
            this.handler.EndProcess(this);
        }

        private IEnumerator ScaleUp(Action endScale)
        {
            float current = 0;
            while (current < 1)
            {
                current = Mathf.MoveTowards(current, 1, Time.deltaTime * setting.tweenDuration);
                transform.localScale = Vector3.one * current;
                yield return null;
            }

            EndProcess();
        }

    }
}