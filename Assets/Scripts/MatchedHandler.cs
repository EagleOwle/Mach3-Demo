using UnityEngine;
using System.Collections.Generic;
using System.Linq;

public class MatchedHandler
{
    public MatchedHandler(GamePreference gamePreference)
    {
        this.gamePreference = gamePreference;
        //bonusCalculate = new BonusCalculate();
        matchedСells = new List<MatchedСells>();
    }

    private GamePreference gamePreference;
    //private BonusCalculate bonusCalculate;
    private List<MatchedСells> matchedСells;
    public bool MatchedCellsEmpty
    {
        get
        {
            if (matchedСells.Count <= 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    List<Cell> containH = new List<Cell>();
    List<Cell> containV = new List<Cell>();
    List<Cell> tmpArray = new List<Cell>();

    public void StartFindMatchCells(Cell[,] cells)
    {
        FindMatch(cells);
        FindIntersectCells(matchedСells);
    }

    private void FindMatch(Cell[,] cells)
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

    private void FindIntersectCells(List<MatchedСells> matchedСells)
    {
        for (int one = 0; one < matchedСells.Count; one++)
        {
            for (int two = 0; two < matchedСells.Count; two++)
            {
                if (one == two) continue;

                if (matchedСells[one].Intersect(matchedСells[two].cells, out Cell resultIntersect))
                {
                    var cells = matchedСells[one].cells.Union(matchedСells[two].cells);

                    matchedСells[one].cells = cells.ToList();

                    BonusCell bonus = new BonusCell(resultIntersect, (BonusType)matchedСells[one].Count);
                    matchedСells[one].BonusCell = bonus;

                    matchedСells.Remove(matchedСells[two]);

                }
            }
        }
    }

    public List<IProcess> DestroyMatchItem()
    {
        SetRandomColor();
        List<IProcess> processes = new List<IProcess>();
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
