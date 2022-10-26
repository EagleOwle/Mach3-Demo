namespace Match
{
    [System.Serializable]
    public class Revert
    {
        public Revert(Cell cell)
        {
            this.cell = cell;
            this.item = cell.Item;
        }

        public Cell Cell => cell;
        private Cell cell;
        private Item item;

        public bool Consilience
        {
            get
            {
                if (item == null)
                {
                    return false;
                }

                if (cell.Item == item)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}
