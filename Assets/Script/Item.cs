using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public Action<Item> actionOnTap;
    [SerializeField] private Sprite[] sprites;
    [SerializeField] private SpriteRenderer spriteRenderer;
    [SerializeField] private float duration = 0.5f;

    [SerializeField] private Neighbor[] neighbors;
    public Neighbor[] Neighbors => neighbors;

    private float alpha = 0;
    private bool isSelect = false;

    public void Initialise(ITapListener tapListener)
    {
        int rnd = UnityEngine.Random.Range(0, sprites.Length);
        spriteRenderer.sprite = sprites[rnd];
        actionOnTap += tapListener.OnTap;

        neighbors = new Neighbor[]
        {
            new Neighbor(Neighbor.Side.North),
            new Neighbor(Neighbor.Side.EastNorth),
            new Neighbor(Neighbor.Side.East),
            new Neighbor(Neighbor.Side.EastSouth),
            new Neighbor(Neighbor.Side.South),
            new Neighbor(Neighbor.Side.WestSouth),
            new Neighbor(Neighbor.Side.West),
            new Neighbor(Neighbor.Side.WestNorth)
        };

    }

    public void Deselect()
    {
        isSelect = false;
        Color color = spriteRenderer.color;
        spriteRenderer.color = new Color(color.r, color.g, color.b, 1);
    }

    public void Select()
    {
        if (isSelect == true) return;

        isSelect = true;
        actionOnTap.Invoke(this);
        StartCoroutine(Ready());
    }

    private IEnumerator Ready()
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

}
