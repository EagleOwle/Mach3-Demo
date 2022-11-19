using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using System;

public class MotionItem : MonoBehaviour
{
    public Action eventEndMove;
    private float durationMove;

   private bool initialise = false;

    public void Initialise(float durationMove)
    {
        this.durationMove = durationMove;
        initialise = true;
    }

    public void MoveZeroPosition()
    {
        if (initialise == false) Debug.LogError("Motion is not Initialise");

        StartCoroutine(MovePosition(Vector3.zero, EndMove));
    }

    public void Push(float power)
    {
        if (initialise == false) Debug.LogError("Motion is not Initialise");

        StartCoroutine(PingPongMove(0.1f, power));
    }

    private void EndMove()
    {
        eventEndMove.Invoke();
    }

    private IEnumerator MovePosition(Vector3 targetPosition, Action endMove)
    {
        while (transform.localPosition != Vector3.zero)
        {
            transform.localPosition = Vector3.MoveTowards(transform.localPosition, targetPosition, Time.deltaTime * (durationMove * 1000));
            yield return null;
        }

        endMove();
    }

    private float InOut010(float t)
    {
        return 1 - (1 - 2 * t) * (1 - 2 * t);
    }

    private IEnumerator PingPongMove(float duration, float distance)
    {
        float startingY = 0;

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

            yield return null;
        }

        
    }

}
