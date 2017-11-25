using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartPickupScript : MonoBehaviour {

	
    void OnTriggerEnter2D(Collider2D other)
    {
        //Check the provided Collider2D parameter other to see if it is tagged "PickUp", if it is...
        if (other.gameObject.CompareTag("redheartpickuptag"))
        {
            //... then set the other object we just collided with to inactive.
            other.gameObject.SetActive(false);

        }


    }
}
