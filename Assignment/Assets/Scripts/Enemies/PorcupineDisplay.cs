using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PorcupineDisplay : MonoBehaviour
{
	Vector3 movement;


	// Use this for initialization
	void Start()
	{

		movement = new Vector3(0f, .1f);

	}

	// Update is called once per frame
	void Update()
	{

		transform.position += movement;


		if (transform.position.y >= -1.2)
		{
			movement = new Vector3(0f, -.1f);
		}

		else if (transform.position.y <= -3.24)
		{
			movement = new Vector3(0f, .1f);
		}

	}
}

