
using UnityEngine;

namespace Match
{
    public class BoardCreate : MonoBehaviour
    {
        public void Create(GamePreference gamePreference, out Cell[,] cells, out Cell[] firstRow)
        {
            Vector2 boardSize = new Vector2(gamePreference.boardSetting.sizeX, gamePreference.boardSetting.sizeY);
            cells = new Cell[gamePreference.boardSetting.sizeX, gamePreference.boardSetting.sizeY];
            firstRow = new Cell[gamePreference.boardSetting.sizeX];

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    Cell cell = Instantiate(gamePreference.prefabStore.prefabCell, transform);
                    cell.gameObject.name = "Cell" + cell.transform.GetSiblingIndex();
                    cells[x, y] = cell;

                    SetLocalPosition(cell, boardSize, x, y);

                    if (y == gamePreference.boardSetting.sizeY - 1)
                    {
                        firstRow[x] = cell;
                    }
                }
            }
        }

        private void SetLocalPosition(Cell cell, Vector2 boardSize, int x, int y)
        {
            RectTransform transform = cell.transform as RectTransform;
            RectTransform parentTransform = this.transform as RectTransform;

            transform.sizeDelta = new Vector2(parentTransform.rect.size.x / boardSize.x,
                                              parentTransform.rect.size.y / boardSize.y);

            transform.localPosition = new Vector2(((parentTransform.rect.size.x / boardSize.x) * x) + transform.sizeDelta.x/2,
                                                       ((parentTransform.rect.size.y / boardSize.y) * y) + transform.sizeDelta.y/2);
        }

        

        

    }
}
