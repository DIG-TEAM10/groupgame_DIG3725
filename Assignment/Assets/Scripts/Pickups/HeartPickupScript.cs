﻿using UnityEngine;
using System.Collections;

public class HeartPickupScript : MonoBehaviour
{

    public float speed;

    

    void Start()
    {
       
    }

    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical = Input.GetAxis("Vertical");

        Vector3 movement = new Vector3(moveHorizontal, 0.0f, moveVertical);

        
    }

    
}
