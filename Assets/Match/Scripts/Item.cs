using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public class Item : MonoBehaviour
    {
        private GamePreference preference;
        [SerializeField]private Type type;
        public Type Type => type;

       [SerializeField] private Image image;

        public void Initialise(GamePreference preference)
        {
            this.preference = preference;
            type = Type.None;
            image.sprite = preference.GetItemByType(type).sprite;
        }

        public void SetRandomType()
        {
            int typeValue = Random.Range(0, (int)Type.None);
            type = (Type)typeValue;
            image.sprite = preference.GetItemByType(type).sprite;
        }


    }
}