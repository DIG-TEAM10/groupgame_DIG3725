using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BirdScript : MonoBehaviour
{

	Vector3 movement;
	SpriteRenderer mySpriteRenderer;
public PlayerHealth ph;
private PlayerScript player;
public int damage = 10;
public Slider pHealth;

	private void Awake()
	{
		mySpriteRenderer = GetComponent<SpriteRenderer>();
	}


	void Start()
	{

		movement = new Vector3(.1f, 0f);
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerScript>();
		ph = player.GetComponent<PlayerHealth>();
	
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
    void OnCollisionEnter2D(Collision2D other)
{
	print("check2");
	if (other.collider.CompareTag("Player"))
	{
		ph.takeDamage(damage);
	}

	StartCoroutine(player.Knockback(0.02f, 25, player.transform.position));	 
	} 

	}
	