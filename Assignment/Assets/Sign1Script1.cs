using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;



public class Sign1Script1 : MonoBehaviour
{
    private GameObject popUp;


    // Use this for initialization
    void Start()
    {



    }

    // Update is called once per frame
    void FixedUpdate()
    {

    }


    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("sign1"))
        {
            popUp = GameObject.Find("Panel");
            popUp.SetActive(true);
        }

    }
}