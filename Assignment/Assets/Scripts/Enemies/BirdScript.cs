using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BirdScript : MonoBehaviour
{

	Vector3 movement;
	SpriteRenderer mySpriteRenderer;

	private void Awake()
	{
		mySpriteRenderer = GetComponent<SpriteRenderer>();
	}


	void Start()
	{

		movement = new Vector3(.1f, 0f);

	}

	// Update is called once per frame
	void Update()
	{

		transform.position += movement;


		if (transform.position.x >= 7.4)
		{
			movement = new Vector3(-.1f, 0f);
			mySpriteRenderer.flipX = false;
		}

		else if (transform.position.x <= -6.5)
		{
			movement = new Vector3(.1f, 0f);
			mySpriteRenderer.flipX = true;
		}

	}
}
	