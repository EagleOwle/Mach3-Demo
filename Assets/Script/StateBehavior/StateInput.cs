using System.Collections;
using UnityEngine;

public class StateInput : State
{
    public override void Enter()
    {
        nameState = "Input";
    }

    public override void Exit()
    {
        //throw new System.NotImplementedException();
    }
}
