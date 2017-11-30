using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WolfHealth : MonoBehaviour {

	public int fullhealth = 100;
	public int currenthealth;
	public float sink = 2.5f;
	public int score = 10;
	public PlayerHealth damage;
	GameObject wolf;
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

		transform.position = new Vector3 (wolf.transform.position.x, wolf.transform.position.y);
		Debug.Log (transform.position);
		
	}

	public void TakeDamage (int amount)
	{
		if (isDead) {
			return;
		}

		isDamaged = true;
		damage.takeDamage (amount);
		currenthealth -= amount;

		if (currenthealth <= 0) {
			Death ();
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

	}

	public void startSinking()
	{
		
		GetComponent <Rigidbody> ().isKinematic = true;

		isSinking = true;

		Destroy (gameObject, 2f);
	}
}
