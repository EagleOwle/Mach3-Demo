using System.Collections;
using UnityEngine;

namespace Match
{
    [System.Serializable]
    public class RevertHandler
    {
        private Cell cellOne;
        private Item itemOne;
        private Cell cellTwo;
        private Item itemTwo;

        public void SetCells(Cell cellOne, Cell cellTwo)
        {
            this.cellOne = cellOne;
            this.cellTwo = cellTwo;
            this.itemOne = cellOne.Item;
            this.itemTwo = cellTwo.Item;

            StartRevert();
        }

        public void Revert()
        {
            Debug.Log("RevertCell");

            if (cellOne == null || cellTwo == null)
            {
                Debug.Log("Revert is null");
                return;
            }

            if (Consilience(cellOne, itemOne) && Consilience(cellTwo, itemTwo))
            {
                Debug.Log("Revert Consilience");
                StartRevert();
                Clear();
            }
            else
            {
                Debug.Log("Revert No Consilience");
            }
        }

        private void StartRevert()
        {
            Debug.Log("StartRevert");
            cellOne.SetItem = itemTwo;
            cellTwo.SetItem = itemOne;
            itemOne = cellOne.Item;
            itemTwo = cellTwo.Item;
            
        }

        public bool Consilience(Cell cell, Item item)
        {
            if (item == null)
            {
                return false;
            }
            else
            {
                return true;
            }
        }

        private void Clear()
        {
            this.cellOne = null;
            this.cellTwo = null;
            this.itemOne = null;
            this.itemTwo = null;
        }
    }
}