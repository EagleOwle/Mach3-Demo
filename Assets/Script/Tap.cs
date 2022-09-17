using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tap : MonoBehaviour
{
    [SerializeField] private Cell item;

    private void OnMouseDown()
    {
        item.Select();
    }
}
