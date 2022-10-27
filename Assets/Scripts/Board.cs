using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;

namespace Match
{

    public enum GameState
    {
        SpawnItem,
        FalldownItem,
        FindMatchItem,
        DestroyMatchItem,
        PlayerInput
    }

    public class Board : MonoBehaviour, ISelectable
    {
        [SerializeField] private GamePreference gamePreference;
        [SerializeField] private BoardCreate boardCreate;

        [SerializeField] private Cell[,] cells;
        [SerializeField] private Cell[] firstRow;

        private Cell currentSelected;
        private RevertHandler revertHandler;

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
            revertHandler = new RevertHandler();
        }

        private void Start()
        {
            boardCreate.Create(gamePreference, out cells, this as ISelectable, out firstRow);
            UpdateBoard();
        }   

        private void UpdateBoard()
        {
            if (BoardIsFull == false)
            {
                StartCoroutine(UpdateBoardRoutine());
            }
            else
            {
                revertHandler.Revert();
                Debug.Log("Board is Full");

            }
        }

        private IEnumerator UpdateBoardRoutine()
        {
            while (BoardIsFull == false)
            {
                yield return StartCoroutine(SpawnItemRoutine());
                FallItem();
            }

            StartCoroutine(FindMatch());
        }

        private IEnumerator SpawnItemRoutine()
        {
            List<Item> waitSpawnItems = new List<Item>();

            foreach (var cell in firstRow)
            {
                if (cell.Type == Type.None)
                {
                    Item item = cell.SpawnRandomType();
                    waitSpawnItems.Add(item);
                }
            }

            while (waitSpawnItems.Count > 0)
            {
                for (int i = 0; i < waitSpawnItems.Count; i++)
                {
                    if (waitSpawnItems[i].endSpawn == true)
                    {
                        waitSpawnItems.RemoveAt(i);
                    }
                }

                yield return null;
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
        }

        private IEnumerator FindMatch()
        {
            List<Cell> matchCells = new List<Cell>();

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

            yield return StartCoroutine(DestroyMatchCell(matchCells.ToArray()));

            UpdateBoard();
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

        private IEnumerator DestroyMatchCell(Cell[] cells)
        {
            //Debug.Log("Destroy Cells");
            List<Cell> waitSpawnItems = new List<Cell>();

            for (int i = 0; i < cells.Length; i++)
            {
                cells[i].DestroyItem();
                waitSpawnItems.Add(cells[i]);
            }

            while (waitSpawnItems.Count > 0)
            {
                for (int i = 0; i < waitSpawnItems.Count; i++)
                {
                    if (waitSpawnItems[i].Item == null)
                    {
                        waitSpawnItems.RemoveAt(i);
                    }
                }

                yield return null;
            }
        }

        private IEnumerator RevertRoutine(Cell cellOne, Cell cellTwo)
        {
            revertHandler.SetRevert(cellOne, cellTwo);
            yield return new WaitForSeconds(0.3f);
            StartCoroutine(FindMatch());
        }

        public void OnSelected(Cell cell, out bool isSelect)
        {
            //Debug.Log("Selelected " + cell.boardPosition.x + "/" + cell.boardPosition.y);

            if (currentSelected == cell)
            {
                isSelect = false;
                return;
            }

            if (currentSelected != null)
            {
                if (currentSelected.IsNeighbor(cell))
                {
                    StartCoroutine(RevertRoutine(cell, currentSelected));

                    currentSelected.Deselected();
                    currentSelected = null;
                    isSelect = false;
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
       
    }
}
