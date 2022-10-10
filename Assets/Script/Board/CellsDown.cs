using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

public class CellsDown : MonoBehaviour
{
    public Action eventEndDown;
    private BoardSetting setting;
    private Cell[,] cells;

    private List<Item> cellsGoDown;

    public void Initialise(BoardSetting boardSetting, Cell[,] cells)
    {
        cellsGoDown = new List<Item>();
        this.setting = boardSetting;
        this.cells = cells;
    }

    public void StartDown()
    {
        StartCoroutine(GoDown());
    }

    private IEnumerator GoDown()
    {
        int y = 0;

        while (y < setting.boardSize.y)
        {
            DownLineX(y);
            y++;

            yield return new WaitForSeconds(setting.pauseForDownLine * Time.deltaTime);
        }

        if (cellsGoDown.Count == 0)
        {
            eventEndDown.Invoke();
        }
    }

    private void DownLineX(int y)
    {
        for (int x = 0; x < setting.boardSize.x; x++)
        {
            if (cells[x, y].type == CellType.Wall)
                continue;

            if (cells[x, y].Item == null)
                continue;

            Neighbor neighbor = cells[x, y].GetNeighbor(Side.South);

            if (neighbor.cell.type == CellType.Wall)
                continue;

            if (neighbor.cell.Item == null)
            {
                neighbor.cell.Item = cells[x, y].Item;
                cells[x, y].Item = null;
                cellsGoDown.Add(neighbor.cell.Item);
                neighbor.cell.Item.eventOnPosition += ItemOnPosition;
            }
        }
    }

    private void ItemOnPosition(Item item)
    {
        cellsGoDown.Remove(item);
        item.eventOnPosition -= ItemOnPosition;

        if (cellsGoDown.Count == 0)
        {
            eventEndDown.Invoke();
        }
    }

}
