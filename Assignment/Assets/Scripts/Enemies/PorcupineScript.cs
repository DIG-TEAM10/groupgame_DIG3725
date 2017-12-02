using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PorcupineScript : MonoBehaviour {

	public GameObject Spike;
	Vector3 movement;


	// Use this for initialization
	void Start () {

		movement = new Vector3(0f, .1f);
			
	}
	
	// Update is called once per frame
	void Update () {

		transform.position += movement;


		if (transform.position.y >= 5.25)
		{
			movement = new Vector3(0f, -.1f);
		}

		else if (transform.position.y <= 2.25)
		{
			movement = new Vector3(0f, .1f);
		}



		if (Random.value > .991)
		{
			GameObject SpawnSpike = Instantiate(Spike, transform.position, Quaternion.Euler(0,0,90));
				SpawnSpike.GetComponent<Rigidbody2D>().velocity = new Vector2(-10, 0);
		}

	}
}
