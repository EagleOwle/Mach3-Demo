using System.Collections;
using UnityEngine;

namespace Match
{
    public class SoundHandler : MonoBehaviour
    {
        [SerializeField] private AudioClip selectClip;
        [SerializeField] private AudioClip dropClip;
        [SerializeField] private AudioSource audioSource;

        public void OnSelected()
        {
            audioSource.PlayOneShot(selectClip);
        }

        public void OnDrop()
        {
            audioSource.clip = dropClip;
            audioSource.Play();
            //audioSource.PlayOneShot(dropClip);
        }
    }
}