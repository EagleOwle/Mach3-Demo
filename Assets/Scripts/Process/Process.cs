using UnityEngine;

namespace Match
{
    public abstract class Process : MonoBehaviour
    {
        protected BoardSetting setting;
        protected IEndProcess handler;
        protected ProcessType type;
        public ProcessType ProcessType => type;

        public abstract void StartProcess(IEndProcess handler, BoardSetting boardSetting);

        protected abstract void EndProcess();

    }

}