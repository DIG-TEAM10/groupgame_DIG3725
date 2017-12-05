using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

public class WolfHealth : MonoBehaviour {

	public int fullhealth = 10;
	public float startspeed = 10f;

	[HideInInspector]
	public float speed;
	public int currenthealth;
	public float sink = 2.5f;
	public int damage = 10;
	GameObject death;
	[Header("Unity")]
	public Image healthstuff;
	public Rect barposition, position;
	public Texture2D health, bar;

	Animator a;

	bool isDead, isDamaged;
	bool isSinking;

	// Use this for initialization
	void Start () {

		a = GetComponent <Animator> ();
		currenthealth = fullhealth;
		
	}




	
	// Update is called once per frame
	void Update () {

		if (isSinking) {

			transform.Translate (-Vector3.up * sink * Time.deltaTime);
		}

		transform.position = new Vector3 (death.transform.position.x, death.transform.position.y);
		Debug.Log (transform.position);
		
	}

	public void TakeDamage (int amount)
	{
		isDamaged = true;

		currenthealth -= amount;
	
		healthstuff.fillAmount = currenthealth;

		print(currenthealth);

		if (currenthealth <= 0 && !isDead)
		{
			Death();
		}
	}

	void OnTriggerEnter2D(Collider2D other)
	{

		print("hello");

		if (other.gameObject.CompareTag("Player"))
		{
			currenthealth -= 10;
			healthstuff.fillAmount = currenthealth;

			print("wolf damaged");
		}

	}

	void OnGUI()
	{
		GUI.DrawTexture (barposition, bar);

	}


	void Death()
	{
		isDead = true;

		a.SetTrigger ("Die");
		startSinking ();

	}

	public void startSinking()
	{
		
		GetComponent <Rigidbody> ().isKinematic = true;

		isSinking = true;

		Destroy (gameObject, 2f);
	}
}
