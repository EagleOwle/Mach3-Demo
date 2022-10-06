using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLine : MonoBehaviour
{
    private List<Cell> line = new List<Cell>();

    Cell[,] cells;

    public void CheckLine(Cell[,] cells)
    {
        this.cells = cells;
        CheckColum(0);
        //Debug.Log("GetLength(0)= " + cells.GetLength(0));
        //Debug.Log("GetLength(1)= " + cells.GetLength(1));

        //int y = 0;
        //ItemType type = ItemType.None;

        //while (y < cells.GetLength(1))
        //{
        //    for (int x = 0; x < cells.GetLength(0); x++)
        //    {
        //        if(cells[x, y].type == CellType.Wall)
        //        {
        //            continue;
        //        }

        //        if(type == cells[x,y].Item.Type)
        //        {
        //            line.Add(cells[x,y]);
        //        }
        //        else
        //        {
        //            type = cells[x,y].Item.Type;
        //            line.Clear();
        //        }
        //    }

        //    DeleteLineItem(line);
        //    line.Clear();
        //    y++;
        //}

    }

    private void DeleteLineItem(List<Cell> line)
    {
        if (line.Count > 2)
        {

            for (int i = 0; i < line.Count; i++)
            {
                line[i].DestroyItem();
                //line[i].ChangeItemType(ItemType.None);
            }
        }

        line.Clear();
    }

    private void CheckColum(int y)
    {
        if (y < cells.GetLength(1) -1)
        {
            StartCoroutine(CheckLine(y));
            DeleteLineItem(line);
        }
    }

    private IEnumerator CheckLine(int y)
    {
        Debug.Log("CheckLine " + y);
        ItemType type = ItemType.None;
        int x = 0;
        while (x < cells.GetLength(0))
        {
            yield return new WaitForSeconds(0.5f);

            if (cells[x, y].type != CellType.Wall)
            {
                if (type == cells[x, y].Item.Type)
                {
                    line.Add(cells[x, y]);
                }
                else
                {
                    type = cells[x, y].Item.Type;
                    line.Clear();
                }

                cells[x, y].Item.Select(true);
            }

            x++;
        }

        yield return new WaitForSeconds(0.1f);
        CheckColum(++y);
    }

}
