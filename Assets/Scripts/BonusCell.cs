public class BonusCell
{
    public Cell cell;
    public BonusType bonusType;

    public BonusCell(Cell cell, BonusType bonusType)
    {
        this.cell = cell;
        this.bonusType = bonusType;
    }

    public void Implement()
    {
        cell.SpawnBonusItem();
    }
}
