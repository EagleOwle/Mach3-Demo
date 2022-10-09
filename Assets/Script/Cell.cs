using System;
using UnityEngine;

public class Cell
{
    public Neighbor[] neighbors;
    public Vector2 arrayPosition;
    public Vector2 worldPosition;
    public CellType type;
    public ItemType ItemType
    {
        get
        {
            if (item != null)
            {
                return item.Type;
            }
            else
            {
                return ItemType.None;
            }
        }
    }

    private Item item;
    public Item Item
    {
        get { return item; }
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

    public Cell GetNeighborCell(Side side)
    {
        Cell neighbor = neighbors[(int)side].cell;
        return neighbor;
    }

    public bool GetNeighborItem(Side side, out Item item)
    {
        item = null;

        if (neighbors[(int)side].cell.item != null)
        {
            item = neighbors[(int)side].cell.item;
            return true;
        }
        else
        {
            return false;
        }
    }

    public void Initialise(ITapListener tapListener, Vector2 arrayPosition, Vector2 worldPosition)
    {
        this.tapListener = tapListener;
        this.arrayPosition = arrayPosition;
        this.worldPosition = worldPosition;

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

    public bool FindNeigborsCell(Cell cell, bool diagonalSearch = false)
    {
        foreach (var item in neighbors)
        {
            #region  //Исключаем поиск по диагонали
            if (diagonalSearch == false)
            {
                if (item.side == Side.EastNorth ||
                   item.side == Side.EastSouth ||
                   item.side == Side.WestNorth ||
                   item.side == Side.WestSouth)
                {
                    continue;
                }
            }
            #endregion

            if (item.cell == cell)
            {
                return true;
            }
        }

        return false;
    }

    public void MutualSubstitution(Cell targetCell)
    {
        Item nextItem = targetCell.Item;
        targetCell.Item = Item;
        Item = nextItem;
    }

    public void Deselect()
    {
        item.Deselect();
    }

    public void Select()
    {
        if (item == null) return;

        item.Select();
        this.tapListener.SelectCell(this);
    }

    public void DestroyItem()
    {
        Item.StartScaleAndHide();
        Item = null;
    }

    public void ChangeItemType(ItemType type)
    {
        Item.SetType(type);
    }

}
