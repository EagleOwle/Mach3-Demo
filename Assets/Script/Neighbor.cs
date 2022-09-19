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

    public Side side;
    public Cell cell;
}

