using System.Collections;
using UnityEngine;

namespace Match
{
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

        protected override void EndProcess()
        {
            this.handler.EndProcess(this);
            Destroy(this);
        }
    }
}