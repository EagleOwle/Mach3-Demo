using UnityEngine;
using System.Collections;
using DG.Tweening;
using System.Threading.Tasks;

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

        private const float tweenDuration = 1.5f;

        private void Start()
        {
            boardCreate.Create(gamePreference, out cells, out firstRow);
            SpawnFirstRow();
        }

        private void Spawn()
        {
            foreach (var cell in firstRow)
            {
                if(cell.Type == Type.None)
                {

                }
            }
        }

        private async void SpawnFirstRow()
        {
            var sequence = DOTween.Sequence();

            foreach (var cell in firstRow)
            {
                if (cell.Type == Type.None)
                {
                    cell.SpawnRandomType();
                    sequence = cell.ScaleEffect(tweenDuration, sequence);
                }
            }

            await sequence.Play().AsyncWaitForCompletion();
            FallItem();

        }

        private async Task FallItem()
        {
            var sequence = DOTween.Sequence();

            for (int y = 0; y < gamePreference.boardSetting.sizeY; y++)
            {
                for (int x = 0; x < gamePreference.boardSetting.sizeX; x++)
                {
                    cells[x, y].Fall(tweenDuration, ref sequence);
                }
            }

            await sequence.Play().AsyncWaitForCompletion();
        }
    }
}
