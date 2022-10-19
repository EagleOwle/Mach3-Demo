using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameInitialise : MonoBehaviour
{
    public BoardSetting boardSetting;
    [SerializeField] private Board board;
    public string debugCurrentGameState;

    private void Start()
    {
        board.Initialise(boardSetting);

        StateMachine.InitBeheviors();
        StateMachine.actionChangeState += ChangeState;
        StateMachine.SetState<StateFall>();
    }

    private void ChangeState(State obj)
    {
        debugCurrentGameState = obj.nameState;
    }
}
