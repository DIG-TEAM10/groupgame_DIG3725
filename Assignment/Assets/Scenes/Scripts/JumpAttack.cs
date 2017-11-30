using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;



public class JumpAttack : MonoBehaviour {

	public int damage = 10;

	public WolfHealth wh;
	GameObject player;
	public Slider wHealth;
	bool inRange;
	float timer;


	// Use this for initialization
	void Start () {
		wh = GetComponent<WolfHealth> ();
		player = GameObject.FindGameObjectWithTag ("Player");


	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnCollisionEnter2D (Collision2D other)
	{

		print ("check2");
		if (other.collider.CompareTag("Wolf")) {
			inRange = true;
			wh.TakeDamage (damage);
		}
	}

	void exit(Collider other)
	{
		if (other.gameObject == player) {
			inRange = false;
		}
	}

}
