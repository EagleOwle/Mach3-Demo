using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public class Cell : MonoBehaviour
    {
        [Header("Reference")]
        [SerializeField] private RectTransform rectTransform;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private Button button;

        public Type Type
        {
            get
            {
                text.transform.SetAsLastSibling();

                if (item == null)
                {
                    text.text = "None \n" + boardX + " / " + boardY;
                    return Type.None;
                }
                else
                {
                    text.text = item.Type + "\n" + boardX + " / " + boardY;
                    return item.Type;
                }
            }
        }

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

        private int boardX, boardY;
        public Vector2 boardPosition => (new Vector2(boardX, boardY));

        [Header("Neiborth")]
        public Cell Top;
        public Cell Right;
        public Cell Bottom;
        public Cell Left;

        private Item item;
        public Item Item
        {
            get
            {
                return item;
            }

            set
            {
                this.item = value;
                this.item.transform.SetParent(transform);
            }
        }
        
        private GamePreference preference;
        private ISelectable selectable;

        public void Initialise(int x, int y, GamePreference preference, Cell[,] cells, ISelectable selectable)
        {
            this.selectable = selectable;
            this.preference = preference;
            this.boardX = x;
            this.boardY = y;
            SetNeiborth(cells);

            button.onClick.AddListener(() => Selected());
        }

        public Item SpawnRandomType()
        {
            item = Instantiate(preference.prefabStore.prefabItem, transform);
            item.Initialise(preference, Size);
            item.SetRandomType();
            item.StartScaleAndShow();
            return item;
        }

        private void SetNeiborth(Cell[,] cells)
        {
            Left = boardX > 0 ? cells[boardX - 1, boardY] : null;
            Bottom = boardY > 0 ? cells[boardX, boardY - 1] : null;
            Right = boardX < cells.GetLength(0) - 1 ? cells[boardX + 1, boardY] : null;
            Top = boardY < cells.GetLength(1) - 1 ? cells[boardX, boardY + 1] : null;
        }

        public void FallingDown()
        {
            if (item == null) return;

           Cell lastCell = FindTheLatestBelow(Bottom);

            if (lastCell != null)
            {
                if (lastCell.item != null)
                {
                    Debug.LogError("Cell.Item not empty");
                }

                lastCell.Item = item;
                lastCell.Item.MovePosition();
                item = null;
            }
        }

        public Cell FindTheLatestBelow(Cell currentCcell)
        {
            Cell bottom = null;

            if (currentCcell != null && currentCcell.Type == Type.None)
            {
                bottom = currentCcell;
                Cell tmp = FindTheLatestBelow(currentCcell.Bottom);
                if (tmp != null)
                {
                    bottom = tmp;
                }
            }

            return bottom;
        }

        public void DestroyItem()
        {
            if (item == null) return;
            item.StartScaleAndHide();
        }

        public void GetMatchNeigbor(Direction direction, Type type, List<Cell> tmpCells)
        {
            if (this.Type == Type.None) return;

            if (tmpCells.Contains(this) == false)
            {
                tmpCells.Add(this);
            }

            switch (direction)
            {
                case Direction.Top:
                    if (Top != null && Top.Type == type)
                    {
                        Top.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Right:
                    if (Right != null && Right.Type == type)
                    {
                        Right.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Bottom:
                    if (Bottom != null && Bottom.Type == type)
                    {
                        Bottom.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Left:
                    if (Left != null && Left.Type == type)
                    {
                        Left.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                default:
                    Debug.LogError("No direction value: " + direction);
                    break;
            }
        }

        private void Selected()
        {
            //Debug.Log("Selected " + boardX + "/" + boardY);
            if (item == null) return;

            item.Selected();
            selectable.OnSelected(this);
        }

        public void Deselected()
        {
            Debug.Log("Cell Deselected " + boardX + "/" + boardY);
            //if (item == null) return;
            item.Deselected();
            selectable.OnDeselected(this);
        }

    }
}
