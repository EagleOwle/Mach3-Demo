using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public class Item : MonoBehaviour
    {
        [SerializeField] private Image image;
        [SerializeField]private Type type;
        public Type Type => type;
        private GamePreference preference;
        

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

        public void StartScaleAndHide()
        {
            StartCoroutine(ScaleAndHide());
        }

        private IEnumerator ScaleAndHide()
        {
            while (image.color.a > 0)
            {
                transform.localScale += Vector3.one * Time.deltaTime;
                Color color = image.color;
                color.a -= Time.deltaTime;
                image.color = color;

                if(image.color.a == 0.5f )
                {
                    Debug.Break();
                }

                yield return null;
                
            }

            SelfDestroy();
        }

        private void SelfDestroy()
        {
            Destroy(gameObject);
        }
    }
}