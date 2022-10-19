using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Tutorial
{
    public sealed class Tile : MonoBehaviour
    {
        public int x, y;
        private Item item;
        public Item Item
        {
            get => item;
            set
            {
                if (item == value) return;
                item = value;
                icon.sprite = item.sprite;
            }
        }
        public Image icon;
        public Button button;

        public Tile Left => x > 0 ? Board.Instance.Tiles[x - 1, y] : null;
        public Tile Top => y > 0 ? Board.Instance.Tiles[x, y - 1] : null;
        public Tile Right => x < Board.Instance.Width - 1  ? Board.Instance.Tiles[x + 1, y] : null;
        public Tile Bottom => y < Board.Instance.Height - 1 ? Board.Instance.Tiles[x, y + 1] : null;

        public Tile[] Neighbors => new[]
        {
            Left,
            Top,
            Right,
            Bottom
        };

        private void Start() => button.onClick.AddListener(() => Board.Instance.Select(this));

        public List<Tile> GetConectedTile(List<Tile> exclude = null)
        {
            var result = new List<Tile>() { this, };

            if(exclude == null)
            {
                exclude = new List<Tile>() { this, };
            }
            else
            {
                exclude.Add(this);
            }

            foreach (var neighbor in Neighbors)
            {
                if (neighbor == null || exclude.Contains(neighbor) || neighbor.Item != Item) continue;

                result.AddRange(neighbor.GetConectedTile(exclude));
            }

            return result;
        }

    }
}
