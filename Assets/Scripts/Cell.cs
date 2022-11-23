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

    private SoundHandler soundHandler;

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

    private Cell top;
    private Cell right;
    private Cell bottom;
    private Cell left;
    public Cell Top => top;
    public Cell Right => right;
    public Cell Bottom => bottom;
    public Cell Left => left;

    private Item item;
    public Item Item => item;

    private bool replaced = false;
    public bool Replaced => replaced;

    public void SetAndMoveItem(Item item)
    {
        if(this.item != null && this.item != item)
        {
            this.item.eventOnPosition -= ItemOnPosition;
        }

        this.item = item;
        this.item.eventOnPosition += ItemOnPosition;
        this.item.SetParentAndMoveZero(this);
    }

    public void Replace(Item item)
    {
        replaced = !replaced;
        Message(replaced.ToString());
        SetAndMoveItem(item);
    }

    private void ClearItem()
    {
        item = null;
    }

    private GamePreference preference;
    private ISelectable selectable;
    private IGameState gameState;

    public void Initialise(int x, int y, GamePreference preference, SoundHandler soundHandler, Cell[,] cells, ISelectable selectable, IGameState gameState)
    {
        this.soundHandler = soundHandler;
        this.selectable = selectable;
        this.preference = preference;
        this.gameState = gameState;
        this.boardX = x;
        this.boardY = y;
        SetNeiborth(cells);

        button.onClick.AddListener(() => Selected());
        Message(boardX + " " + boardY);
    }

    public Item SpawnRandomType(out IProcess process)
    {
        item = Instantiate(preference.prefabStore.prefabItem, transform);
        item.Initialise(preference, Size, soundHandler);
        item.SetRandomType();

        ProcessSpawn processSpawn = item.gameObject.AddComponent<ProcessSpawn>();
        processSpawn.StartProcess(preference.boardSetting);
        process = processSpawn as IProcess;

        return item;
    }

    public void SpawnBonusItem()
    {
        if (item != null)
        {
            DestroyItem();
        }

        item = Instantiate(preference.prefabStore.prefabBonusItem, transform);
        item.Initialise(preference, Size, soundHandler);
        item.SetBonusType();
        
        ProcessSpawn process = item.gameObject.AddComponent<ProcessSpawn>();
        process.StartProcess(preference.boardSetting);

        //var bonus = Instantiate(preference.prefabStore.lightingBolt, transform);
        //bonus.Initialise(this, Direction.Right, preference.boardSetting);

    }

    private void SetNeiborth(Cell[,] cells)
    {
        left = boardX > 0 ? cells[boardX - 1, boardY] : null;
        bottom = boardY > 0 ? cells[boardX, boardY - 1] : null;
        right = boardX < cells.GetLength(0) - 1 ? cells[boardX + 1, boardY] : null;
        top = boardY < cells.GetLength(1) - 1 ? cells[boardX, boardY + 1] : null;
    }

    public void FallingDown()
    {
        replaced = false;

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

    private void DestroyItem(EffectType effectType = EffectType.None)
    {
        DestroyItem(out ProcessDestroy process, effectType);
        process.StartProcess(preference.boardSetting);
    }

    public void DestroyItem(out IProcess process, EffectType effectType = EffectType.None)
    {
        if (Item == null)
        {
            Debug.LogError("Item is null");
        }

        ProcessDestroy processDestroy = Item.gameObject.AddComponent<ProcessDestroy>();
        processDestroy.StartProcess(preference.boardSetting);

        process = processDestroy as IProcess;

        item = null;
    }

    public void DestroyItem(out ProcessDestroy process, EffectType effectType = EffectType.None)
    {
        if (Item == null)
        {
            Debug.LogError("Item is null");
        }

        process = Item.gameObject.AddComponent<ProcessDestroy>();
        item = null;
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

