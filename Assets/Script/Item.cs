using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField] private SpriteRenderer spriteRenderer;
    [SerializeField] private float speedMove = 5;

    private float duration = 0.5f;
    private float alpha = 0;

    private bool isSelect = false;
    private bool onPosition = false;
    private Vector2 targetPosition;

    private ItemType currentType;
    public ItemType Type => currentType;

    public void SetRandomItem()
    {
        int type = UnityEngine.Random.Range(1, 5);
        SetRandomByType((ItemType)type);
    }

    public void SetRandomByType(ItemType type)
    {
        spriteRenderer.sprite = PrefabStore.Instance.GetRandomSpriteByType(type);
        currentType = type;
    }

    public void SetType(ItemType type)
    {
        spriteRenderer.sprite = PrefabStore.Instance.GetSpriteByType(type);
        currentType = type;
    }

    private IEnumerator Crossfade()
    {
        Color color = spriteRenderer.color;

        while (isSelect == true)
        {
            color = spriteRenderer.color;
            float a = LerpAlpha(color.a);
            spriteRenderer.color = new Color(color.r, color.g, color.b, a);
            yield return null;
        }

        color = spriteRenderer.color;
        color.a = 1;
        spriteRenderer.color = color;
    }

    private float LerpAlpha(float alpha)
    {
        float lerp = Mathf.PingPong(Time.time, duration) / duration;
        alpha = Mathf.Lerp(0, 1, Mathf.SmoothStep(0, 1, lerp));
        return alpha;
    }

    public void Deselect()
    {
        isSelect = false;
    }

    public void Select()
    {
        isSelect = true;
        StartCoroutine(Crossfade());
    }

    public void SelfDestroy()
    {
        Destroy(gameObject);
    }

    public void GoToPosition(Vector3 targetPosition)
    {
        this.targetPosition = targetPosition;
        onPosition = false;

        StopCoroutine(GoToTarget());
        StartCoroutine(GoToTarget());
    }

    private IEnumerator GoToTarget()
    {
        while(onPosition == false)
        {
            if (transform.position != (Vector3)targetPosition)
            {
                transform.position = Vector3.Lerp(transform.position, targetPosition, speedMove * Time.deltaTime);
            }
            else
            {
                onPosition = true;
            }

            yield return null;

        }
    }

}
