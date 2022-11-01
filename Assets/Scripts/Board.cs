using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

namespace Match
{
    public interface IEndProcessListener
    {
        public void EndProcess(ProcessType type);
    }

    public interface IGameState
    {
        public GameState CurrentState();
    }

    public enum GameState
    {
        SpawnItem,
        FalldownItem,
        FindMatchItem,
        DestroyMatchItem,
        PlayerInput
    }

    public class Board : MonoBehaviour, ISelectable, IEndProcessListener, IGameState
    {
        [SerializeField] private GamePreference gamePreference;
        [SerializeField] private BoardCreate boardCreate;

        [SerializeField] private Cell[,] cells;
        [SerializeField] private Cell[] firstRow;

        private Cell currentSelected;
        private ReplacementHandler replacement;
        private ProcessHandler processHandler;

        private List<Cell> matchCells = new List<Cell>();

        private GameState gameState;
        private GameState NextState
        {

            set
            {
                gameState = value;
                Invoke(nameof(ChangeState), 0.1f);
            }

        }

        public GameState CurrentState()
        {
            return gameState;
        }

        private bool BoardIsFull
        {
            get
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
                    {
                        if (cells[x, y].Type == Type.None)
                        {
                            return false;
                        }
                    }
                }

                return true;
            }
        }

        private void Awake()
        {
            replacement = new ReplacementHandler();
            processHandler = new ProcessHandler(this as IEndProcessListener, gamePreference.boardSetting);
        }

        private void Start()
        {
            boardCreate.Create(gamePreference, out cells, this as ISelectable, this as IGameState, out firstRow);
            //UpdateBoard();
            NextState = GameState.SpawnItem;
        }   

        private void UpdateBoard()
        {
            if (BoardIsFull == false)
            {
                //StartCoroutine(UpdateBoardRoutine());
                SpawnItem();
            }
            else
            {
                //replacement.Revert();
                //Debug.Log("Board is Full");

            }
        }

        private void SpawnItem()
        {
            foreach (var cell in firstRow)
            {
                if (cell.Type == Type.None)
                {
                    Item item = cell.SpawnRandomType(out ProcessSpawn process);
                    processHandler.AddProcess(process);
                }
            }
        }

        private void FallItem()
        {
            for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
            {
                for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
                {
                    cells[x, y].FallingDown();
                }
            }

            if (BoardIsFull == false)
            {
                NextState = GameState.SpawnItem;
            }
            else
            {
                NextState = GameState.FindMatchItem;
            }

        }

        private void FindMatch()
        {
            matchCells = new List<Cell>();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    CheckMatchDirection(cells[x, y], Direction.Top, matchCells);
                    CheckMatchDirection(cells[x, y], Direction.Right, matchCells);
                    CheckMatchDirection(cells[x, y], Direction.Bottom, matchCells);
                    CheckMatchDirection(cells[x, y], Direction.Left, matchCells);
                }
            }

            if (matchCells.Count > 0)
            {
                NextState = GameState.DestroyMatchItem;
            }
            else
            {
                NextState = GameState.PlayerInput;
            }
        }

        private void CheckMatchDirection(Cell cell, Direction direction, List<Cell> matchCells)
        {
            List<Cell> tmpCells = new List<Cell>();

            cell.GetMatchNeigbor(direction, cell.Type, tmpCells);

            if (tmpCells.Count >= gamePreference.boardSetting.minMatchCount)
            {
                foreach (var item in tmpCells)
                {
                    if (matchCells.Contains(item) == false)
                    {
                        matchCells.Add(item);
                    }
                }
            }
        }

        private void DestroyMatchItem()
        {
            if(matchCells.Count == 0)
            {
                Debug.LogError("Cells count " + matchCells.Count);
            }

            for (int i = 0; i < matchCells.Count; i++)
            {
                matchCells[i].DestroyItem(out ProcessDestroy process);
                processHandler.AddProcess(process);
            }

            matchCells.Clear();
        }
        
        private void Replacement(Cell cellOne, Cell cellTwo)
        {
            replacement.Replace(cellOne, cellTwo);
        }

        public void OnSelected(Cell cell, out bool isSelect)
        {
            if (currentSelected == cell)
            {
                isSelect = false;
                return;
            }

            if (currentSelected != null)
            {
                if (currentSelected.IsNeighbor(cell))
                {
                    Replacement(cell, currentSelected);
                    currentSelected.Deselected();
                    currentSelected = null;
                    isSelect = false;
                    NextState = GameState.FindMatchItem;
                }
                else
                {
                    currentSelected.Deselected();
                    currentSelected = cell;
                    isSelect = true;
                }
            }
            else
            {
                currentSelected = cell;
                isSelect = true;
            }
        }

        private void Update()
        {

            #region Debug
            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    Type type = cells[x, y].Type;
                }
            }
            #endregion


            if (Input.GetKeyDown(KeyCode.Backspace))
            {
                SceneManager.LoadScene(SceneManager.GetSceneByBuildIndex(0).name);
            }
        }

        private void ChangeState()
        {
            switch (gameState)
            {
                case GameState.SpawnItem:

                    SpawnItem();

                    break;
                case GameState.FalldownItem:

                    FallItem();
                    
                    break;
                case GameState.FindMatchItem:

                    FindMatch();

                    break;
                case GameState.DestroyMatchItem:
                    
                    DestroyMatchItem();

                    break;
                case GameState.PlayerInput:
                    replacement.Revert();
                    break;
                default:
                    Debug.LogError("No State in enum");
                    break;
            }
            
        }

        public void EndProcess(ProcessType type)
        {
            switch (type)
            {
                case ProcessType.Spawn:
                    NextState = GameState.FalldownItem;
                    break;
                case ProcessType.Destroy:
                    NextState = GameState.FalldownItem;
                    break;
                case ProcessType.Move:
                    break;
                default:
                    Debug.LogError("No Type In Switch ProcessType");
                    break;
            }

            
        }

        #region Routine
        //private IEnumerator DestroyMatchCellRoutine(Cell[] cells)
        //{
        //    //Debug.Log("Destroy Cells");
        //    List<Cell> waitSpawnItems = new List<Cell>();

        //    for (int i = 0; i < cells.Length; i++)
        //    {
        //        cells[i].DestroyItem();
        //        waitSpawnItems.Add(cells[i]);
        //    }

        //    while (waitSpawnItems.Count > 0)
        //    {
        //        for (int i = 0; i < waitSpawnItems.Count; i++)
        //        {
        //            if (waitSpawnItems[i].Item == null)
        //            {
        //                waitSpawnItems.RemoveAt(i);
        //            }
        //        }

        //        yield return null;
        //    }
        //}

        //private IEnumerator ReplacementRoutine(Cell cellOne, Cell cellTwo)
        //{
        //    replacement.Replace(cellOne, cellTwo);
        //    yield return new WaitForSeconds(0.3f);
        //    StartCoroutine(FindMatchRoutine());
        //}

        //private IEnumerator FindMatchRoutine()
        //{
        //    List<Cell> matchCells = new List<Cell>();

        //    for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
        //    {
        //        for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
        //        {
        //            CheckMatchDirection(cells[x, y], Direction.Top, matchCells);
        //            CheckMatchDirection(cells[x, y], Direction.Right, matchCells);
        //            CheckMatchDirection(cells[x, y], Direction.Bottom, matchCells);
        //            CheckMatchDirection(cells[x, y], Direction.Left, matchCells);
        //        }
        //    }

        //    yield return StartCoroutine(DestroyMatchCellRoutine(matchCells.ToArray()));

        //    UpdateBoard();
        //}

        //private IEnumerator SpawnItemRoutine()
        //{
        //    List<Item> waitSpawnItems = new List<Item>();

        //    foreach (var cell in firstRow)
        //    {
        //        if (cell.Type == Type.None)
        //        {
        //            Item item = cell.SpawnRandomType(out ProcessSpawn process);
        //            processHandler.AddProcess(process);
        //            waitSpawnItems.Add(item);
        //        }
        //    }

        //    while (waitSpawnItems.Count > 0)
        //    {
        //        for (int i = 0; i < waitSpawnItems.Count; i++)
        //        {
        //            //if (waitSpawnItems[i].endSpawn == true)
        //            //{
        //            //    waitSpawnItems.RemoveAt(i);
        //            //}
        //        }

        //        yield return null;
        //    }
        //}

        //private IEnumerator UpdateBoardRoutine()
        //{
        //    while (BoardIsFull == false)
        //    {
        //        yield return StartCoroutine(SpawnItemRoutine());
        //        FallItem();
        //    }

        //    StartCoroutine(FindMatchRoutine());
        //}

        #endregion

    }
}
