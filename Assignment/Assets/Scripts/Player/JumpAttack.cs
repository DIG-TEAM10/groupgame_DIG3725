using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;



public class MeleeAttack : MonoBehaviour {

	public float attacktime = 0.5f;
	public int damage = 10;

	Animator a;
	GameObject wolf;
	public Slider enemyHealth;
	public PlayerHealth ph;
	public WolfHealth wh;
	bool inRange;
	float timer;


	void Start () {
		wolf = GameObject.FindGameObjectWithTag ("WolfEnemy");
		wh = wolf.GetComponent<WolfHealth> ();
		ph = GetComponent<PlayerHealth> ();
		a = GetComponent <Animator> ();
	}

	void OnCollisionEnter2D (Collision2D other)
	{
		print ("Checking Wolf");
		if (other.collider.CompareTag("Enemy")) {
			inRange = true;
			wh.TakeDamage (damage);
		}
	}

	void exit(Collider other)
	{
		if (other.gameObject == wolf) {
			inRange = false;
		}
	}

	void Update () {
		timer += Time.deltaTime;
		if (timer >= attacktime && inRange && ph.currenthealth > 0) {

			Attack ();
		}

		if (wh.currenthealth <= 0) {

			a.SetTrigger ("WolfDead");
		}

	}


	void Attack()
	{
		timer = 0f;

		if (wh.currenthealth > 0) {

			wh.TakeDamage (damage);
			enemyHealth.value -= 10;
		}


	}

}
