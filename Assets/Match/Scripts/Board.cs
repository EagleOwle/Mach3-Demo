using UnityEngine;
using System.Collections;
using DG.Tweening;
using System.Threading.Tasks;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;

namespace Match
{
    public class Board : MonoBehaviour
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

        private void Awake()
        {
            cancellation = new CancellationTokenSource();
            cancellation.RegisterRaiseCancelOnDestroy(this);
        }

        private void Start()
        {
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
                //UpdateBoard();
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
            List<Cell> allCells = new List<Cell>();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    List<Cell> tmpCells = new List<Cell>();

                    if (cells[x, y].Type == Type.None) continue;

                    cells[x, y].GetMatchNeigbor(Direction.Top, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Right, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Bottom, cells[x, y].Type, tmpCells);
                    cells[x, y].GetMatchNeigbor(Direction.Left, cells[x, y].Type, tmpCells);

                    if (tmpCells.Count > 2)
                    {
                        allCells.AddRange(tmpCells);
                    }
                }
            }

            for (int i = 0; i < allCells.Count; i++)
            {
                allCells[i].DestroyItem();
            }
        }

        private void Update()
        {
            if(Input.GetKeyDown(KeyCode.Backspace))
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }

    }
}
