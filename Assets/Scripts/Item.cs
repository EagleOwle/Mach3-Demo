using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class Item : MonoBehaviour
{
    [SerializeField] private Image image;
    [SerializeField] private Outline outline;
    [SerializeField] private float speedSelect = 1;


    private Type type;
    public Type Type => type;

    private GamePreference preference;
    private SoundHandler soundHandler;

    public void Initialise(GamePreference preference, Vector2 size, SoundHandler soundHandler)
    {
        this.preference = preference;
        this.soundHandler = soundHandler;
        type = Type.None;
        outline.enabled = false;
    }

    public void SetRandomType()
    {
        int typeValue = UnityEngine.Random.Range(0, (int)Type.None);
        type = (Type)typeValue;
        image.sprite = preference.GetItemByType(type).sprite;
        soundHandler.Spawn();
    }

    public void MoveDefault(Transform parent)
    {
        transform.SetParent(parent);
        StartCoroutine(MovePosition(EndMove));
    }

    private void EndMove()
    {
        soundHandler.OnDrop();
    }

    private IEnumerator MovePosition(Action endMove)
    {
        while (transform.localPosition != Vector3.zero)
        {
            transform.localPosition = Vector3.MoveTowards(transform.localPosition, Vector3.zero, Time.deltaTime * (preference.boardSetting.durationMove * 1000));
            yield return null;
        }

        endMove();
    }

    public void Selected()
    {
        outline.enabled = true;
        StartCoroutine(SelectRoutine());
        soundHandler.OnSelected();
    }

    private IEnumerator SelectRoutine()
    {
        float a = 0;
        while (a < 0.5f)
        {
            a += speedSelect * Time.deltaTime;
            Color color = outline.effectColor;
            color.a = a;
            outline.effectColor = color;
            yield return null;
        }
    }

    public void Deselected()
    {
        outline.enabled = false;
    }

}
