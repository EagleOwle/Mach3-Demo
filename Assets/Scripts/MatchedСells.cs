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
    public int Count => cells.Count;

    private BonusCell bonusCell;
    public BonusCell BonusCell
    {
        set
        {
            bonusCell = value;
        }
    }

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

    public List<IProcess> DestroyItem()
    {
        if (bonusCell != null)
        {
            Debug.Log(bonusCell.bonusType.ToString());
            Debug.Break();
        }

        List<IProcess> processes = new List<IProcess>();
        foreach (var item in cells)
        {
            if (bonusCell != null)
            {
                item.Item.SetParentAndMoveZero(bonusCell.cell);
            }
            else
            {
                //if(SearchReplacmentCell(out Cell replacedCell))
                //{
                //    item.Item.SetParentAndMoveZero(replacedCell);
                //}
            }

            item.DestroyItem(out IProcess process);
            processes.Add(process);

            
        }

        return processes;
    }

    private bool SearchReplacmentCell(out Cell replacedCell)
    {
        replacedCell = null;
        foreach (var item in cells)
        {
            if (item.Replaced == true)
            {
                replacedCell = item;
                return true;
            }
        }

        return false;
    }

    public void SetColor(Color color)
    {
        foreach (var item in cells)
        {
            item.Item.SetColor(color);
        }
    }

}
