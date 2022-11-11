using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public enum FigureType
{
    Line,
    Angle,
    T,
    Cross,
}

public class BonusCalculate
{
     public enum PositionType
    {
        Errore = 0,
        Edge = 1,
        Middle = 2
    }

    public FigureType Figure(MatchedСells arrayOne, MatchedСells arrayTwo, Cell cell)
    {
        FigureType figure = FigureType.Line;
        PositionType one = CheckPosition(arrayOne.cells, cell);
        PositionType two = CheckPosition(arrayTwo.cells, cell);

        if(one == PositionType.Edge && two == PositionType.Edge)
        {
            figure = FigureType.Angle;
        }

        if (one == PositionType.Middle && two == PositionType.Edge ||
            one == PositionType.Edge && two == PositionType.Middle)
        {
            figure = FigureType.T;
        }

        if (one == PositionType.Middle && two == PositionType.Middle)
        {
            figure = FigureType.Cross;
        }

        arrayOne.figureType = figure;
        arrayTwo.figureType = figure;
        return figure;
    }

    private PositionType CheckPosition(List<Cell> array, Cell cell)
    {
        int index = array.LastIndexOf(cell);

        if (index == 0 || index == array.Count-1)
        {
            return PositionType.Edge;
        }
        else
        {
            return PositionType.Middle;
        }
    }
}
