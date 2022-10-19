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
        private Sprite RandomItem
        {
            get
            {
                return gamePreference.items[Random.Range(0, gamePreference.items.Length)].sprite;
            }
        }

        private const float tweenDuration = 1.5f;

        private void Start()
        {
            boardCreate.Create(gamePreference, out cells, out firstRow);
            SpawnFirstRow();
        }

        private async void SpawnFirstRow()
        {
            var sequence = DOTween.Sequence();

            foreach (var item in firstRow)
            {
                item.image.sprite = RandomItem;
                item.image.transform.localScale = Vector3.zero;
                sequence.Join(item.image.transform.DOScale(Vector3.one, tweenDuration));
            }

            await sequence.Play().AsyncWaitForCompletion();
        }

    }
}
