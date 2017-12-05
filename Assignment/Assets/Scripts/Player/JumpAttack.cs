using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;



public class JumpAttack : WolfHealth {

	public int damage = 10;

	public WolfHealth wh;
	GameObject player, wolf;
	public Slider wHealth;
	bool inRange;
	float timer;
	float x;
	float y;


	// Use this for initialization
	void Start () {
		wolf = GameObject.FindGameObjectWithTag ("WolfEnemy");
		wh = wolf.GetComponent<WolfHealth> ();
		player = GameObject.FindGameObjectWithTag ("Player");
	
		y = Input.GetAxis ("Vertical");
		x = Input.GetAxis ("Horizontal");

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D (Collision2D other)
	{

		print ("check2");
		if (other.collider.CompareTag("WolfEnemy")) {
			inRange = true;
			wh.TakeDamage (damage);
			print ("wolfDamaged");
		}
	}

	void exit(Collider other)
	{
		if (other.gameObject == player) {
			inRange = false;
		}
	}

}
