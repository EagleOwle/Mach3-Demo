using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLine : MonoBehaviour
{
    public void CheckLine(Cell[,] cells)
    {
        int y = cells.GetLength(1);
        ItemType type = ItemType.Block;

        List<Cell> line = new List<Cell>();

        while (y > 0)
        {
            line.Clear();

            for (int x = 0; x < cells.GetLength(0); x++)
            {
                if(type == cells[x,y].Item.Type)
                {
                    line.Add(cells[x, y]);
                }
                else
                {
                    type = cells[x, y].Item.Type;
                    line.Clear();
                }
            }

            DeleteLineItem(line);

            y--;
        }

    }

    private void DeleteLineItem(List<Cell> line)
    {
        for (int i = 0; i < line.Count; i++)
        {
            line[i].DestroyItem();
        }
    }


}
