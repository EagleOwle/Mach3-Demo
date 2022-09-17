using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITapListener
{
    void OnTap(Cell item);
}

public class Board : MonoBehaviour, ITapListener
{
    [SerializeField] private Vector2 boardSize;
    [SerializeField] private Vector2 screenOffset;
    [SerializeField] private float itemSize;
    [SerializeField] private Item itemPrefab;

    private Cell[,] cells;
    private List<Cell> lastLine;
    private Cell currentSelect;

    private void Start()
    {
        cells = new Cell[(int)boardSize.x, (int)boardSize.y];

        lastLine = new List<Cell>();


        for (int iy = 0; iy < boardSize.y; iy++)
        {
            for (int ix = 0; ix < boardSize.x; ix++)
            {
                Cell cell = new Cell();
                cell.Initialise(this, new Vector2(ix,iy));
                cell.worldPosition = WorldPosition(new Vector2(ix, iy));
                cells[ix, iy] = cell;

                if(iy == cells.GetLength(1)-2)
                {
                    if (ix > 0 && ix < cells.GetLength(0) - 1)
                    {
                        lastLine.Add(cell);
                    }
                }

                if (ix == 0 || ix == cells.GetLength(0) - 1 || iy == 0 || iy == cells.GetLength(1) - 1)
                {
                    cell.type = CellType.Block;
                }
                else
                {
                    cell.type = CellType.Game;
                }

            }
        }

        for (int ix = 0; ix < boardSize.x; ix++)
        {
            for (int iy = 0; iy < boardSize.y; iy++)
            {
                Cell item = cells[ix, iy];
                foreach (var cell in item.neighbors)
                {
                    SetNeiborth(cell, new Vector2(ix, iy));
                }
            }
        }

        SpawnFirstItem();
        StartCoroutine(GoDown());
    }

    private void SpawnFirstItem()
    {
        foreach (var cell in lastLine)
        {
            if (cell.item == null)
            {
                Vector3 worldPosition = WorldPosition(cell.arrayPosition);
                Item tmp = Instantiate(itemPrefab, worldPosition, Quaternion.identity, transform);
                cell.item = tmp;
            }
        }
    }

    private IEnumerator GoDown()
    {
        int y = 0;

        while (y < boardSize.y)
        {
            for (int x = 0; x < boardSize.x; x++)
            {
                if (cells[x, y].type == CellType.Block)
                    continue;

                if (cells[x, y].item == null)
                    continue;

                Neighbor neighbor = cells[x, y].GetNeighbor(Neighbor.Side.South);

                if (neighbor.cell.type == CellType.Block)
                    continue;

                if (neighbor.cell.item == null)
                {
                    neighbor.cell.SetItem(cells[x, y].item);
                    cells[x, y].item = null;
                }
            }

            Debug.Log("GoDown y= " + y);
            y++;
            
            yield return new WaitForSeconds(0.1f);
        }

        StartCoroutine(GoDown());
    }

    private Vector2 WorldPosition(Vector2 arrayPosition)
    {
        float x = (arrayPosition.x * itemSize) - boardSize.x / 2 + screenOffset.x;
        float y = (arrayPosition.y * itemSize) - boardSize.y / 2 + screenOffset.y;
        return new Vector2(x, y);
    }

    public void OnTap(Cell item)
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

                if (x < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                {
                    if (cells[x, y + 1] != null)
                    {
                        neighbor.cell = cells[x, y + 1];
                    }
                }
                break;
            case Neighbor.Side.EastNorth:
                if (x + 1 < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                {
                    if (cells[x + 1, y + 1] != null)
                    {
                        neighbor.cell = cells[x + 1, y + 1];
                    }
                }
                break;
            case Neighbor.Side.East:
                if (x + 1 < cells.GetLength(0) && y < cells.GetLength(1))
                {
                    if (cells[x + 1, y] != null)
                    {
                        neighbor.cell = cells[x + 1, y];
                    }
                }
                break;
            case Neighbor.Side.EastSouth:
                if (y > 0)
                {
                    if (x + 1 < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x + 1, y - 1] != null)
                        {
                            neighbor.cell = cells[x + 1, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.South:
                if (y > 0)
                {
                    if (x < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x, y - 1] != null)
                        {
                            neighbor.cell = cells[x, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.WestSouth:
                if (x > 0 && y > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y - 1 < cells.GetLength(1))
                    {
                        if (cells[x - 1, y - 1] != null)
                        {
                            neighbor.cell = cells[x - 1, y - 1];
                        }
                    }
                }
                break;
            case Neighbor.Side.West:
                if (x > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y < cells.GetLength(1))
                    {
                        if (cells[x - 1, y] != null)
                        {
                            neighbor.cell = cells[x - 1, y];
                        }
                    }
                }

                break;
            case Neighbor.Side.WestNorth:
                if (x > 0)
                {
                    if (x - 1 < cells.GetLength(0) && y + 1 < cells.GetLength(1))
                    {
                        if (cells[x - 1, y + 1] != null)
                        {
                            neighbor.cell = cells[x - 1, y + 1];
                        }
                    }
                }
                break;
        }
    }

    private void OnDrawGizmos()
    {
        if (cells == null) return;

        for (int ix = 0; ix < cells.GetLength(0); ix++)
        {
            for (int iy = 0; iy < cells.GetLength(1); iy++)
            {
                if (cells[ix, iy] != null)
                {
                    if(cells[ix,iy].type == CellType.Block)
                    {
                        Gizmos.color = Color.red;
                    }
                    else
                    {
                        Gizmos.color = Color.green;
                    }

                    Vector3 worldPosition = WorldPosition(new Vector2(ix, iy));
                    Gizmos.DrawWireCube(worldPosition, new Vector3(1, 1, 1));

                    if (cells[ix, iy].item != null)
                    {
                        Gizmos.DrawWireSphere(worldPosition, 0.4f);
                    }
                }
            }
        }

        Gizmos.color = Color.blue;
        foreach (var item in lastLine)
        {
            Vector3 worldPosition = WorldPosition(item.arrayPosition);
            Gizmos.DrawWireCube(worldPosition, new Vector3(1, 1, 1));
        }

    }

}
