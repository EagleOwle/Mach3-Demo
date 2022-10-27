using UnityEngine;

namespace Match
{
    [System.Serializable]
    public class BoardSetting
    {
        public float tweenDuration = 1.5f;
        public int minMatchCount = 3;
        public int sizeX, sizeY;
        public int boardOffsetX, boardOffsetY;
    }
}
