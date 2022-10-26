using UnityEngine;
using System.Collections;
using DG.Tweening;
using System.Threading.Tasks;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using System;

namespace Match
{
    public interface ISelectable
    {
        void OnSelected(Cell cell, out bool isSelect);
        void OnDeselected(Cell cell);
    }

    public class Board : MonoBehaviour, ISelectable
    {
        [SerializeField] private GamePreference gamePreference;
        [SerializeField] private BoardCreate boardCreate;

        [SerializeField] private Cell[,] cells;
        [SerializeField] private Cell[] firstRow;

        private BoardSetting Setting
        {
            get
            {
                return gamePreference.boardSetting;
            }
        }
        private PrefabStore Prefabs
        {
            get
            {
                return gamePreference.prefabStore;


            }
        }

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
            boardCreate.Create(gamePreference, out cells, out firstRow);
            CellInitialise(gamePreference, cells);
            UpdateBoard();
        }

        private void CellInitialise(GamePreference gamePreference, Cell[,] cells)
        {
            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    cells[x, y].Initialise(x, y, gamePreference, cells, this as ISelectable);
                }
            }
        }

        private void UpdateBoard()
        {
            //Debug.Log("Update Board");

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
            //Debug.Log("Start Update Board Routine");
            while (BoardIsFull == false)
            {
                yield return StartCoroutine(SpawnItemRoutine());
                FallItem();
            }

            StartCoroutine(FindMatch());
        }

        private IEnumerator SpawnItemRoutine()
        {
            //Debug.Log("Spawn Item");
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
            //Debug.Log("Fall Item");

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
            Debug.Log("Find Match");
            List<Cell> allCells = new List<Cell>();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    GetMatchDirection(cells[x, y], Direction.Top, allCells);
                    GetMatchDirection(cells[x, y], Direction.Right, allCells);
                    GetMatchDirection(cells[x, y], Direction.Bottom, allCells);
                    GetMatchDirection(cells[x, y], Direction.Left, allCells);
                }
            }

            yield return StartCoroutine(DestroyMatchCell(allCells.ToArray()));

            UpdateBoard();
        }

        private void GetMatchDirection(Cell cell, Direction direction, List<Cell> allCells)
        {
            List<Cell> tmpCells = new List<Cell>();

            cell.GetMatchNeigbor(direction, cell.Type, tmpCells);

            if (tmpCells.Count > 2)
            {
                foreach (var item in tmpCells)
                {
                    if (allCells.Contains(item) == false)
                    {
                        allCells.Add(item);
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
            revertHandler.SetCells(cellOne, cellTwo);
            yield return new WaitForSeconds(0.3f);
            StartCoroutine(FindMatch());
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

        public void OnSelected(Cell cell, out bool isSelect)
        {
            //Debug.Log("Selelected " + cell.boardPosition.x + "/" + cell.boardPosition.y);

            if (currentSelected == cell)
            {
                isSelect = false;
                return ;
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

        public void OnDeselected(Cell cell)
        {
            //Debug.Log("Deselected " + cell.boardPosition.x + "/" + cell.boardPosition.y);
        }

    }
}
