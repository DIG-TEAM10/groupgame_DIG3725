using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShredderMover : MonoBehaviour
{

	Vector3 movement;


	// Use this for initialization
	void Start()
	{

		movement = new Vector3(0f, .025f);

	}

	// Update is called once per frame
	void Update()
	{
		if (transform.position.y >= 42)
		{
			movement = new Vector3(0f, 0f);
		}

		transform.position += movement;

	}
}
