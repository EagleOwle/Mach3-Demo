using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public class Cell : MonoBehaviour
    {
        [SerializeField] private RectTransform rectTransform;
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
                return item.Type;
            }
        }

        public void SetRandomType() => item.SetRandomType();

        public void Initialise(int x, int y,  GamePreference preference, Cell[,] cells)
        {
            this.x = x;
            this.y = y;
            SetNeiborth(cells);
            item.Initialise(preference);
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

        public Sequence Fall(float tweenDuration, Sequence sequence)
        {
            sequence.Join(item.transform.DOMove(Bottom.transform.position, tweenDuration));
            Bottom.SetItem(item);
            return sequence;
        }

        //private void OnDrawGizmosSelected()
        //{
        //    Gizmos.color = Color.blue;
        //    RectTransform rectTransform = GetComponent<RectTransform>();
        //    Gizmos.matrix = rectTransform.localToWorldMatrix;// CanvasExtensions.GetCanvasMatrix(canvas);
        //    Gizmos.DrawWireCube(Vector3.zero, Vector3.one * 30);

        //    if (Top != null)
        //    {
        //        rectTransform = Top.GetComponent<RectTransform>();
        //        Gizmos.matrix = rectTransform.localToWorldMatrix;
        //        Gizmos.DrawWireCube(Vector3.zero, Vector3.one * 30);
        //    }

        //    if (Right != null)
        //    {
        //        rectTransform = Right.GetComponent<RectTransform>();
        //        Gizmos.matrix = rectTransform.localToWorldMatrix;
        //        Gizmos.DrawWireCube(Right.transform.position, Vector3.one * 30);
        //    }

        //    if (Bottom != null)
        //    {
        //        rectTransform = Bottom.GetComponent<RectTransform>();
        //        Gizmos.matrix = rectTransform.localToWorldMatrix;
        //        Gizmos.DrawWireCube(Bottom.transform.position, Vector3.one * 30);
        //    }

        //    if (Left != null)
        //    {
        //        rectTransform = Left.GetComponent<RectTransform>();
        //        Gizmos.matrix = rectTransform.localToWorldMatrix;
        //        Gizmos.DrawWireCube(Left.transform.position, Vector3.one * 30);
        //    }
        //}

    }
}
