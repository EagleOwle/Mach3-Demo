using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    [System.Serializable]
    public class Cell : MonoBehaviour
    {
        public int x, y;
        public Image image;
        [SerializeField] private RectTransform imageTransform;
        public Vector2 Size
        {
            get
            {
                return imageTransform.sizeDelta;
            }

            set
            {
                imageTransform.sizeDelta = value;
            }
        }

        public Cell Top;
        public Cell Right;
        public Cell Bottom;
        public Cell Left;

        public void SetNeiborth(Cell[,] cells)
        {
            Left = x > 0 ? cells[x - 1, y] : null;
            Top = y > 0 ? cells[x, y - 1] : null;
            Right = x < cells.GetLength(0) - 1 ? cells[x + 1, y] : null;
            Bottom = y < cells.GetLength(1) - 1 ? cells[x, y + 1] : null;
        }

        //public Cell[] Neighbors => new[]
        //{
        //    Left,
        //    Top,
        //    Right,
        //    Bottom
        //};

        //private Cell Left => x > 0 ? Board.Instance.Tiles[x - 1, y] : null;
        //private Cell Top => y > 0 ? Board.Instance.Tiles[x, y - 1] : null;
        //private Cell Right => x < Board.Instance.Width - 1 ? Board.Instance.Tiles[x + 1, y] : null;
        //private Cell Bottom => y < Board.Instance.Height - 1 ? Board.Instance.Tiles[x, y + 1] : null;




    }
}
