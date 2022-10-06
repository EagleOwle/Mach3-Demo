using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLine : MonoBehaviour
{
    private Cell[,] cells;
    private List<Cell> currentLine = new List<Cell>();

    public void CheckLine(Cell[,] cells)
    {
        this.cells = cells;
        CheckColum(0);
    }

    private void CheckColum(int y)
    {
        while (y < cells.GetLength(1) - 1)
        {
            CheckLine(y, out bool isBreak);

            if(isBreak== true)
            {
                StateMachine.SetState<StateFall>();
                break;
            }

            y++;
        }
    }

    private void CheckLine(int y, out bool isBreak)
    {
        isBreak = false;
        ClearLineItem(currentLine);
        ItemType type = ItemType.None;
        int x = 0;

        while (x < cells.GetLength(0))
        {
            if (cells[x, y].type != CellType.Wall)
            {
                if (type == cells[x, y].Item.Type)
                {
                    currentLine.Add(cells[x, y]);
                }
                else
                {
                    if (currentLine.Count > 2)
                    {
                        ClearLineItem(currentLine);
                        isBreak= true;
                        break;
                    }
                    else
                    {
                        type = cells[x, y].Item.Type;
                        ClearLineItem(currentLine);
                        currentLine.Add(cells[x, y]);
                    }
                }
            }

            if (currentLine.Count > 2)
            {
                ClearLineItem(currentLine);
                isBreak = true;
                break;
            }

            x++;
        }
    }

    private void ClearLineItem(List<Cell> line)
    {
        if (line.Count > 2)
        {
            for (int i = 0; i < line.Count; i++)
            {
                line[i].DestroyItem();
            }
        }

        line.Clear();
    }

}
