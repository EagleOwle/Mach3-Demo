using System.Collections;
using UnityEngine;

public class SoundHandler : MonoBehaviour
{
    [SerializeField] private Clip selectClip;
    [SerializeField] private Clip dropClip;
    [SerializeField] private Clip spawnClip;
    [SerializeField] private Clip matchClip;
    [SerializeField] private AudioSource audioSource;

    public void OnSelected()
    {
        PlayOneShot(selectClip);
    }

    public void OnDrop()
    {
        PlayOneShot(dropClip);
    }

    public void Spawn()
    {
        PlayOneShot(spawnClip);
    }

    public void Match()
    {
        PlayOneShot(matchClip);
    }

    private void PlayOneShot(Clip value)
    {
        if (value.clip == null) return;

        audioSource.PlayOneShot(value.clip, value.valume);
    }

    [System.Serializable]
    public class Clip
    {
        [Range(0, 1)]
        public float valume;
        public AudioClip clip;
    }

}
