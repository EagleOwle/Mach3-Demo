using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum CellType
{
    Block,
    Game
}

public class Cell
{
    public Action<Cell> actionOnTap;
    public Neighbor[] neighbors;
    public Vector2 arrayPosition;
    public Vector2 worldPosition;
    public CellType type;
    public Item item;
    private bool isSelect = false;

    public void SetItem(Item item)
    {
        this.item = item;
        item.transform.position = worldPosition;
    }

    public Neighbor GetNeighbor(Neighbor.Side side)
    {
        return neighbors[(int)side];
    }

    public void Initialise(ITapListener tapListener, Vector2 arrayPosition)
    {
        actionOnTap += tapListener.OnTap;
        this.arrayPosition = arrayPosition;
        neighbors = new Neighbor[]
        {
            new Neighbor(Neighbor.Side.North),
            new Neighbor(Neighbor.Side.EastNorth),
            new Neighbor(Neighbor.Side.East),
            new Neighbor(Neighbor.Side.EastSouth),
            new Neighbor(Neighbor.Side.South),
            new Neighbor(Neighbor.Side.WestSouth),
            new Neighbor(Neighbor.Side.West),
            new Neighbor(Neighbor.Side.WestNorth)
        };
    }

    public void Deselect()
    {
        isSelect = false;
    }

    public void Select()
    {
        if (isSelect == true) return;

        isSelect = true;
        actionOnTap.Invoke(this);
    }

    

}
