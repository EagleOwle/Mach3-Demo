using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{

    public class Item : MonoBehaviour
    {
        [SerializeField] private Image image;

        private Type type;
        public Type Type => type;

        private GamePreference preference;

        public void Initialise(GamePreference preference, Vector2 size)
        {
            this.preference = preference;
            type = Type.None;
        }

        public void SetRandomType()
        {
            int typeValue = UnityEngine.Random.Range(0, (int)Type.None);
            type = (Type)typeValue;
            image.sprite = preference.GetItemByType(type).sprite;
        }

        public void MoveDefault(Transform parent)
        {
            transform.SetParent(parent);
            StartCoroutine(MovePosition(EndMove));
        }

        private void EndMove()
        {

        }

        private IEnumerator MovePosition(Action endMove)
        {
            while (transform.localPosition != Vector3.zero)
            {
                transform.localPosition = Vector3.MoveTowards(transform.localPosition, Vector3.zero, Time.deltaTime * (preference.boardSetting.durationMove * 1000));
                yield return null;
            }
        }
    }
}