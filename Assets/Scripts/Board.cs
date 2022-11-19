using UnityEngine;
using System.Collections.Generic;
using System;
using System.Linq;
using System.Collections;

public class Board : MonoBehaviour, ISelectable, IEndProcessTypeListener, IGameState
{
    public event Action<int> eventOnMatchCells;
    public event Action<String> eventMessage;

    [SerializeField] private GamePreference gamePreference;
    [SerializeField] private BoardCreate boardCreate;
    [SerializeField] private SoundHandler soundHandler;
    [SerializeField] private Cell[,] cells;
    [SerializeField] private Cell[] firstRow;

    private Cell currentSelected;
    private ReplacementHandler replacement;
    private ProcessController processHandler;
    private MatchedHandler matchedHandler;

    private GameState gameState;
    private GameState NextState
    {
        set
        {
            gameState = value;
            Invoke(nameof(ChangeState), 0.1f);
        }
    }

    public void Initialise()
    {
        matchedHandler = new MatchedHandler(gamePreference);
    }

    private bool BoardIsFull
    {
        get
        {
            for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
            {
                for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
                {
                    if (cells[x, y].Type == Type.None)
                    {
                        return false;
                    }
                }
            }

            return true;
        }
    }

    public void StartMatch()
    {
        replacement = new ReplacementHandler();
        processHandler = new ProcessController(this as IEndProcessTypeListener, gamePreference.boardSetting);
        boardCreate.Create(gamePreference, soundHandler, out cells, this as ISelectable, this as IGameState, out firstRow);
        NextState = GameState.SpawnItem;
    }

    private void SpawnItem()
    {
        foreach (var cell in firstRow)
        {
            if (cell.Type == Type.None)
            {
                Item item = cell.SpawnRandomType(out IProcess process);
                processHandler.AddProcess(process);
            }
        }
    }

    private void FallItem()
    {
        for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
        {
            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                cells[x, y].FallingDown();
            }
        }

        if (BoardIsFull == false)
        {
            NextState = GameState.SpawnItem;
        }
        else
        {
            NextState = GameState.FindMatchItem;
        }

    }

    private void EndFind()
    {
        if (matchedHandler.matchedСells.Count > 0)
        {
            NextState = GameState.DestroyMatchItem;
        }
        else
        {
            NextState = GameState.PlayerInput;
        }
    }

    private void DestroyMatchItem()
    {
        List<IProcess> processes = matchedHandler.DestroyMatchItem();
        processHandler.AddProcessRange(processes);
        eventOnMatchCells.Invoke(processes.Count);
        soundHandler.Match();
    }

    private void ChangeState()
    {
        switch (gameState)
        {
            case GameState.SpawnItem:

                SpawnItem();

                break;
            case GameState.FalldownItem:

                FallItem();

                break;
            case GameState.FindMatchItem:

                matchedHandler.FindMatch(cells);
                matchedHandler.FindIntersectCells();
                EndFind();

                break;
            case GameState.DestroyMatchItem:

                DestroyMatchItem();

                break;
            case GameState.PlayerInput:
                if (gamePreference.applicationSetting.replacementCell)
                {
                    replacement.Revert();
                }
                break;
            default:
                Debug.LogError("No State in enum");
                break;
        }

    }

    #region Interface
    void IEndProcessTypeListener.EndProcessType(ProcessType type)
    {
        switch (type)
        {
            case ProcessType.Spawn:
                NextState = GameState.FalldownItem;
                break;
            case ProcessType.Destroy:
                NextState = GameState.FalldownItem;
                break;
            case ProcessType.Move:
                break;
            default:
                Debug.LogError("No Type In Switch ProcessType");
                break;
        }
    }

    void ISelectable.OnSelected(Cell cell, out bool isSelect)
    {
        if (currentSelected == cell)
        {
            isSelect = false;
            return;
        }

        if (currentSelected != null)
        {
            if (currentSelected.IsNeighbor(cell))
            {
                replacement.Replace(cell, currentSelected);
                cell.Deselected();
                currentSelected.Deselected();
                currentSelected = null;
                isSelect = false;
                NextState = GameState.FindMatchItem;
            }
            else
            {
                currentSelected.Deselected();
                currentSelected = cell;
                isSelect = true;
            }
        }
        else
        {
            currentSelected = cell;
            isSelect = true;

        }
    }

    GameState IGameState.CurrentState()
    {
        return gameState;
    }

    #endregion


}

