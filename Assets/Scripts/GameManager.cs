using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private UIController uiController;
    [SerializeField] private Board board;

    private void Start()
    {
        uiController.Initialise();
        uiController.eventStartMatch += StartMatch;
    }

    private void StartMatch()
    {
        board.StartMatch();
    }

}
