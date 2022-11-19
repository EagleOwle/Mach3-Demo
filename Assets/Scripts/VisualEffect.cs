using UnityEngine;
using System.Collections;
using Coffee.UIExtensions;

public class VisualEffect : MonoBehaviour
{
    [SerializeField] UIParticle effect;
    
    public void Initialise()
    {
        Hide();
    }

    public void Show()
    {
        effect.Play();
    }

    public void Hide()
    {
        effect.Stop();
    }

}
