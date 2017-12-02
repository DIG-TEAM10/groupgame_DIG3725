using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class AcornDamage : MonoBehaviour
{

    private PlayerScript player;
    public float attacktime = 0.5f;
    public int damage = 10;
    Animator a;
    public Slider pHealth;
    public PlayerHealth ph;
    //SquirrelHealth sh;
    float timer;



    // Use this for initialization
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerScript>();
        ph = player.GetComponent<PlayerHealth>();
       // sh = GetComponent<SquirrelHealth>();
        a = GetComponent<Animator>();

    }

    void OnTriggerEnter2D(Collider2D other)
    {

        print("check3");
        if (other.CompareTag("Player"))
        {
            ph.takeDamage(damage);

            StartCoroutine(player.Knockback(0.02f, 150, player.transform.position));
        }


    }

}
