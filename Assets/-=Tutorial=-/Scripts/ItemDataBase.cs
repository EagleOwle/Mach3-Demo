using UnityEngine;

namespace Tutorial
{
    public static class ItemDataBase
    {
        public static Item[] Items { get; private set; }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void Initialise() => Items = Resources.LoadAll<Item>("Items/");
    }
}
