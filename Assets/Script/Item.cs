using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private SpriteRenderer spriteRenderer;

    private float duration = 0.5f;
    private float alpha = 0;

    private bool isSelect = false;

    public void Initialise(ITapListener tapListener)
    {
        int rnd = UnityEngine.Random.Range(0, sprites.Length);
        spriteRenderer.sprite = sprites[rnd];

    }

    private IEnumerator Crossfade()
    {
        while (isSelect == true)
        {
            Color color = spriteRenderer.color;
            float a = LerpAlpha(color.a);
            spriteRenderer.color = new Color(color.r, color.g, color.b, a);
            yield return null;
        }
    }

    private float LerpAlpha(float alpha)
    {
        float lerp = Mathf.PingPong(Time.time, duration) / duration;
        alpha = Mathf.Lerp(0, 1, Mathf.SmoothStep(0, 1, lerp));
        return alpha;
    }

    public void GoTo(Cell cell)
    {
        throw new NotImplementedException();
    }
}
