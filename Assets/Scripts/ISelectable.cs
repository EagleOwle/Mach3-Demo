namespace Match
{
    public interface ISelectable
    {
        void OnSelected(Cell cell, out bool isSelect);
    }
}
