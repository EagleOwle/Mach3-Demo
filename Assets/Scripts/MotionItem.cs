using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using System;

public class MotionItem : MonoBehaviour
{
    public Action eventEndMove;
    private BoardSetting setting;

    public void Initialise(BoardSetting setting)
    {
        this.setting = setting;
    }

    public void MoveDefault(Transform parent)
    {
        transform.SetParent(parent);
        StartCoroutine(MovePosition(EndMove));
    }

    public void Push(float power)
    {
        StartCoroutine(PingPongMove(0.1f, power));
    }

    private void EndMove()
    {
        eventEndMove.Invoke();
    }

    private IEnumerator MovePosition(Action endMove)
    {
        while (transform.localPosition != Vector3.zero)
        {
            transform.localPosition = Vector3.MoveTowards(transform.localPosition, Vector3.zero, Time.deltaTime * (setting.durationMove * 1000));
            yield return null;
        }

        endMove();
    }

    public float InOut010(float t)
    {
        return 1 - (1 - 2 * t) * (1 - 2 * t);
    }

    private IEnumerator PingPongMove(float duration, float distance)
    {
        float startingY = 0;// transform.localPosition.y;

        for (float t = 0f; t < duration; t += Time.deltaTime)
        {
            float newY = startingY + InOut010(t / duration) * distance;
            transform.localPosition = new Vector3(transform.localPosition.x, -newY, transform.localPosition.z);

            yield return null;
        }

        for (float t = 0f; t < duration; t += Time.deltaTime)
        {
            float newY = startingY + InOut010(t / duration) * distance;
            transform.localPosition = new Vector3(transform.localPosition.x, newY, transform.localPosition.z);

            yield return null; // "wait for a frame"
        }

        
    }

}
