using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLine : MonoBehaviour
{
    private Cell[,] cells;

    private Cell[] tmpCell;

    public void CheckLine(Cell[,] cells)
    {
        this.cells = cells;

        if (CheckLineY())
        {
            if (CheckLineX())
            {
                Invoke(nameof(EndFind), 0.5f);
            }
        }

    }

    private bool CheckLineY()
    {
        bool isEnd = true;
        int x = 0;
        while (x < cells.GetLength(0) - 1)
        {
            tmpCell = new Cell[cells.GetLength(1)];
            for (int y = 0; y < cells.GetLength(1); y++)
            {
                tmpCell[y] = cells[x, y];
            }

            CheckArray(tmpCell, out bool isBreak);

            if (isBreak == true)
            {
                isEnd = false;
                break;
            }

            x++;
        }

        return isEnd;
    }

    private bool CheckLineX()
    {
        bool isEnd = true;
        int y = 0;
        while (y < cells.GetLength(1) - 1)
        {
            tmpCell = new Cell[cells.GetLength(0)];
            for (int x = 0; x < cells.GetLength(0); x++)
            {
                tmpCell[x] = cells[x, y];
            }

            CheckArray(tmpCell, out bool isBreak);

            if (isBreak == true)
            {
                isEnd = false;
                break;
            }

            y++;
        }

        return isEnd;
    }

    private void CheckArray(Cell[] cells, out bool isBreak)
    {
        isBreak = false;
        ItemType type = ItemType.None;
        List<Cell> currentLine = new List<Cell>();

        for (int i = 0; i < cells.Length; i++)
        {
            if (cells[i].type != CellType.Wall)
            {
                if (type == cells[i].Item.Type)
                {
                    currentLine.Add(cells[i]);
                }
                else
                {
                    if (ClearLineItem(currentLine) == true)
                    {
                        isBreak = true;
                        break;
                    }
                    else
                    {
                        ClearLineItem(currentLine);
                        type = cells[i].Item.Type;
                        currentLine.Add(cells[i]);
                    }
                }
            }
        }

        if (ClearLineItem(currentLine) == true)
        {
            isBreak = true;
        }
    }

    private bool ClearLineItem(List<Cell> cells)
    {
        bool isBreak = false;

        if (cells.Count > 2)
        {
            isBreak = true;
            for (int i = 0; i < cells.Count; i++)
            {
                cells[i].DestroyItem();
            }

            Invoke(nameof(BreakFind), 0.5f);
        }

        cells.Clear();
        return isBreak;
    }

    private void BreakFind()
    {
        StateMachine.SetState<StateFall>();
    }

    private void EndFind()
    {
        StateMachine.SetState<StateInput>();
    }

}
