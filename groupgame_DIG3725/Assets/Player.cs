using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
	float x, y ;
	public Vector2 jumpForce;
	Rigidbody2D rb;
	bool groundContact = true;
	public float walk = 2f;
	bool onGround = true;
	public GameObject groundPoint;
	float radius;
	public LayerMask layerMask;


	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D> ();
	}

	void Update() {
	    radius = 0.5f;
		//Collider2D collider2d = Physics2D.OverlapCircle(groundPoint.transform.position, radius); 
		onGround = Physics2D.OverlapCircle(groundPoint.transform.position, radius, layerMask); 
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		x = Input.GetAxis ("Horizontal");
		//y = Input.GetAxis ("Vertical");
		rb.velocity = new Vector3(x*walk, rb.velocity.y, 0f);

		// only jump when on the ground
		// Method 1: Transform.LineCast between two point. Does it intersect the ground
		// Method 2: add circle collider at bottom of obect. 
		if (Input.GetKeyDown (KeyCode.Space) && onGround) {
			rb.AddForce(jumpForce, ForceMode2D.Impulse); 
			onGround = false;
		}
	}	

	void OnCollisionEnter2D(Collision2D other) {
		print ("enter: " + other.gameObject.tag);
		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = other.transform;
		}
	}
		
	void OnCollisionExit2D(Collision2D other) {
		print ("exit: " + other.gameObject.tag);
		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = null;
		}
	}
}