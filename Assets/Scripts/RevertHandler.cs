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

        public void SetRevert(Cell cellOne, Cell cellTwo)
        {
            this.cellOne = cellOne;
            this.cellTwo = cellTwo;
            this.itemOne = cellOne.Item;
            this.itemTwo = cellTwo.Item;

            StartRevert();
        }

        public void Revert()
        {
            if (cellOne == null || cellTwo == null) return;


            if (Consilience(itemOne, itemTwo))
            {
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
            cellOne.SetItem = itemTwo;
            cellTwo.SetItem = itemOne;
            itemOne = cellOne.Item;
            itemTwo = cellTwo.Item;

        }

        private bool Consilience(Item itemOne, Item itemTwo)
        {
            if (itemOne == null || itemTwo == null)
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