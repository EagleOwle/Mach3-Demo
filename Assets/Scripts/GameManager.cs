using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IGlobalMessage
{
    event EventHandler<string> message;
}

public class GameManager : MonoBehaviour, IGlobalMessage
{
    [SerializeField] private GamePreference gamePreference;
    [SerializeField] private UIMenuController uiMenu;
    [SerializeField] private UIGameController uiGame;
    [SerializeField] private Board board;

    private Player player;

    public event EventHandler<string> message;

    private void Start()
    {
        player = new Player();
        player.Initialise();
        uiGame.Initialise(player as IPlayerGetData, this as IGlobalMessage);
        uiMenu.Initialise();
        uiMenu.eventStartMatch += StartMatch;

        board.eventOnMatchCells += Board_eventOnMatchCells;
        board.eventMessage += Board_eventMessage;
        board.Initialise();
    }

    private void Board_eventMessage(string value)
    {
        if (gamePreference.applicationSetting.showDebug)
        {
            message.Invoke(this, value);
        }
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
