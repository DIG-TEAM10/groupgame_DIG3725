using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingPlatform : MonoBehaviour {

	public Vector3 begin;
	public Vector3 end;
	public float speed;
	private int dir;
	private float timex;
	private float xx;
	Rigidbody2D rb;
	Rigidbody2D playerrb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D> ();
		playerrb = FindObjectOfType < Player> ().GetComponent<Rigidbody2D>();
		transform.position = begin;
		timex = 0f;
		dir = 1;
	}
	
	// Update is called once per frame
	void Update () {
		// Three different alternatives. Uncomment one alterntive and comment the two others.
		//UpdatePosition1 ();
		//UpdatePosition2 ();
		UpdatePosition3 ();
	}

	void UpdatePosition1() {


		if (transform.position.x > end.x) {
			transform.position = end;
			dir = -1;
		}

		else if (transform.position.x < begin.x) {
			transform.position = begin;
			dir = 1;
		} 

		// Horizontal motion
		transform.position += transform.right * speed * Time.deltaTime * dir;
	}

	void UpdatePosition2() {
		
		if (transform.position.x > end.x) {
			transform.position = end;
			dir = -1;
		}

		else if (transform.position.x < begin.x) {
			transform.position = begin;
			dir = 1;
		} 

		// Horizontal motion
		transform.Translate (transform.right * speed * Time.deltaTime * dir);
	}

	void UpdatePosition3() {
		timex += (speed *  dir * .1f);

		if (transform.position.x > end.x) {
			transform.position = end;
			dir = -1;
			timex = 1f;
		}

		if (transform.position.x < begin.x) {
			transform.position = begin;
			dir = 1;
			timex = 0f;
		} 

		// Lerp3 clamps third argument to [0,1], so create my own
		//transform.position = Vector3.Lerp(begin, end, timex);
		transform.position = (1 - timex) * begin + timex * end;

		// how to make platform oscillate? 
	}
	/*
	void OnTriggerEnter2D(Collider2D other) {
		//print("player: enter trigger");
		if (other.gameObject.tag == "Player") {
			//print (other.gameObject.name);
			other.gameObject.transform.parent = this.gameObject.transform;  // NOT WORKING. How does 2D platformer do it? Udemyhis
		} 
	}
	*/
}
