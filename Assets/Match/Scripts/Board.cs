using UnityEngine;
using System.Collections;
using DG.Tweening;
using System.Threading.Tasks;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Threading;

namespace Match
{
    public interface IDestroyItems
    {
        void IDestroyItems(Cell[] cells);
    }

    public class Board : MonoBehaviour, IDestroyItems
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

        private CancellationTokenSource cancellation;

        private void Start()
        {
            cancellation = new CancellationTokenSource();
            boardCreate.Create(gamePreference, out cells, out firstRow);
            UpdateBoard();
        }

        private bool NeedSpawn
        {
            get
            {
                foreach (var cell in firstRow)
                {
                    if (cell.Type == Type.None)
                    {
                        return true;
                    }
                }

                return false;
            }
        }

        private async void UpdateBoard()
        {
            await SpawnItems();
            FallItem();

            if (NeedSpawn)
            {
                UpdateBoard();
            }
            else
            {
                FindMatch();
            }
        }

        private async Task SpawnItems()
        {
            var sequence = DOTween.Sequence();

            foreach (var cell in firstRow)
            {
                if (cell.Type == Type.None)
                {
                    cell.SpawnRandomType();
                    sequence = cell.ScaleEffect(gamePreference.boardSetting.tweenDuration, sequence);
                }
            }

            await sequence.Play().AsyncWaitForCompletion();

        }

        private async void FallItem()
        {
            var sequence = DOTween.Sequence();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    cells[x, y].Fall(gamePreference.boardSetting.tweenDuration, ref sequence);
                }
            }

            await sequence.Play().AsyncWaitForCompletion();
        }

        private void FindMatch()
        {
            List<Cell> tmpCells = new List<Cell>();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    tmpCells.Clear();

                    if (cells[x,y].Type == Type.None) continue;

                    cells[x, y].GetMatchNeigbor(Direction.Top, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Right, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Bottom, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Left, cells[x, y].Type, tmpCells);

                    if (tmpCells.Count > 2)
                    {
                        IDestroyItems(tmpCells.ToArray());
                    }
                }
            }

            UpdateBoard();
        }

        public void IDestroyItems(Cell[] cells)
        {
            for (int i = 0; i < cells.Length; i++)
            {
                cells[i].DestroyItem();
            }
        }

        private void Update()
        {
            if(Input.GetKeyDown(KeyCode.Backspace))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }

        private void OnDestroy()
        {
            cancellation.Cancel();
        }

    }
}
