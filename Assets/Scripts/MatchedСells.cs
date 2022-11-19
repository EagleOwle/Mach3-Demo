using UnityEngine;
using System.Collections.Generic;
using System.Linq;

public class MatchedСells
{
    public MatchedСells(List<Cell> cells, FigureType figureType, Direction direction)
    {
        this.cells = cells;
        this.figureType = figureType;
        this.direction = direction;
    }

    public Direction direction;
    public FigureType figureType;
    public List<Cell> cells;

    public bool ContainsCell(Cell cell)
    {
        return cells.Contains(cell);
    }

    public bool Intersect(List<Cell> other, out Cell result)
    {
        result = null;

        for (int i = 0; i < cells.Count; i++)
        {
            cells[i].Message(i.ToString());
        }

       List<Cell> tmpResult = cells.Intersect(other).ToList();

        if(tmpResult.Count > 0)
        {
            result = tmpResult[0];

            if (tmpResult.Count > 1)
            {
                Debug.LogError("Intersect result > 1");
            }

            return true;
        }
        else
        {
            return false;
        }

    }

    public void RemoveCell(Cell cell)
    {
        cells.Remove(cell);
    }

    public void MoveTarget(Cell targetCell)
    {
        foreach (var item in cells)
        {
            item.Item.SetParentAndMoveZero(targetCell);
        }
    }

    public List<IProcess> DestroyItem()
    {
        List<IProcess> processes = new List<IProcess>();
        foreach (var item in cells)
        {
            item.DestroyItem(out IProcess process);
            processes.Add(process);
        }

        return processes;
    }

    public void SetColor(Color color)
    {
        foreach (var item in cells)
        {
            item.Item.SetColor(color);
        }
    }

}
