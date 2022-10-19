using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

public class SelectorHandler : MonoBehaviour, ITapListener
{
    private Cell selected;
    private Substitution[] itemsAfterSubstitution;

    private List<Item> waitForMove;

    public void Initialise(ref Action eventEndFind)
    {
        waitForMove = new List<Item>();
        itemsAfterSubstitution = new Substitution[2];
        eventEndFind += EndFind;
    }

    public void SelectCell(Cell cell)
    {
        if (selected == null)
        {
            selected = cell;
            return;
        }

        if (selected == cell)
        {
            return;
        }

        if (selected.FindNeigborsCell(cell))
        {
            cell.MutualSubstitution(selected);

            waitForMove.Clear();
            waitForMove.Add(cell.Item);
            waitForMove.Add(selected.Item);
            cell.Item.eventOnPosition += ItemOnPosition;
            selected.Item.eventOnPosition += ItemOnPosition;

            Clear();
            itemsAfterSubstitution[0].cell = cell;
            itemsAfterSubstitution[0].Item = cell.Item;
            itemsAfterSubstitution[1].cell = selected;
            itemsAfterSubstitution[1].Item = selected.Item;

            selected.Deselect();
            selected = null;
            
        }
        else
        {
            selected.Deselect();
            selected = cell;
        }
    }

    private void ItemOnPosition(Item obj)
    {
        obj.eventOnPosition -= ItemOnPosition;
        waitForMove.Remove(obj);

        if(waitForMove.Count == 0)
        {
            StateMachine.SetState<StateFindLine>();
        }

    }

    private void Clear()
    {
        itemsAfterSubstitution[0].cell = null;
        itemsAfterSubstitution[0].Item = null;
        itemsAfterSubstitution[1].cell = null;
        itemsAfterSubstitution[1].Item = null;
    }

    private void EndFind()
    {
        if(itemsAfterSubstitution[0].Item != null &&
           itemsAfterSubstitution[1].Item != null)
        {
            itemsAfterSubstitution[1].cell.MutualSubstitution(itemsAfterSubstitution[0].cell);
            Clear();
        }

        StateMachine.SetState<StateInput>();
    }

    private struct Substitution
    {
        public Cell cell;
        public Item Item;
    }
}
