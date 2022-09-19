using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameProcess : MonoBehaviour
{
    public BoardSetting boardSetting;
    [SerializeField] private Board board;
    [SerializeField] private float speedDown = 5;
    public string debugCurrentGameState;

    private void Start()
    {
        board = new Board();
        board.Initialise(boardSetting);

        StateMachine.InitBeheviors();
        StateMachine.actionChangeState += ChangeState;
        StateMachine.SetState<FallState>();
    }

    private IEnumerator GoDown()
    {
        int y = 0;

        while (y < boardSetting.boardSize.y)
        {
            board.GoDown(y);
            y++;

            yield return new WaitForSeconds(speedDown * Time.deltaTime);
        }

        Debug.Log("End GoDown");
        board.SpawnFirstItem(out bool onSpawn);

        if (onSpawn)
        {
            StartCoroutine(GoDown());
        }
        else
        {
            StateMachine.SetState<InputState>();
        }
    }

    private void ChangeState(State obj)
    {
        debugCurrentGameState = obj.nameState;

        if (StateMachine.currentState is FallState)
        {
            StartCoroutine(GoDown());
        }
    }
}
