using UnityEngine;
using System.Collections.Generic;
using System.Linq;

public class MatchedHandler
{
    public MatchedHandler(GamePreference gamePreference)
    {
        this.gamePreference = gamePreference;
        bonusCalculate = new BonusCalculate();
        matchedСells = new List<MatchedСells>();
    }

    private GamePreference gamePreference;
    private BonusCalculate bonusCalculate;
    public List<MatchedСells> matchedСells;

    List<Cell> containH = new List<Cell>();
    List<Cell> containV = new List<Cell>();
    List<Cell> tmpArray = new List<Cell>();

    public void FindMatch(Cell[,] cells)
    {
        matchedСells.Clear();
        tmpArray.Clear();
        containH.Clear();
        containV.Clear();

        for (int y = 0; y < cells.GetLength(1); y++)
        {
            for (int x = 0; x < cells.GetLength(0); x++)
            {
                if (containV.Contains(cells[x, y]) == false)
                {
                    if (FindMatchCellInDirection(Direction.Top, cells[x, y], out tmpArray))
                    {
                        matchedСells.Add(new MatchedСells(tmpArray, FigureType.Line, Direction.Top));
                        containV.AddRange(tmpArray);
                    }
                }

                if (containH.Contains(cells[x, y]) == false)
                {
                    if (FindMatchCellInDirection(Direction.Right, cells[x, y], out tmpArray))
                    {
                        matchedСells.Add(new MatchedСells(tmpArray, FigureType.Line, Direction.Right));
                        containH.AddRange(tmpArray);
                    }
                }
            }
        }
    }

    private bool FindMatchCellInDirection(Direction direction, Cell cell, out List<Cell> cells)
    {
        cells = new List<Cell>();
        cell.GetMatchNeigbor(direction, cells);
        if (cells.Count >= gamePreference.boardSetting.minMatchCount)
        {
            return true;
        }

        return false;
    }

    public void FindIntersectCells()
    {
        for (int i = 0; i < matchedСells.Count; i++)
        {
            for (int ii = 0; ii < matchedСells.Count; ii++)
            {
                if (i == ii) continue;

                if (matchedСells[i].Intersect(matchedСells[ii].cells, out Cell resultIntersect))
                {
                    matchedСells[i].RemoveCell(resultIntersect);
                    matchedСells[ii].RemoveCell(resultIntersect);

                    matchedСells[i].MoveTarget(resultIntersect);
                    matchedСells[ii].MoveTarget(resultIntersect);

                    FigureType figure =  bonusCalculate.CalculateFigure(matchedСells[i], matchedСells[ii], resultIntersect);
                    SetBonus(figure, resultIntersect);
                }
            }
        }
    }

    private void SetBonus(FigureType figure, Cell targetCell)
    {
        switch (figure)
        {
            case FigureType.Line:
                break;
            case FigureType.Angle:
                targetCell.SpawnBonusItem();
                break;
            case FigureType.T:
                targetCell.SpawnBonusItem();
                break;
            case FigureType.Cross:
                targetCell.SpawnBonusItem();
                break;

            default:
                Debug.LogError("No Figure in Switch");
                break;
        }
    }

    public List<Process> DestroyMatchItem()
    {
        List<Process> processes = new List<Process>();
        for (int i = 0; i < matchedСells.Count; i++)
        {
            processes.AddRange(matchedСells[i].DestroyItem());
        }

        if (processes.Count == 0)
        {
            Debug.LogError("Processes Destroy is null");
        }

        return processes;
    }

    public void SetRandomColor()
    {
        for (int i = 0; i < matchedСells.Count; i++)
        {
            Color color = UnityEngine.Random.ColorHSV();

            foreach (var item in matchedСells[i].cells)
            {
                item.Item.SetColor(color);
                item.Item.EnableOutline();
            }
        }

    }

}
