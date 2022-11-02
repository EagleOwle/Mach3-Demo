using System.Collections;
using UnityEngine;

namespace Match
{
    public class SoundHandler : MonoBehaviour
    {
        [SerializeField] private AudioClip selectClip;
        [SerializeField] private AudioClip dropClip;
        [SerializeField] private AudioClip spawnClip;
        [SerializeField] private AudioSource audioSource;

        public void OnSelected()
        {
            audioSource.PlayOneShot(selectClip);
        }

        public void OnDrop()
        {
            //audioSource.clip = dropClip;
            //audioSource.Play();
           audioSource.PlayOneShot(dropClip);
        }

        public void Spawn()
        {
            //audioSource.clip = spawnClip;
            //audioSource.Play();
            audioSource.PlayOneShot(spawnClip);
        }
    }
}