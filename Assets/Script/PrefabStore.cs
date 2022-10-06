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
    public Sprite block;
    public ItemSpecification[] itemSpecification;

    public Sprite GetSpriteByType(ItemType type)
    {
        if (type == ItemType.None)
        {
            return block;
        }
        else
        {
            foreach (var item in itemSpecification)
            {
                if (item.type == type)
                {
                    return item.sprite;
                }
            }
        }

        Debug.LogError("No tile by type in store" + type);
        return null;
    }

    public Sprite GetRandomSpriteByType(ItemType type)
    {
        List<Sprite> sprites = new List<Sprite>();

        foreach (var item in itemSpecification)
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

    [System.Serializable]
    public struct Tile
    {
        public string name;
        public Sprite sprite;
        public CellType type;
    }

}
