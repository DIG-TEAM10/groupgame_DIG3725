using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;




	public new int playerdamage = 10;

	public WolfHealth wh;
	GameObject player, wolf;
	public PlayerHealth ph;
	public Slider enemyhealth;
	bool inRange;
	public float attacktime = 0.5f;
	float timer;
	Animator a;


	// Use this for initialization
	void Start () {
		wolf = GameObject.FindGameObjectWithTag ("WolfEnemy");
		wh = wolf.GetComponent<WolfHealth> ();
		player = GameObject.FindGameObjectWithTag ("Player");
		ph = player.GetComponent<PlayerHealth> ();
		a = GetComponent <Animator> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		float x = Input.GetAxis ("Horizontal");
		float y = Input.GetAxis ("Vertical");

		transform.Translate (new Vector2 (x, y) * Time.deltaTime);

		timer += Time.deltaTime;
		if (timer >= attacktime && inRange && ph.currenthealth > 0) {

			Attack ();
		}

		if (wh.currenthealth <= 0) {

			a.SetTrigger ("WolfDead");
		}

	}

	void OnCollisionEnter2D (Collision2D other)
	{

		print ("check2");
		if (other.collider.CompareTag("WolfEnemy")) {
			inRange = true;
			wh.TakeDamage (playerdamage);
			print ("wolfDamaged");
		}
	}

	void exit(Collider other)
	{
		if (other.gameObject == player) {
			inRange = false;
		}
	}

	void Attack()
	{
		timer = 0f;

		if (wh.currenthealth > 0) {

			wh.TakeDamage (playerdamage);
			enemyhealth.value -= 10;
		}


	}

}
