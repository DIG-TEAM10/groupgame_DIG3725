using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PorcupineScript : MonoBehaviour {

	public GameObject Spike;
	Vector3 movement;

	public float currentHealth;
	public Transform target;
	public float maxHealth;
	public float distance;
	public float wakeRange;
	public Animator a;

	public bool awake = false;


	void Awake()
	{
		a = gameObject.GetComponent<Animator> ();
	}

	// Use this for initialization
	void Start () {

		movement = new Vector3(0f, .1f);
			
	}
	
	// Update is called once per frame
	void Update () {


		a.SetBool ("Awake", awake);

		RangeCheck ();

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

		if (currentHealth <= 0) {
			Destroy (gameObject);
		}

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
