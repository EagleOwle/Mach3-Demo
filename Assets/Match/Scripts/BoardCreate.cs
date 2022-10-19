
using UnityEngine;

namespace Match
{
    public class BoardCreate : MonoBehaviour
    {
        public void Create(GamePreference gamePreference, out Cell[,] cells, out Cell[] firstRow)
        {
            cells = new Cell[gamePreference.boardSetting.sizeX, gamePreference.boardSetting.sizeY];
            firstRow = new Cell[gamePreference.boardSetting.sizeX];

            FlexibleGridLayout gridLayout = GetComponent<FlexibleGridLayout>();
            gridLayout.ColumnCount = gamePreference.boardSetting.sizeX;
            gridLayout.RowCount = gamePreference.boardSetting.sizeY;

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    Cell cell = Instantiate(gamePreference.prefabStore.prefabCell, transform);
                    cells[x, y] = cell;

                    if (y == gamePreference.boardSetting.sizeY - 1)
                    {
                        firstRow[x] = cell;
                    }
                }
            }

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    cells[x, y].Initialise(x, y, gamePreference, cells);
                }
            }
        }

    }
}
