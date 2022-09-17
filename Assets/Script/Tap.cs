using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tap : MonoBehaviour
{
    [SerializeField] private Item item;

    private void OnMouseDown()
    {
        item.Select();
    }
}
