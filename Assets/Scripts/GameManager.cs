using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private UIMenuController uiMenu;
    [SerializeField] private UIGameController uiGame;
    [SerializeField] private Board board;

    private Player player;

    private void Start()
    {
        player = new Player();
        player.Initialise();
        uiGame.Initialise(player as IPlayerGetData);
        uiMenu.Initialise();
        uiMenu.eventStartMatch += StartMatch;

        board.eventOnMatchCells += Board_eventOnMatchCells;

    }

    private void Board_eventOnMatchCells(int value)
    {
        
        player.SetPoints(value);
    }

    private void StartMatch()
    {
        board.StartMatch();
    }

}
