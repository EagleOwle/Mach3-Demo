using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(MotionItem))]
public class Item : MonoBehaviour
{
    public Action eventOnPosition;

    [SerializeField] private MotionItem motion;
    [SerializeField] private Image image;
    [SerializeField] private Image imageBackground;
    [SerializeField] private Outline outline;
    [SerializeField] private float speedSelect = 1;

    private Type type;
    public Type Type => type;

    public bool isVerified = false;

    private GamePreference preference;
    private SoundHandler soundHandler;

    public void Initialise(GamePreference preference, Vector2 size, SoundHandler soundHandler)
    {
        this.preference = preference;
        this.soundHandler = soundHandler;
        motion.eventEndMove += EndMove;
        motion.Initialise(preference.boardSetting);
        type = Type.None;
        outline.enabled = false;
    }

    public void SetRandomType()
    {
        int typeValue = UnityEngine.Random.Range(0, (int)Type.None);
        type = (Type)typeValue;
        PrefabItem prefab = preference.GetItemByType(type);
        image.sprite = prefab.sprite;
        imageBackground.sprite = prefab.backgroundSprite;
        soundHandler.Spawn();
    } 

    public void Push(float power)
    {
        motion.Push(power);
    }

    public void MoveDefault(Transform parent)
    {
        motion.MoveDefault(parent);
    }

    private void EndMove()
    {
        eventOnPosition.Invoke();
        soundHandler.OnDrop();
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
        //outline.enabled = false;
    }

    public void SetColor(Color color)
    {
        imageBackground.color = color;
        image.color = color;
    }

    public void EnableOutline()
    {
        //outline.enabled = true;
    }

}
