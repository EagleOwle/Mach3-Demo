using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLine : MonoBehaviour
{
    public Action eventEndFind;
    public Action eventBreakFind;
    private Cell[,] cells;
    private Cell[] tmpCell;

    public void Initialise(Cell[,] cells)
    {
        this.cells = cells;
    }

    public void CheckLine()
    {
        if (CheckLineX())
        {
            if (CheckLineY())
            {
                EndFind();
            }
            else
            {
                BreakFind();
            }
        }
        else
        {
            BreakFind();
        }
    }

    private bool CheckLineY()
    {
        int x = 0;
        while (x < cells.GetLength(0) - 1)
        {
            tmpCell = new Cell[cells.GetLength(1)];
            for (int y = 0; y < cells.GetLength(1); y++)
            {
                tmpCell[y] = cells[x, y];
            }

            CheckLineOrCollum(tmpCell, out bool isBreak);

            if (isBreak == true)
            {
                return false;
            }

            x++;
        }

        return true;
    }

    private bool CheckLineX()
    {
        int y = 0;
        while (y < cells.GetLength(1) - 1)
        {
            tmpCell = new Cell[cells.GetLength(0)];
            for (int x = 0; x < cells.GetLength(0); x++)
            {
                tmpCell[x] = cells[x, y];
            }

            CheckLineOrCollum(tmpCell, out bool isBreak);

            if (isBreak == true)
            {
                return false;
            }

            y++;
        }

        return true;
    }

    private void CheckLineOrCollum(Cell[] cells, out bool isBreak)
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
                        currentLine.Clear();
                        type = cells[i].Item.Type;
                        currentLine.Add(cells[i]);
                    }
                }
            }
        }

        if (isBreak == false && ClearLineItem(currentLine) == true)
        {
            isBreak = true;
        }
    }

    private bool ClearLineItem(List<Cell> cells)
    {
        if (cells.Count > 2)
        {
            for (int i = 0; i < cells.Count; i++)
            {
                cells[i].DestroyItem();
            }

            cells.Clear();

            return true;
        }
        else
        {
            return false;
        }
    }

    private void BreakFind()
    {
        //eventBreakFind.Invoke();
        StateMachine.SetState<StateFall>();
    }

    private void EndFind()
    {
        eventEndFind.Invoke();
        //StateMachine.SetState<StateInput>();
    }

}
