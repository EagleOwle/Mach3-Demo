using UnityEngine;
using System.Collections;

public class StatePause : State
{
    public override void Enter()
    {
        Debug.Log("Set State PauseState");
        nameState = "Pause";
    }

    public override void Exit()
    {
        
    }
}
