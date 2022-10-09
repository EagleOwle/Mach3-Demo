using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Board : MonoBehaviour, ITapListener
{
    [SerializeField]private FindLine findLine;
    [SerializeField] private FindLineByCross findLineByCross;
    private BoardSetting boardSetting;
    private Cell[,] cells;
    private List<Cell> lastLine;
    private Cell selected;

    public void Initialise(BoardSetting boardSetting)
    {
        this.boardSetting = boardSetting;
        cells = new Cell[(int)this.boardSetting.boardSize.x, (int)this.boardSetting.boardSize.y];
        lastLine = new List<Cell>();

        StateMachine.actionChangeState += ChangeState;

        CreateCells();
        FindNeiborth();

        SpawnWallItem();
        SpawnFirstItem(out bool onSpawn);
    }

    private void ChangeState(State obj)
    {
        if (StateMachine.currentState is StateFindLine)
        {
            findLine.CheckLine(cells);
        }
    }

    private void CreateCells()
    {
        for (int iy = 0; iy < boardSetting.boardSize.y; iy++)
        {
            for (int ix = 0; ix < boardSetting.boardSize.x; ix++)
            {
                Cell cell = new Cell();
                cell.Initialise(this, new Vector2(ix, iy), WorldPosition(new Vector2(ix, iy)));
                
                cells[ix, iy] = cell;

                if (iy == cells.GetLength(1) - 2)
                {
                    if (ix > 0 && ix < cells.GetLength(0) - 1)
                    {
                        lastLine.Add(cell);
                    }
                }

                if (ix == 0 || ix == cells.GetLength(0) - 1 || iy == 0 || iy == cells.GetLength(1) - 1)
                {
                    cell.type = CellType.Wall;
                }
                else
                {
                    cell.type = CellType.Field;
                }

            }
        }
    }

    private void FindNeiborth()
    {
        for (int ix = 0; ix < boardSetting.boardSize.x; ix++)
        {
            for (int iy = 0; iy < boardSetting.boardSize.y; iy++)
            {
                Cell item = cells[ix, iy];
                foreach (var cell in item.neighbors)
                {
                    SetNeiborth(cell, new Vector2(ix, iy));
                }
            }
        }

    }

    private void SpawnWallItem()
    {
        for (int ix = 0; ix < boardSetting.boardSize.x; ix++)
        {
            for (int iy = 0; iy < boardSetting.boardSize.y; iy++)
            {
                Cell cell = cells[ix, iy];
                
                if(cell.type == CellType.Wall)
                {
                    Vector3 worldPosition = WorldPosition(cell.arrayPosition);
                    Item tmp = GameObject.Instantiate(PrefabStore.Instance.itemPrefab, worldPosition, Quaternion.identity);
                    tmp.SetType(ItemType.None);
                }
            }
        }
    }

    public void SpawnFirstItem(out bool onSpawn)
    {
        onSpawn = false;
        foreach (var cell in lastLine)
        {
            if (cell.Item == null)
            {
                Vector3 worldPosition = WorldPosition(cell.arrayPosition);
                Item tmp = GameObject.Instantiate(PrefabStore.Instance.itemPrefab, worldPosition, Quaternion.identity);
                tmp.SetRandomItem();
                cell.Item = tmp;
                onSpawn = true;
            }
        }
    }

    private Vector2 WorldPosition(Vector2 arrayPosition)
    {
        float x = (arrayPosition.x * boardSetting.itemSize) - boardSetting.boardSize.x / 2 + boardSetting.screenOffset.x;
        float y = (arrayPosition.y * boardSetting.itemSize) - boardSetting.boardSize.y / 2 + boardSetting.screenOffset.y;
        return new Vector2(x, y);
    }

    public void SelectCell(Cell cell)
    {
        if (selected == null)
        {
            selected = cell;
            return;
        }

        if (selected == cell)
        {
            return;
        }

        if (selected.FindNeigborsCell(cell))
        {
            cell.MutualSubstitution(selected);
            selected.Item.eventOnPosition+= 
            selected.Deselect();
            selected = null;
            /*
            if (findLineByCross.StartFind(cell))
            {
                currentSelectedCell.Deselect();
                currentSelectedCell = null;
                StateMachine.SetState<StateFindLine>();
            }
            else
            {
                cell.CheckNeigbors(currentSelectedCell);
                currentSelectedCell.Deselect();
                currentSelectedCell = null;
            }
            */
        }
        else
        {
            selected.Deselect();
            selected = cell;
        }
    }

    public void SetNeiborth(Neighbor neighbor, Vector2 position)
    {
        int x = (int)position.x;
        int y = (int)position.y;

        switch (neighbor.side)
        {
            case Side.North:

                if (x < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                {
                    if (cells[x, y + 1] != null)
                    {
                        neighbor.cell = cells[x, y + 1];
                    }
                }
                break;
            case Side.EastNorth:
                if (x + 1 < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                {
                    if (cells[x + 1, y + 1] != null)
                    {
                        neighbor.cell = cells[x + 1, y + 1];
                    }
                }
                break;
            case Side.East:
                if (x + 1 < cells.GetLength(0) && y < cells.GetLength(1))
                {
                    if (cells[x + 1, y] != null)
                    {
                        neighbor.cell = cells[x + 1, y];
                    }
                }
                break;
            case Side.EastSouth:
                if (y > 0)
                {
                    if (x + 1 < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x + 1, y - 1] != null)
                        {
                            neighbor.cell = cells[x + 1, y - 1];
                        }
                    }
                }
                break;
            case Side.South:
                if (y > 0)
                {
                    if (x < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x, y - 1] != null)
                        {
                            neighbor.cell = cells[x, y - 1];
                        }
                    }
                }
                break;
            case Side.WestSouth:
                if (x > 0 && y > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x - 1, y - 1] != null)
                        {
                            neighbor.cell = cells[x - 1, y - 1];
                        }
                    }
                }
                break;
            case Side.West:
                if (x > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y < cells.GetLength(1))
                    {
                        if (cells[x - 1, y] != null)
                        {
                            neighbor.cell = cells[x - 1, y];
                        }
                    }
                }

                break;
            case Side.WestNorth:
                if (x > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                    {
                        if (cells[x - 1, y + 1] != null)
                        {
                            neighbor.cell = cells[x - 1, y + 1];
                        }
                    }
                }
                break;
        }
    }

    public void GoDown(int y)
    {
        for (int x = 0; x < boardSetting.boardSize.x; x++)
        {
            if (cells[x, y].type == CellType.Wall)
                continue;

            if (cells[x, y].Item == null)
                continue;

            Neighbor neighbor = cells[x, y].GetNeighbor(Side.South);

            if (neighbor.cell.type == CellType.Wall)
                continue;

            if (neighbor.cell.Item == null)
            {
                neighbor.cell.Item = (cells[x, y].Item);
                cells[x, y].Item = null;
            }
        }
    }

    private void OnDrawGizmos()
    {
        if (cells == null) return;

        for (int ix = 0; ix < cells.GetLength(0); ix++)
        {
            for (int iy = 0; iy < cells.GetLength(1); iy++)
            {
                Vector3 worldPosition = WorldPosition(new Vector2(ix, iy));
                GUI.color = Color.black;
                Handles.Label(worldPosition + Vector3.up * 0.2f, ix + "/ " + iy);

                if (cells[ix, iy].Item != null)
                {
                    Handles.Label(worldPosition + Vector3.down * 0.2f, cells[ix, iy].Item.Type.ToString());
                }
                else
                {
                    Handles.Label(worldPosition + Vector3.down * 0.2f, "None");
                }
            }
        }

        Gizmos.color = Color.blue;
        foreach (var item in lastLine)
        {
            Vector3 worldPosition = WorldPosition(item.arrayPosition);
            Gizmos.DrawWireCube(worldPosition, new Vector3(1, 1, 1));
        }

    }

}
