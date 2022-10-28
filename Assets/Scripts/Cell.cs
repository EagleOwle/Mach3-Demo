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
        [SerializeField] private Image image;

        public Type Type
        {
            get
            {
                text.transform.SetAsLastSibling();

                if (Item == null)
                {
                    text.text = "None \n" + boardX + " / " + boardY;
                    return Type.None;
                }
                else
                {
                    text.text = Item.Type + "\n" + boardX + " / " + boardY;
                    return Item.Type;
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

        public Item Item { get; private set; }
        public Item SetItem
        {
            set
            {
                Item = value;
                Item.transform.SetParent(transform);
                Item.MovePosition();
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

        public Item SpawnRandomType(out ProcessSpawn process)
        {
            Item = Instantiate(preference.prefabStore.prefabItem, transform);
            process = Item.gameObject.AddComponent<ProcessSpawn>();
            Item.Initialise(preference, Size);
            Item.SetRandomType();
            //Item.StartScaleAndShow();
            return Item;
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
            if (Item == null) return;

           Cell lastCell = FindTheLatestBelow(Bottom);

            if (lastCell != null)
            {
                if (lastCell.Item != null)
                {
                    Debug.LogError("Cell.Item not empty");
                }

                lastCell.SetItem = Item;
                Item = null;
            }
        }

        public Cell FindTheLatestBelow(Cell currentCell)
        {
            Cell bottom = null;

            if (currentCell != null && currentCell.Type == Type.None)
            {
                bottom = currentCell;
                Cell tmp = FindTheLatestBelow(currentCell.Bottom);
                if (tmp != null)
                {
                    bottom = tmp;
                }
            }

            return bottom;
        }

        public void DestroyItem()
        {
            if (Item == null) return;
            Item.StartScaleAndHide();
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

        public bool IsNeighbor(Cell cell)
        {
            if (Top == cell) return true;
            if (Left == cell) return true;
            if (Right == cell) return true;
            if (Bottom == cell) return true;
            return false;
        }

        private void Selected()
        {
            Item.Selected();
            selectable.OnSelected(this, out bool isSelect);

            if(isSelect)
            image.color = Color.white;
        }

        public void Deselected()
        {
            Item.Deselected();
            image.color = Color.black;
        }

    }
}
