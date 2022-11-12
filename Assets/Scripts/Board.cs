using UnityEngine;
using System.Collections.Generic;
using System;
using System.Linq;
using System.Collections;

public class Board : MonoBehaviour, ISelectable, IEndProcessListener, IGameState
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
    private ProcessHandler processHandler;
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

    public GameState CurrentState()
    {
        return gameState;
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
        processHandler = new ProcessHandler(this as IEndProcessListener, gamePreference.boardSetting);
        boardCreate.Create(gamePreference, out cells, this as ISelectable, this as IGameState, out firstRow);
        NextState = GameState.SpawnItem;
    }

    private void SpawnItem()
    {
        foreach (var cell in firstRow)
        {
            if (cell.Type == Type.None)
            {
                Item item = cell.SpawnRandomType(soundHandler, out ProcessSpawn process);
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
            eventOnMatchCells.Invoke(matchedHandler.matchedСells.Count);
            NextState = GameState.DestroyMatchItem;
        }
        else
        {
            NextState = GameState.PlayerInput;
        }
    }

    private void DestroyMatchItem()
    {
        List<Process> processes = matchedHandler.DestroyMatchItem();
        processHandler.AddProcessRange(processes);
        soundHandler.Match();
        ClearDontDestroy();
    }

    private void Replacement(Cell cellOne, Cell cellTwo)
    {
        replacement.Replace(cellOne, cellTwo);
    }

    public void OnSelected(Cell cell, out bool isSelect)
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
                Replacement(cell, currentSelected);
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
                //matchedHandler.FindIntersectCells();
                EndFind();
                matchedHandler.SetRandomColor();

                break;
            case GameState.DestroyMatchItem:
                
                eventMessage.Invoke("Cells count " + matchedHandler.matchedСells.Count);

                for (int i = 0; i < matchedHandler.matchedСells.Count; i++)
                {
                   // if (matchedHandler.matchedСells[i].figureType != FigureType.Line)
                    {
                       // eventMessage.Invoke("IntersectCells: " + matchedHandler.matchedСells[i].figureType);
                    }
                }

                //Invoke(nameof(DestroyMatchItem), 3);
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

    public void EndProcess(ProcessType type)
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

    private void ClearDontDestroy()
    {
        for (int i = 0; i < cells.GetLength(0); i++)
        {
            for (int ii = 0; ii < cells.GetLength(1); ii++)
            {
                cells[i, ii].dontDestroy = false;
                cells[i, ii].Message("None");
            }
        }
    }

    

   



}

