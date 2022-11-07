﻿using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System;
using System.Linq;

public class Board : MonoBehaviour, ISelectable, IEndProcessListener, IGameState
{
    public event Action<int> eventOnMatchCells;

    [SerializeField] private GamePreference gamePreference;
    [SerializeField] private BoardCreate boardCreate;
    [SerializeField] private SoundHandler soundHandler;
    [SerializeField] private Cell[,] cells;
    [SerializeField] private Cell[] firstRow;

    private Cell currentSelected;
    private ReplacementHandler replacement;
    private ProcessHandler processHandler;

    private List<Cell> matchCells = new List<Cell>();

    private List<List<Cell>> cellArrays = new List<List<Cell>>();

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

    private void FindMatch()
    {
        matchCells.Clear();
        cellArrays.Clear();

        for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
        {
            for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
            {
                CheckMatchDirection(cells[x, y], Direction.Top, matchCells);
                CheckMatchDirection(cells[x, y], Direction.Right, matchCells);
               // CheckMatchDirection(cells[x, y], Direction.Bottom, matchCells);
               // CheckMatchDirection(cells[x, y], Direction.Left, matchCells);
            }
        }

        if (matchCells.Count > 0)
        {
            eventOnMatchCells.Invoke(matchCells.Count);
            NextState = GameState.DestroyMatchItem;
        }
        else
        {
            NextState = GameState.PlayerInput;
        }
    }

    private void CheckMatchDirection(Cell cell, Direction direction, List<Cell> matchCells)
    {
        List<Cell> tmpCells = new List<Cell>();

        cell.GetMatchNeigbor(direction, cell.Type, tmpCells);

        if (tmpCells.Count >= gamePreference.boardSetting.minMatchCount)
        {
            cellArrays.Add(tmpCells);

            Color color = UnityEngine.Random.ColorHSV();

            foreach (var item in tmpCells)
            {
                item.Item.SetColor(color);
                // if (matchCells.Contains(item) == false)
                {
                    matchCells.Add(item);
                }
            }
        }
    }

    private void DestroyMatchItem()
    {
        if (matchCells.Count == 0)
        {
            Debug.LogError("Cells count " + matchCells.Count);
        }

        for (int i = 0; i < matchCells.Count; i++)
        {
            matchCells[i].DestroyItem(out ProcessDestroy process);
            processHandler.AddProcess(process);
        }

        soundHandler.Match();
        matchCells.Clear();
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

                FindMatch();

                break;
            case GameState.DestroyMatchItem:

                SetColorArraysCell(cellArrays);
                Invoke(nameof(DestroyMatchItem), 3);
                //DestroyMatchItem();

                break;
            case GameState.PlayerInput:
                replacement.Revert();
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

    private void SetColorArraysCell(List<List<Cell>> cellArrays)
    {
        Debug.Log(cellArrays.Count);
        for (int i = 0; i < cellArrays.Count; i++)
        {
            for (int ii = 0; ii < cellArrays.Count; ii++)
            {
                if (i == ii) continue;

                IEnumerable<Cell> inBoth = cellArrays[i].Intersect(cellArrays[ii]);

                foreach (var item in inBoth)
                {
                    item.Item.SetColor(Color.black);
                }

            }
        }
    }

}

