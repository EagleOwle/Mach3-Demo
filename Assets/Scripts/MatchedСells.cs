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

    public bool Intersect(List<Cell> other, out List<Cell> result)
    {
        for (int i = 0; i < cells.Count; i++)
        {
            cells[i].Message(i.ToString());
        }

        result = cells.Intersect(other).ToList();

        if(result.Count > 0)
        {
            foreach (var item in result)
            {
                item.Item.EnableOutline();
                item.dontDestroy = true;
            }

            if(result.Count > 1)
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

    public List<Process> DestroyItem()
    {
        List<Process> processes = new List<Process>();
        foreach (var item in cells)
        {
            if (item.dontDestroy) continue;
            item.DestroyItem(out ProcessDestroy process);
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
