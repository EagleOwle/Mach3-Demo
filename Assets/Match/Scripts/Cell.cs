using DG.Tweening;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public class Cell : MonoBehaviour
    {
        [SerializeField] private RectTransform rectTransform;
        [SerializeField] private TextMeshProUGUI text;

        public Vector2 Size
        {
            get
            {
                return rectTransform.sizeDelta;
            }

            set
            {
                rectTransform.sizeDelta = value;
            }
        }

        private int x, y;

        public Cell Top;
        public Cell Right;
        public Cell Bottom;
        public Cell Left;

        [SerializeField] private Item item;
        public void SetItem(Item item)
        {
            this.item = item;
            this.item.transform.SetParent(transform);
        }

        public Type Type
        {
            get
            {
                if (item == null)
                {
                    text.text = "None";
                    return Type.None;
                }
                else
                {
                    text.text = item.Type.ToString();
                    return item.Type;
                }
            }
        }

        private GamePreference preference;

        public void SpawnRandomType()
        {
            Item item = Instantiate(preference.prefabStore.prefabItem, transform);
            this.item = item;
            this.item.Initialise(preference);
            this.item.SetRandomType();
        }

        public void Initialise(int x, int y,  GamePreference preference, Cell[,] cells)
        {
            this.preference = preference;
            this.x = x;
            this.y = y;
            SetNeiborth(cells);
        }

        private void SetNeiborth(Cell[,] cells)
        {
            Left = x > 0 ? cells[x - 1, y] : null;
            Bottom = y > 0 ? cells[x, y - 1] : null;
            Right = x < cells.GetLength(0) - 1 ? cells[x + 1, y] : null;
            Top = y < cells.GetLength(1) - 1 ? cells[x, y + 1] : null;
        }

        public Sequence ScaleEffect(float tweenDuration, Sequence sequence)
        {
            item.transform.localScale = Vector3.zero;
            sequence.Join(item.transform.DOScale(Vector3.one, tweenDuration));
            return sequence;
        }

        public void Fall(float tweenDuration, ref Sequence sequence)
        {
            if (item == null) return;

            Cell lastCell = FindLastBottom(Bottom);

            if (lastCell != null)
            {
                Vector2 bottomPosition = new Vector2(lastCell.transform.position.x + lastCell.Size.x / 2, lastCell.transform.position.y + lastCell.Size.y / 2);
                sequence.Join(item.transform.DOMove(bottomPosition, tweenDuration));
                //Bottom.SetItem(item);
                item = null;
            }
        }


        public Cell FindLastBottom(Cell cell)
        {
            Cell bottom = null;

            if (cell != null && cell.Type == Type.None)
            {
                bottom = cell;
                Cell tmp = FindLastBottom(cell.Bottom);
                if (tmp != null)
                {
                    bottom = tmp;
                }
            }

            return bottom;
        }

        public Vector2 FindDownPosition(Cell cell)
        {
            Vector2 position = new Vector2(cell.transform.position.x + cell.Size.x / 2, cell.transform.position.y + cell.Size.y / 2);

            if (cell.Bottom != null && cell.Bottom.Type == Type.None)
            {
                position = FindDownPosition(cell.Bottom);
            }

            return position;
        }

    }
}
