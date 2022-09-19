using System.Collections.Generic;
using UnityEngine;

public class PrefabStore : ScriptableObject
{
    private static PrefabStore prefabStore;
    public static PrefabStore Instance
    {
        get
        {
            if(prefabStore == null)
            {
                prefabStore = Resources.Load("PrefabStore") as PrefabStore;
            }

            return prefabStore;
        }
    }

    public Item itemPrefab;
    public Tap tapPrefab;
    public Tile[] tiles;

    public Sprite GetSpriteByType(CellType type)
    {
        foreach (var item in tiles)
        {
            if(item.type == type)
            {
                return item.sprite;
            }
        }

        Debug.LogError("No tile by type in store" + type);
        return null;
    }

    public Sprite GetRandomSpriteByType(CellType type)
    {
        List<Sprite> sprites = new List<Sprite>();

        foreach (var item in tiles)
        {
            if (item.type == type)
            {
                sprites.Add(item.sprite);
            }
        }

        if (sprites.Count > 0)
        {
            //Debug.Log("Sprites= " + sprites.Count);
            return sprites[Random.Range(0, sprites.Count)];
        }
        else
        {
            Debug.LogError("No tile by type in store" + type);
            return null;
        }
    }

    private void OnValidate()
    {
        for (int i = 0; i < tiles.Length; i++)
        {
            if (tiles[i].sprite != null)
            {
                tiles[i].name = tiles[i].sprite.name;
            }
        }
    }

    [System.Serializable]
    public struct Tile
    {
        public string name;
        public Sprite sprite;
        public CellType type;
    }

}
