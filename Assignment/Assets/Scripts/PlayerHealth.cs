using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour {

	public int fullhealth = 100;
	public int currenthealth;
	public Slider healthSlider;
	public Image damageImage;
	public float damageSpeed = 5f;
	public Color flashColor = new Color(1f, 0f, 0.1f);


	Animator a;
	AudioSource aud;
	bool isDead;
	bool isDamaged;


	// Use this for initialization
	void Start ()
	{
		a = GetComponent <Animator> ();
		aud = GetComponent <AudioSource> ();
		currenthealth = fullhealth;
	}
	
	// Update is called once per frame
	void Update () {
		if (isDamaged) 
		{
			damageImage.color = flashColor;
		} 
			
		isDamaged = false;
	}

	public void takeDamage(int amount)
	{
		isDamaged = true;

		currenthealth -= amount;

		healthSlider.value = currenthealth;

		print (currenthealth);

		if (currenthealth <= 0 && !isDead) 
		{
			Death ();
		}
	}

	void Death()
	{
		isDead = true;

		a.SetTrigger ("Die");

	}
}
