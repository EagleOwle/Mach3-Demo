using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tap : MonoBehaviour
{
    private Cell cell;

    public void Initialise(Cell cell)
    {
        this.cell = cell;
    }

    private void OnMouseDown()
    {
        if (StateMachine.currentState is StateInput)
        {
            cell.Select();
        }
    }
}
