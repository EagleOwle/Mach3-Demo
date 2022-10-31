using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Match
{

    public class ProcessHandler : IEndProcess
    {
        private IEndProcessListener endProcessListener;
        private List<Process> processes;
        private BoardSetting setting;

        public ProcessHandler(IEndProcessListener endProcessListener, BoardSetting setting) 
        {
            processes = new List<Process>();
            this.endProcessListener = endProcessListener;
            this.setting = setting;
        }

        public void AddProcess(Process value)
        {
            processes.Add(value);
            value.StartProcess(this as IEndProcess, setting);
            
        }

        public void EndProcess(Process value)
        {
            processes.Remove(value);

            if(processes.Count == 0)
            {
                this.endProcessListener.EndProcess(value.ProcessType);
            }
        }

    }
}