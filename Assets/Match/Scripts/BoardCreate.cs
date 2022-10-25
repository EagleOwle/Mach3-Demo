
using UnityEngine;

namespace Match
{
    public class BoardCreate : MonoBehaviour
    {
        [SerializeField] Vector2 sizeOffset;

        private void Start()
        {
            sizeOffset = Vector2.one - ((transform as RectTransform).anchorMax - (transform as RectTransform).anchorMin);
        }

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

                    Vector2 screenSize = new Vector2(Screen.width, Screen.height);
                    RectTransform rectTransform = cells[x, y].transform as RectTransform;

                    Vector2 offset = new Vector2(Screen.width / 100 * sizeOffset.x, Screen.width / 100 * sizeOffset.y);

                    rectTransform.sizeDelta = new Vector2(((Screen.width + offset.x) / (gamePreference.boardSetting.sizeX + 1)), ((Screen.height + offset.y) / (gamePreference.boardSetting.sizeY + 1)));
                    cells[x, y].transform.localPosition = new Vector2((x + sizeOffset.x/2) * (Screen.width / gamePreference.boardSetting.sizeX), 
                                                                      (y + sizeOffset.y/2) * (Screen.height / gamePreference.boardSetting.sizeY));
                }
            }
        }

    }
}
