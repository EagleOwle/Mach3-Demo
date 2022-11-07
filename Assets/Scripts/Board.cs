using UnityEngine;
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

    //private List<Cell> matchCells = new List<Cell>();

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
        //matchCells.Clear();
        cellArrays.Clear();

        for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
        {
            for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
            {
                if (Contains(cellArrays, cells[x, y])) continue;

                CheckMatchDirection(cells[x, y], Direction.Top, cellArrays);
                CheckMatchDirection(cells[x, y], Direction.Right, cellArrays);
               // CheckMatchDirection(cells[x, y], Direction.Bottom, matchCells);
               // CheckMatchDirection(cells[x, y], Direction.Left, matchCells);
            }
        }

        FindIntersectCells(cellArrays);
        SetRandomColor(cellArrays);

        if (cellArrays.Count > 0)
        {
            eventOnMatchCells.Invoke(cellArrays.Count);
            NextState = GameState.DestroyMatchItem;
        }
        else
        {
            NextState = GameState.PlayerInput;
        }
    }

    private void CheckMatchDirection(Cell cell, Direction direction, List<List<Cell>> cellArrays)
    {
        List<Cell> tmpCells = new List<Cell>();

        cell.GetMatchNeigbor(direction, cell.Type, tmpCells);

        if (tmpCells.Count >= gamePreference.boardSetting.minMatchCount)
        {
            cellArrays.Add(tmpCells);
        }
    }

    private void DestroyMatchItem()
    {
        if (cellArrays.Count == 0)
        {
            Debug.LogError("Cells count " + cellArrays.Count);
        }

        for (int i = 0; i < cellArrays.Count; i++)
        {
            foreach (var item in cellArrays[i])
            {
                item.DestroyItem(out ProcessDestroy process);
                processHandler.AddProcess(process);
            }
        }

        soundHandler.Match();
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

    private void FindIntersectCells(List<List<Cell>> cellArrays)
    {
        //Debug.Log(cellArrays.Count);
        for (int i = 0; i < cellArrays.Count; i++)
        {
            for (int ii = 0; ii < cellArrays.Count; ii++)
            {
                if (i == ii) continue;

                IEnumerable<Cell> inBoth = cellArrays[i].Intersect(cellArrays[ii]);

                if(inBoth.)
                inBoth = cellArrays[i].Union(cellArrays[ii]);

                List<Cell> tmp = inBoth.ToList();
                
                if (tmp.Count > 0)
                {
                    tmp.AddRange(cellArrays[ii]);
                    tmp.AddRange(cellArrays[i]);

                    cellArrays.RemoveAt(ii);
                    cellArrays.RemoveAt(i);

                    cellArrays.Add(tmp);
                }

                //foreach (var item in inBoth)
                //{
                //    item.Item.SetColor(Color.black);
                //}

            }
        }
    }

    private void SetRandomColor(List<List<Cell>> cellArrays)
    {
        for (int i = 0; i < cellArrays.Count; i++)
        {
            Color color = UnityEngine.Random.ColorHSV();

            foreach (var item in cellArrays[i])
            {
                item.Item.SetColor(color);
            }
        }
    }

    private bool Contains(List<List<Cell>> cellArrays, Cell cell)
    {
        for (int i = 0; i < cellArrays.Count; i++)
        {
            if (cellArrays[i].Contains(cell)) return true;
        }

        return false;
    }

}

