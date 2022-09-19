using System;
using UnityEngine;

public class Cell
{
    public Neighbor[] neighbors;
    public Vector2 arrayPosition;
    public Vector2 worldPosition;
    public CellType type;
    private Item item;
    public Item Item
    {
        get
        {
            return item;
        }
        set
        {
            item = value;

            if (item != null)
            {
                item.Deselect();
                item.GoToPosition(worldPosition);
            }
        }
    }

    private ITapListener tapListener;

    public Neighbor GetNeighbor(Side side)
    {
        return neighbors[(int)side];
    }

    public void Initialise(ITapListener tapListener, Vector2 arrayPosition, Vector2 worldPosition)
    {
        this.tapListener = tapListener;
        this.arrayPosition = arrayPosition;
        this.worldPosition = worldPosition;
        //Debug.Log("ArrayPosition = " + arrayPosition);
        neighbors = new Neighbor[]
        {
            new Neighbor(Side.North),
            new Neighbor(Side.EastNorth),
            new Neighbor(Side.East),
            new Neighbor(Side.EastSouth),
            new Neighbor(Side.South),
            new Neighbor(Side.WestSouth),
            new Neighbor(Side.West),
            new Neighbor(Side.WestNorth)
        };

        Tap tap = GameObject.Instantiate(PrefabStore.Instance.tapPrefab);
        Transform board = GameObject.Find("Board").transform;
        tap.transform.position = worldPosition;
        tap.transform.SetParent(board);
        tap.Initialise(this);

    }

    public bool CheckNeigbors(Cell cell)
    {
        foreach (var item in neighbors)
        {
            if(item.cell == cell)
            {
                Item nextItem = cell.Item;
                cell.Item = Item;
                Item = nextItem;
                return true;
            }
        }

        return false;
    }

    public void Deselect()
    {
        item.Deselect();
    }

    public void Select()
    {
        item.Select();
        this.tapListener.SelectCell(this);
    }

    public void DestroyItem()
    {
        Item.SelfDestroy();
        Item = null;
    }

}
