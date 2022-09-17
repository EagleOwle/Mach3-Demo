using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Neighbor
{
    public Neighbor(Side side)
    {
        this.side = side;
    }

    public enum Side
    {
        North,
        EastNorth,
        East,
        EastSouth,
        South,
        WestSouth,
        West,
        WestNorth
    }

    public Side side;
    public Cell cell;
}

public struct SideValue
{

}
