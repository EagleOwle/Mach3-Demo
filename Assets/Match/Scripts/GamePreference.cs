using UnityEngine;
using System.Collections;

namespace Match
{
    public class GamePreference : ScriptableObject
    {
        public BoardSetting boardSetting;
        public PrefabStore prefabStore;
        public Item[] items;
    }
}
