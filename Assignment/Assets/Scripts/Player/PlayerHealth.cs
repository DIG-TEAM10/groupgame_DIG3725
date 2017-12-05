using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerHealth : MonoBehaviour
{

	public int fullhealth = 100;
	public int currenthealth;
	GameObject player;
	Rigidbody2D rb;
	public Slider healthSlider;
	public Image damageImage;
	public float damageSpeed = 5f;
	public Color flashColor = new Color(1f, 0f, 0.1f);
public float WaitTime = 1.0f;


	Animator a;
	AudioSource aud;
	bool isDead;
	bool isDamaged;
	PlayerScript playerScript;



//IEnumerator Reset(float Count)
//{
	//yield return new WaitForSeconds(Count); //Count is the amount of time in seconds that you want to wait.
											//And here goes your method of resetting the game...
//int scene = SceneManager.GetActiveScene().buildIndex;
//SceneManager.LoadScene(scene, LoadSceneMode.Single); }

	// Use this for initialization
	void Start()
	{
		player = GameObject.FindGameObjectWithTag ("Player");
		a = GetComponent<Animator>();
		aud = GetComponent<AudioSource>();
		currenthealth = fullhealth;
		playerScript = GetComponent<PlayerScript> ();
	}

	// Update is called once per frame
	void Update()
	{

	}

	public void takeDamage(int amount)
	{
		isDamaged = true;

		currenthealth -= amount;

		healthSlider.value = currenthealth;

		print(currenthealth);

		print ("taking damage");

		if (currenthealth <= 0 && !isDead)
		{
			Death();
		}
	}


	void OnTriggerEnter2D(Collider2D other)
	{

		print("hello");

		if (other.gameObject.CompareTag("redheartpickuptag"))
		{
			if (currenthealth < 100)
			{
				currenthealth += 10;
				healthSlider.value = currenthealth;

				print("healthup");
			}
        }

        if (other.gameObject.CompareTag("acorn"))
        {
            currenthealth-=10;
			healthSlider.value = currenthealth;
        }

		 if (other.CompareTag("Restart"))
        {

            currenthealth = 0;
        }
 }
 

void Death()
	{
		isDead = true;

		a.SetTrigger("Die");

		playerScript.enabled = false;

        //StartCoroutine("Reset", WaitTime);


		}
}