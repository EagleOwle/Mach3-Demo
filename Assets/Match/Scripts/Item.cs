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

        public bool endSpawn = false;
        public bool onPosition = true;

        public Vector3 offsetPosition;

        private void Awake()
        {
            offsetPosition = transform.localPosition;
        }

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

        public void StartScaleAndShow()
        {
            StartCoroutine(ScaleAndShow());
        }

        public void MovePosition()
        {
            StartCoroutine(MovePositionRoutine());
        }

        private IEnumerator MovePositionRoutine()
        {
            onPosition = false;
            image.color = Color.red;

            while (transform.localPosition != offsetPosition)// targetPosition)
            {
                //transform.localPosition = Vector3.Lerp(transform.position, Vector3.zero, Time.deltaTime * 200);
                transform.localPosition = Vector3.MoveTowards(transform.localPosition, offsetPosition, Time.deltaTime * 500);
                yield return null;
            }

            onPosition = true;
            image.color = Color.white;
        }

        private IEnumerator ScaleAndShow()
        {
            Color color = image.color;
            float scale = 0;
            while (transform.localScale.x < 1)
            {
                scale = transform.localScale.x;
                scale += Time.deltaTime;// * 0.2f;
                transform.localScale = Vector3.one * scale;

                color = image.color;
                color.a += Time.deltaTime;// * 0.2f;
                image.color = color;

                yield return null;
            }

            transform.localScale = Vector3.one;
            color = image.color;
            color.a = 1;
            image.color = color;
            endSpawn = true;
        }

        private IEnumerator ScaleAndHide()
        {
            image.color = Color.red;
            Color color = image.color;
            float scale = 1;
            while (transform.localScale.x > 0)
            {
                scale = transform.localScale.x;
                scale -= Time.deltaTime;// * 0.2f;
                transform.localScale = Vector3.one * scale;

                color = image.color;
                color.a -= Time.deltaTime;// * 0.2f;
                image.color = color;
                
                yield return null;
            }

            transform.localScale = Vector3.one;
            color = image.color;
            color.a = 0;
            image.color = color;

            SelfDestroy();
        }

        private void SelfDestroy()
        {
            Destroy(gameObject);
        }
    }
}