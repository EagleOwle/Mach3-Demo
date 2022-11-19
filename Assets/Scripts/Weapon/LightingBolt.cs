using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof (MotionItem))]
public class LightingBolt : MonoBehaviour
{
    [SerializeField] private float moveDenominator;
    [SerializeField] private MotionItem motion;

    private Cell currentCell;
    private Direction currentDirection;

    public void Initialise(Cell currentCell, Direction currentDirection, BoardSetting setting)
    {
        this.currentCell = currentCell;
        this.currentDirection = currentDirection;
        motion.eventEndMove += EndMove;

        motion.Initialise(setting.durationMove / moveDenominator);
        SetParentAndMoveZero(this.currentCell);
    }

    private void EndMove()
    {
        MoveDirection(this.currentDirection);
    }

    private void SetParentAndMoveZero(Cell parent)
    {
        transform.SetParent(parent.transform);
        transform.SetAsLastSibling();
        motion.MoveZeroPosition();
    }

    private void MoveDirection(Direction direction)
    {
        if (currentCell.GetNeiborth(direction, out Cell neiborth))
        {
            currentCell = neiborth;
            SetParentAndMoveZero(currentCell);
        }
        else
        {
            Debug.Log("Null neiborth in direction " + currentDirection);
        }
    }

}
