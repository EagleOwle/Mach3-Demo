
using UnityEngine;

namespace Match
{
    public class BoardCreate : MonoBehaviour
    {
        private GamePreference gamePreference;

        public void Create(GamePreference gamePreference, out Cell[,] cells, out Cell[] firstRow)
        {
            this.gamePreference = gamePreference;
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

            FindNeiborth(cells);
        }

        private void FindNeiborth(Cell[,] cells)
        {
            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                   cells[x, y].SetNeiborth(cells);
                }
            }

        }

    }
}
