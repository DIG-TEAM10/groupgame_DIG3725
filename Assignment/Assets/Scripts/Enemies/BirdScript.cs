using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BirdScript : MonoBehaviour
{
	public float currentHealth;
	public float maxHealth;
	public float distance;
	public float wakeRange;
	public bool awake = false;
	public Transform target;
	public Animator a;
	Vector3 movement;
	SpriteRenderer mySpriteRenderer;
public PlayerHealth ph;
private PlayerScript player;
public int damage = 10;
public Slider pHealth;

	void Awake()
	{
		mySpriteRenderer = GetComponent<SpriteRenderer>();
		a = gameObject.GetComponent<Animator> ();
	}


	void Start()
	{
		currentHealth = maxHealth;
		movement = new Vector3(.1f, 0f);
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerScript>();
		ph = player.GetComponent<PlayerHealth>();
	
	}


	// Update is called once per frame
	void Update()
	{
		a.SetBool ("Awake", awake); 

		RangeCheck ();
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

		if (currentHealth <= 0) {
			Destroy (gameObject);
		}
	}



    void OnCollisionEnter2D(Collision2D other)
	{
		print("check2");
		if (other.collider.CompareTag("Player"))
		{
			ph.takeDamage(damage);
		}

		StartCoroutine(player.Knockback(0.02f, 10, player.transform.position));	 
	} 

	void RangeCheck()
	{
		distance = Vector3.Distance (transform.position, target.transform.position);

		if (distance < wakeRange) {
			awake = true;
		}

		if (distance > wakeRange) {
			awake = false;
		}
	}

	public void Damage(int dmg)
	{
		currentHealth -= dmg;
		gameObject.GetComponent<Animator> ().Play ("Player_RedFlash");

	}


	}
	