using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Match
{
    public enum MoveTowardsDirection { Hide, Normal, Big }

    public class Item : MonoBehaviour
    {
        [SerializeField] private Image image;
        [SerializeField]private Type type;
        public Type Type => type;
        private GamePreference preference;

        public bool endSpawn = false;

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
            while (transform.localPosition != Vector3.zero)
            {
                transform.localPosition = Vector3.MoveTowards(transform.localPosition, Vector3.zero, Time.deltaTime * 1000);
                yield return null;
            }
        }

        private IEnumerator ScaleAndShow()
        {
            yield return StartCoroutine(Scale(MoveTowardsDirection.Normal, SetAlpha));
            endSpawn = true;
        }

        private void SetAlpha(float value)
        {
            Color color = image.color;
            color.a = value;
            image.color = color;
        }

        private IEnumerator ScaleAndHide()
        {
            yield return StartCoroutine(Scale(MoveTowardsDirection.Hide, SetAlpha));
            SelfDestroy();

            #region Old
            //image.color = Color.red;
            //Color color = image.color;
            //float scale = 1;
            //while (transform.localScale.x > 0)
            //{
            //    scale = transform.localScale.x;
            //    scale -= Time.deltaTime;// * 0.2f;
            //    transform.localScale = Vector3.one * scale;

            //    color = image.color;
            //    color.a -= Time.deltaTime;// * 0.2f;
            //    image.color = color;

            //    yield return null;
            //}

            //transform.localScale = Vector3.one;
            //color = image.color;
            //color.a = 0;
            //image.color = color;
            #endregion

        }

        public void Selected()
        {
            //StartCoroutine(Scale(1.2f));   
        }

        public void Deselected()
        {
            //StartCoroutine(Scale(MoveTowardsDirection.Normal));
        }

        private IEnumerator Scale(MoveTowardsDirection target, Action<float> currentValue = null)
        {
            transform.localScale = Vector3.one * (int)Revers(target);
            float current = transform.localScale.x;
            while (current != (int)target)
            {
                current = Mathf.MoveTowards(current, (int)target, Time.deltaTime * preference.boardSetting.tweenDuration);
                transform.localScale = Vector3.one * current;
                yield return null;
            }
        }

        private IEnumerator Scale(float target, Action<float> currentValue = null)
        {
            transform.localScale = Vector3.one;
            float current = transform.localScale.x;
            while (current != target)
            {
                current = Mathf.MoveTowards(current, target, Time.deltaTime * preference.boardSetting.tweenDuration);
                transform.localScale = Vector3.one * current;
                yield return null;
            }
        }

        private void SelfDestroy()
        {
            Destroy(gameObject);
        }

        private MoveTowardsDirection Revers(MoveTowardsDirection value)
        {
            switch (value)
            {
                case MoveTowardsDirection.Hide:
                    return MoveTowardsDirection.Normal;
                case MoveTowardsDirection.Normal:
                    return MoveTowardsDirection.Hide;
                case MoveTowardsDirection.Big:
                    return MoveTowardsDirection.Normal;
                default:
                    return value;
            }
        }

    }
}