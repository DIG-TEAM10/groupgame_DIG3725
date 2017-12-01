using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SquirrelSpawning : MonoBehaviour {

    public GameObject acorn;
    int counter = 0;

	// Use this for initialization
	void Start () {

        

    }
	
	// Update is called once per frame
	void Update () {
        if (counter > 200)
        {
            GameObject newacorn = Instantiate(acorn, transform.position, Quaternion.identity);
            counter = 0;
            newacorn.GetComponent<Rigidbody2D>().velocity = new Vector2(-5f, 0);
        }

        counter++;

    }
}
