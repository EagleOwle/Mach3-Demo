using DG.Tweening;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

namespace Tutorial
{
    public sealed class Board : MonoBehaviour
    {
        public static Board Instance { get; private set; }
        public Row[] rows;
        public Tile[,] Tiles { get; private set; }
        public int Width => Tiles.GetLength(0);
        public int Height => Tiles.GetLength(1);

        private List<Tile> selection = new List<Tile>();
        private const float tweenDuration = 0.75f;

        private void Awake() => Instance = this;

        private void Start()
        {
            Tiles = new Tile[rows.Max(row => row.tiles.Length), rows.Length];

            for (var y = 0; y < Height; y++)
            {
                for (var x = 0; x < Width; x++)
                {
                    var tile = rows[y].tiles[x];
                    tile.x = x;
                    tile.y = y;
                    tile.Item = ItemDataBase.Items[Random.Range(0, ItemDataBase.Items.Length)];
                    Tiles[x, y] = tile;
                }
            }

            if (CanPup())
            {
                Pop();
            }
        }

        public async void Select(Tile tile)
        {
            if (selection.Contains(tile) == false) selection.Add(tile);
            if (selection.Count < 2) return;
            await Swap(selection[0], selection[1]);

            if (CanPup())
            {
                Pop();
            }
            else
            {
                await Swap(selection[0], selection[1]);
            }

            selection.Clear();
        }

        //private void MarkTiles(List<Tile> tiles)
        //{
        //    var sequence = DOTween.Sequence();

        //    foreach (var conectedTile in tiles)
        //    {
        //        sequence.Join(conectedTile.icon.transform.DOScale(Vector3.one * 0.5f, tweenDuration));
        //    }

        //    sequence.Play();
        //}

        public async Task Swap(Tile tile1, Tile tile2)
        {
            var icon1 = tile1.icon;
            var icon1Transform = icon1.transform;

            var icon2 = tile2.icon;
            var icon2Transform = icon2.transform;

            var sequence = DOTween.Sequence();
            sequence.Join(icon1Transform.DOMove(icon2Transform.position, tweenDuration))
                    .Join(icon2Transform.DOMove(icon1Transform.position, tweenDuration));
            await sequence.Play().AsyncWaitForCompletion();

            icon1Transform.SetParent(tile2.transform);
            icon2Transform.SetParent(tile1.transform);

            tile1.icon = icon2;
            tile2.icon = icon1;

            var tile1Item = tile1.Item;
            tile1.Item = tile2.Item;
            tile2.Item = tile1Item;

        }


        private bool CanPup()
        {
            for (var y = 0; y < Height; y++)
            {
                for (var x = 0; x < Width; x++)
                {
                    var result = Tiles[x, y].GetConectedTile();

                    if (result.Skip(1).Count() >= 2)
                    {
                        // MarkTiles(result);
                        return true;
                    }
                }
            }

            return false;
        }

        private async void Pop()
        {
            for (var y = 0; y < Height; y++)
            {
                for (var x = 0; x < Width; x++)
                {
                    var tile = Tiles[x, y];
                    var conectedTiles = tile.GetConectedTile();

                    if (conectedTiles.Skip(1).Count() < 2)
                    {
                        continue;
                    }

                    var deflateSequence = DOTween.Sequence();

                    foreach (var conectedTile in conectedTiles)
                    {
                        deflateSequence.Join(conectedTile.icon.transform.DOScale(Vector3.zero, tweenDuration));
                    }

                    await deflateSequence.Play().AsyncWaitForCompletion();

                    var inflateSequence = DOTween.Sequence();

                    foreach (var conectedTile in conectedTiles)
                    {
                        conectedTile.Item = ItemDataBase.Items[Random.Range(0, ItemDataBase.Items.Length)];
                        inflateSequence.Join(conectedTile.icon.transform.DOScale(Vector3.one, tweenDuration));
                    }

                    await inflateSequence.Play().AsyncWaitForCompletion();
                }
            }

            if (CanPup())
            {
                Pop();
            }
        }

    }
}