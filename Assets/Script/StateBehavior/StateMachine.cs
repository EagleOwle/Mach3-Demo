using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StateMachine
{
    private static Dictionary<Type, State> behaviorMap;
    public static State currentState;
    public static Action<State> actionChangeState;

    public static void InitBeheviors()
    {
        behaviorMap = new Dictionary<Type, State>();
        behaviorMap[typeof(StateFindLine)] = new StateFindLine();
        behaviorMap[typeof(StatePause)] = new StatePause();
        behaviorMap[typeof(StateFall)] = new StateFall();
        behaviorMap[typeof(StateTimer)] = new StateTimer();
        behaviorMap[typeof(StateInput)] = new StateInput();
    }

    public static void SetState<T>() where T : State
    {
        var type = typeof(T);
        var newState = behaviorMap[type];
        SetState(newState);
    }

    private static void SetDefaultState()
    {
        currentState = GetState<StatePause>();
        currentState.Enter();
    }

    private static void SetState(State newState)
    {
        if (currentState != null)
        {
            if(currentState == newState)
            {
                return;
            }
            else
            {
                currentState.Exit();
            }
        }
        
        currentState = newState;
        currentState.Enter();
        actionChangeState.Invoke(currentState);
    }

    public static State GetState<T>() where T : State
    {
        var type = typeof(T);
        return behaviorMap[type];
    }
}
