using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITapListener
{
    void OnTap(Item item);
}

public class Board : MonoBehaviour, ITapListener
{
    [SerializeField] private Vector2 boardSize;
    [SerializeField] private Vector2 screenOffset;
    [SerializeField] private float itemSize;
    [SerializeField] private Item itemPrefab;

    private Item[,] items;
    private Item currentSelect;

    private void Start()
    {
        items = new Item[(int)boardSize.x, (int)boardSize.y];

        Debug.Log("Item size x= " + items.GetLength(0));
        Debug.Log("Item size y= " + items.GetLength(1));

        for (int ix = 0; ix < boardSize.x; ix++)
        {
            for (int iy = 0; iy < boardSize.y; iy++)
            {
                float x = (ix * itemSize) - boardSize.x / 2 + screenOffset.x;
                float y = (iy * itemSize) - boardSize.y / 2 + screenOffset.y;
                Item item = Instantiate(itemPrefab, new Vector3(x, y, 0), Quaternion.identity);
                item.Initialise(this);
                items[ix, iy] = item;
            }
        }

        for (int ix = 0; ix < boardSize.x; ix++)
        {
            for (int iy = 0; iy < boardSize.y; iy++)
            {
                Item item = items[ix, iy];
                foreach (var cell in item.Neighbors)
                {
                    SetNeiborth(cell, new Vector2(ix, iy));
                }
            }
        }
    }

    public void OnTap(Item item)
    {
        if (currentSelect != null && currentSelect != item)
        {
            currentSelect.Deselect();
        }

        currentSelect = item;
    }

    public void SetNeiborth(Neighbor neighbor, Vector2 position)
    {
        int x = (int)position.x;
        int y = (int)position.y;

        switch (neighbor.side)
        {
            case Neighbor.Side.North:

                if (x < items.GetLength(0) && y + 1 < items.GetLength(1))
                {
                    if (items[x, y + 1] != null)
                    {
                        neighbor.item = items[x, y + 1];
                    }
                }
                break;
            case Neighbor.Side.EastNorth:
                if (x + 1 < items.GetLength(0) && y + 1 < items.GetLength(1))
                {
                    if (items[x + 1, y + 1] != null)
                    {
                        neighbor.item = items[x + 1, y + 1];
                    }
                }
                break;
            case Neighbor.Side.East:
                if (x + 1 < items.GetLength(0) && y < items.GetLength(1))
                {
                    if (items[x + 1, y] != null)
                    {
                        neighbor.item = items[x + 1, y];
                    }
                }
                break;
            case Neighbor.Side.EastSouth:
                if (y > 0)
                {
                    if (x + 1 < items.GetLength(0) && y - 1 < items.GetLength(1))
                    {
                        if (items[x + 1, y - 1] != null)
                        {
                            neighbor.item = items[x + 1, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.South:
                if (y > 0)
                {
                    if (x < items.GetLength(0) && y - 1 < items.GetLength(1))
                    {
                        if (items[x, y - 1] != null)
                        {
                            neighbor.item = items[x, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.WestSouth:
                if (x > 0 && y > 0)
                {
                    if (x - 1 < items.GetLength(0) && y - 1 < items.GetLength(1))
                    {
                        if (items[x - 1, y - 1] != null)
                        {
                            neighbor.item = items[x - 1, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.West:
                if (x > 0)
                {
                    if (x - 1 < items.GetLength(0) && y < items.GetLength(1))
                    {
                        if (items[x - 1, y] != null)
                        {
                            neighbor.item = items[x - 1, y];
                        }
                    }
                }

                break;
            case Neighbor.Side.WestNorth:
                if (x > 0)
                {
                    if (x - 1 < items.GetLength(0) && y + 1 < items.GetLength(1))
                    {
                        if (items[x - 1, y + 1] != null)
                        {
                            neighbor.item = items[x - 1, y + 1];
                        }
                    }
                }
                break;
        }
    }



}
