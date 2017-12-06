using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// reference: Devin Curry, www.devination.com

// script to move WolfEnemy back and forth on a platform without falling off
// or being stuck against a barrier
// Enemy does not jump



public class WolfEnemy : MonoBehaviour
{

	// public variables
	public LayerMask enemyMask; // check for groundedness
	public float wolfspeed = 1; // speed of wolf's movement

	public bool awake = false;

	//local variables
	public Animator a;
	public Rigidbody2D myBody;
	public Transform myTrans; // location, orientation of enemy
	public Transform target;
	float myWidth; // width of enemy sprite -- used for placement of cast
	float myHeight; // height of enemy sprite -- used for placement of cast

	public float currentHealth;
	public float maxHealth;
	public float distance;
	public float wakeRange;



	void Awake()
	{
		a = gameObject.GetComponent<Animator> ();
	}

	// Use this for initialization
	void Start()
	{
		currentHealth = maxHealth; 
	
		myTrans = this.transform;
		myBody = this.GetComponent<Rigidbody2D>();
		// properties of enemy sprite
		SpriteRenderer mySprite = this.GetComponent<SpriteRenderer>();
		myWidth = mySprite.bounds.extents.x;
		myHeight = mySprite.bounds.extents.y;
	}

	// Use FixedUpdate for processing physics of object
	void FixedUpdate()
	{

		a.SetBool ("Awake", awake);

		RangeCheck ();
		// uses the toVector2() extension method.  Found in ExtensionMethods.cs

		// find position to cast two lines -- one for isGrounded (so enemy does not fall
		// off edge) and other for isBlocked (so enemy is not stuck by a blocking object)

		Vector2 lineCastPos = myTrans.position.toVector2() - myTrans.right.toVector2() * myWidth
			+ Vector2.up * myHeight;

		// check for ground in front of object before moving forward

		Debug.DrawLine(lineCastPos, lineCastPos + 2 * Vector2.down);

		bool isGrounded = Physics2D.Linecast(lineCastPos, lineCastPos + 2 * Vector2.down, enemyMask);

		// check for wall in front of object before moving forward

		Debug.DrawLine(lineCastPos, lineCastPos - myTrans.right.toVector2() * 0.05f);

		bool isBlocked = Physics2D.Linecast(lineCastPos,
			lineCastPos - myTrans.right.toVector2() * 0.05f, enemyMask);

		// now do the check. Change orientation and direction of object

		if (!isGrounded || isBlocked)
		{
			Vector3 currRot = myTrans.eulerAngles;
			currRot.y += 180;
			myTrans.eulerAngles = currRot;

		}

		// always move forward regardless of left to right

		Vector2 myVel = myBody.velocity;
		myVel.x = -myTrans.right.x * wolfspeed;
		myBody.velocity = myVel;


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
