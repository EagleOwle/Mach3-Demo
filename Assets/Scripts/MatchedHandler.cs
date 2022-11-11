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

    public void FindMatch(Cell[,] cells)
    {
        matchedСells.Clear();

        for (int y = 0; y < cells.GetLength(1); y++)
        {
            for (int x = 0; x < cells.GetLength(0); x++)
            {
                if (ContainsCell(cells[x, y])) continue;

                List<Cell> vertical = new List<Cell>();
                cells[x, y].GetMatchNeigbor(Direction.Top, vertical);
                if (vertical.Count >= gamePreference.boardSetting.minMatchCount)
                {
                    matchedСells.Add(new MatchedСells(vertical, FigureType.Line, Direction.Top));
                }


                List<Cell> horizontal = new List<Cell>();
                cells[x, y].GetMatchNeigbor(Direction.Right, horizontal);
                if (horizontal.Count >= gamePreference.boardSetting.minMatchCount)
                {
                    matchedСells.Add(new MatchedСells(horizontal, FigureType.Line, Direction.Right));
                }

            }
        }
    }

    public void FindIntersectCells()
    {
        for (int i = 0; i < matchedСells.Count; i++)
        {
            for (int ii = 0; ii < matchedСells.Count; ii++)
            {
                if (i == ii) continue;

                if (matchedСells[i].Intersect(matchedСells[ii].cells, out List<Cell> resultIntersect))
                {
                    FigureType figure = bonusCalculate.Figure(matchedСells[i], matchedСells[ii], resultIntersect[0]);

                    //var result = matchedСells[i].cells.Union(matchedСells[ii].cells).ToList();
                }
            }
        }
    }

    private bool ContainsCell(Cell cell)
    {
        for (int i = 0; i < matchedСells.Count; i++)
        {
            if (matchedСells[i].ContainsCell(cell)) return true;
        }

        return false;
    }

    public List<Process> DestroyMatchItem()
    {
        List<Process> processes = new List<Process>();
        for (int i = 0; i < matchedСells.Count; i++)
        {
            //List<ProcessDestroy> processes = matchedСellsArray[i].DestroyItem();
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
            }
        }

    }

}
