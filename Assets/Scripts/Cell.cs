using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Cell : MonoBehaviour
{
    [Header("Reference")]
    [SerializeField] private RectTransform rectTransform;
    [SerializeField] private TextMeshProUGUI text;
    [SerializeField] private Button button;
    [SerializeField] private Image image;
    [SerializeField] private VisualEffect effect;

    public Type Type
    {
        get
        {
            if (Item == null)
            {
                return Type.None;
            }
            else
            {
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

    public bool GetNeiborth(Direction direction, out Cell neiborth)
    {
        neiborth = null;
        switch (direction)
        {
            case Direction.Top:
                if (Top)
                {
                    neiborth = Top;
                    return true;
                }
                break;
            case Direction.Right:
                if (Right)
                {
                    neiborth = Right;
                    return true;
                }
                break;
            case Direction.Bottom:
                if (Bottom)
                {
                    neiborth = Bottom;
                    return true;
                }
                break;
            case Direction.Left:
                if(Left)
                {
                    neiborth = Left;
                    return true;
                }
                break;
        }

        return false;
    }

    [Header("Neiborth")]
    public Cell Top;
    public Cell Right;
    public Cell Bottom;
    public Cell Left;

    private Item item;
    public Item Item => item;
    public void SetAndMoveItem(Item item)
    {
        if(this.item != null && this.item != item)
        {
            this.item.eventOnPosition -= ItemOnPosition;
        }

        this.item = item;
        this.item.eventOnPosition += ItemOnPosition;
        this.item.MoveDefault(transform);
    }

    private void ClearItem()
    {
        item = null;
    }

    private GamePreference preference;
    private ISelectable selectable;
    private IGameState gameState;

    public void Initialise(int x, int y, GamePreference preference, Cell[,] cells, ISelectable selectable, IGameState gameState)
    {
        this.selectable = selectable;
        this.preference = preference;
        this.gameState = gameState;
        this.boardX = x;
        this.boardY = y;
        SetNeiborth(cells);

        button.onClick.AddListener(() => Selected());
        effect.Initialise();
        Message(boardX + " " + boardY);
    }

    public Item SpawnRandomType(SoundHandler soundHandler, out ProcessSpawn process)
    {
        item = Instantiate(preference.prefabStore.prefabItem, transform);
        process = item.gameObject.AddComponent<ProcessSpawn>();
        item.Initialise(preference, Size, soundHandler);
        item.SetRandomType();
        return item;
    }

    public void SpawnBonusItem()
    {
        if(item != null)
        {
            DestroyItem(out ProcessDestroy process);
            process.StartProcess(preference.boardSetting);

        }

        item = Instantiate(preference.prefabStore.prefabBonusItem, transform);
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

        Cell bottomEmptyCell = FindTheLatestBelow(Bottom);

        if (bottomEmptyCell != null)
        {
            if (bottomEmptyCell.Item != null)
            {
                Debug.LogError("Cell.Item not empty");
            }

            bottomEmptyCell.SetAndMoveItem(Item);
            ClearItem();
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

    public void DestroyItem(out ProcessDestroy process)
    {
        if (Item == null)
        {
            Debug.LogError("Item is null");
        }

        process = Item.gameObject.AddComponent<ProcessDestroy>();
        item = null;
        effect.Show();
    }

    public void GetMatchNeigbor(Direction direction, List<Cell> cells)
    {
        cells.Add(this);
 
        if (GetNeiborth(direction, out Cell neiborth))
        {
            if (Type == neiborth.Type)
            {
                neiborth.GetMatchNeigbor(direction, cells);
            }
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
        if (gameState.CurrentState() != GameState.PlayerInput) return;

        selectable.OnSelected(this, out bool isSelect);

        if (isSelect) Item.Selected();
    }

    public void Deselected()
    {
        Item.Deselected();
    }

    public void Push(float power, bool origin = false)
    {
        if (origin == false)
        {
            if (item != null)
            {
                item.Push(power);
            }
        }

        if (Bottom != null)
        {
            Bottom.Push(power /= 2);
        }
    }

    private void ItemOnPosition()
    {
        Push(10, true);
    }

    public void Message(string value)
    {
        text.text = value;
        text.transform.SetAsLastSibling();
    }

}

