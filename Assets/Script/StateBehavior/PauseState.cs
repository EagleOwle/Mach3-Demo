using UnityEngine;
using System.Collections;

public class PauseState : State
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
