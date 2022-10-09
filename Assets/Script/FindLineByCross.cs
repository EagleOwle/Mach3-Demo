using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindLineByCross : MonoBehaviour
{
    private List<Cell> cellArray;

    public bool StartFind(Cell baseCell)
    {
        cellArray = new List<Cell>();
        cellArray.Add(baseCell);
        FindNeighborBySide(baseCell, Side.East);
        FindNeighborBySide(baseCell, Side.West);
        FindNeighborBySide(baseCell, Side.North);
        FindNeighborBySide(baseCell, Side.South);

        //foreach (var item in cellArray)
        //{
        //    item.Item.Select(true);
        //}

        if (cellArray.Count>2)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }

    public void FindNeighborBySide(Cell cell, Side side)
    {
        Cell neighborCell = cell.GetNeighborCell(side);

        if (neighborCell != null && neighborCell.Item != null)
        {
            if (neighborCell.Item.Type == cell.Item.Type)
            {
                cellArray.Add(neighborCell);
                FindNeighborBySide(neighborCell, side);
            }
        }
    }

}
