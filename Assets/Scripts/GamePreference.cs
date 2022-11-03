using UnityEngine;

public class GamePreference : ScriptableObject
{
    public BoardSetting boardSetting;
    public PrefabStore prefabStore;
    public PrefabItem[] items;

    public PrefabItem GetItemByType(Type type)
    {
        foreach (var item in items)
        {
            if (item.type == type)
            {
                return item;
            }
        }

        Debug.LogError("No Item by type: " + type);
        return null;
    }

    public PrefabItem GetRandomItem()
    {
        return items[Random.Range(0, items.Length)];
    }

}

