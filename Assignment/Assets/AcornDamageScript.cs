using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class AcornDamageScript : MonoBehaviour
{

    private PlayerScript player;
    public float attacktime = 0.5f;
    public int damage = 10;
    Animator a;
    public Slider pHealth;
    public PlayerHealth ph;
    WolfHealth wh;
    float timer;



    // Use this for initialization
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerScript>();
        ph = player.GetComponent<PlayerHealth>();
        wh = GetComponent<WolfHealth>();
        a = GetComponent<Animator>();

    }

    void OnCollisionEnter2D(Collision2D other)
    {

        if (other.collider.CompareTag("Player"))
        {
            ph.takeDamage(damage);

             StartCoroutine(player.Knockback(0.02f, 50, player.transform.position));
        }


    }

}




