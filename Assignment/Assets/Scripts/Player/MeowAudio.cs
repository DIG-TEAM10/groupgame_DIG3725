using UnityEngine;
using System.Collections;

public class MeowAudio : MonoBehaviour
{
    public AudioSource audioSource;

    public AudioClip meow;
   // public AudioClip clipTwo;
    //public AudioClip clipThree;

    private AudioClip clipToPlay;

    void OnCollisionEnter(Collider collider)
    {
        if (collider.transform.gameObject.name == "WolfEnemy")
        {
            clipToPlay = meow;
        }
       /* else if (collider.transform.gameObject.name == "ObjectTwo")
        {
            clipToPlay = clipTwo;
        }
        else if (collider.transform.gameObject.name == "ObjectThree")
        {
            clipToPlay = clipThree;
        }*/
        playSound();
    }
    private void playSound()
    {
        audioSource.PlayOneShot(clipToPlay);
    }
}