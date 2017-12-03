using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoldCoinScript : MonoBehaviour {

    public AudioSource audioSource;
    private AudioClip coinsparkle;

    private void OnCollisionEnter(Collision collision)
    {
        audioSource.PlayOneShot(coinsparkle);
    }
}   