﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class WolfNextLevel : MonoBehaviour
{

    //when player hits platform restart level

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter2D(Collider2D other)
	{
        if(other.CompareTag("NextLevel"))
        {
            SceneManager.LoadScene("SquirrelLevel");
        }

    }
}