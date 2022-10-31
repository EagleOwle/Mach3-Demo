using System;
using System.Collections;
using UnityEngine;

namespace Match
{
    public enum ProcessType
    {
        Spawn,
        Destroy,
    }

    public abstract class Process : MonoBehaviour
    {
        protected BoardSetting setting;
        protected IEndProcess handler;
        protected ProcessType type;
        public ProcessType ProcessType => type;

        public abstract void StartProcess(IEndProcess handler, BoardSetting boardSetting);

        protected virtual void EndProcess()
        {
            this.handler.EndProcess(this);
            Destroy(this);
        }

    }

    public class ProcessSpawn : Process
    {
        public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
        {
            this.handler = handler;
            setting = boardSetting;
            type = ProcessType.Spawn;
            StartCoroutine(ScaleUp(EndProcess));
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

    public class ProcessDestroy : Process
    {
        public override void StartProcess(IEndProcess handler, BoardSetting boardSetting)
        {
            this.handler = handler;
            setting = boardSetting;
            type = ProcessType.Destroy;
            StartCoroutine(ScaleDown(EndProcess));
            //Invoke(nameof(Pause), 0.2f);
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
            this.handler.EndProcess(this);
            Destroy(gameObject);
        }
    }

}