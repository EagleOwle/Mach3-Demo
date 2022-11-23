using UnityEngine;
using System.Collections.Generic;
using System.Linq;

public class MatchedСells
{
    public MatchedСells(List<Cell> cells)//, FigureType figureType, Direction direction)
    {
        this.cells = cells;
       // this.figureType = figureType;
       // this.direction = direction;
    }

    //public Direction direction;
    //public FigureType figureType;
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

    public bool Intersect(List<Cell> other)
    {
        List<Cell> tmpResult = cells.Intersect(other).ToList();

        if(tmpResult.Count > 0)
        {
           Cell result = tmpResult[0];

            if (tmpResult.Count > 1)
            {
                Debug.LogError("Intersect result > 1");
            }

            cells = cells.Union(other).ToList();
            CreateBonus(result, cells.Count);

            return true;
        }
        else
        {
            return false;
        }

    }

    private void CreateBonus(Cell targetCell, int arrayCount)
    {
        bonusCell = new BonusCell(targetCell, (BonusType)arrayCount);
    }

    public void RemoveCell(Cell cell)
    {
        cells.Remove(cell);
    }

    private void BonusCalculate()
    {
        if (bonusCell == null)
        {
            if (cells.Count >= (int)BonusType.One)
            {
                if (SearchReplacmentCell(out Cell replacedCell))
                {
                    CreateBonus(replacedCell, cells.Count);
                }
                else
                {
                    CreateBonus(cells[1], cells.Count);
                }
            }
        }
    }

    public List<IProcess> DestroyItem()
    {
        BonusCalculate();

        List<IProcess> processes = new List<IProcess>();
        foreach (var item in cells)
        {
            if (bonusCell != null)
            {
                item.Item.SetParentAndMoveZero(bonusCell.cell);
                
            }

            item.DestroyItem(out IProcess process);
            processes.Add(process);
        }

        if (bonusCell != null)
        {
            bonusCell.Implement();
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
