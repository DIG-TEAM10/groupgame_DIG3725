using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class WolfAttack : MonoBehaviour {

	public float attacktime = 0.5f;
	public int damage = 10;

	Animator a;
	GameObject player;
	public Slider pHealth;
	public PlayerHealth ph;
	WolfHealth wh;
	bool inRange;
	float timer;



	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		ph = player.GetComponent <PlayerHealth> ();
		wh = GetComponent <WolfHealth> ();
		a = GetComponent <Animator> ();
		
	}

	void OnCollisionEnter2D (Collision2D other)
	{

		print ("check2");
		if (other.collider.CompareTag("Player")) {
			inRange = true;
			ph.takeDamage (damage);
		}
	}

	void exit(Collider other)
	{
		if (other.gameObject == player) {
			inRange = false;
		}
	}

	// Update is called once per frame
	void Update () {

		timer += Time.deltaTime;
		if (timer >= attacktime && inRange && wh.currenthealth > 0) {

			Attack ();
		}

		if (ph.currenthealth <= 0) {

			a.SetTrigger ("PlayerDead");
		}
		
	}

	void Attack()
	{
		timer = 0f;

		if (ph.currenthealth > 0) {

			ph.takeDamage (damage);
			pHealth.value -= 10;
		}


	}
}
