using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;



public class MeleeAttack : MonoBehaviour {

	private bool attacking = false;
	private float attackTimer = 0;
	private float attackCd = 0.3f;

	public WolfEnemy w;
	public BirdScript s;
	public Collider2D attackTrigger;

	private Animator a;


	void Awake ()
	{
		a = gameObject.GetComponent<Animator> ();
		attackTrigger.enabled = false;
	}

	void Update()
	{
		if(Input.GetKeyDown("f"))
			{
			attacking = true;
			a.SetBool("Attacking", attacking);
			a.SetTrigger ("isAttacking");
			attackTimer = attackCd;

					attackTrigger.enabled = true;
			}

			if(attacking)
			{
				if(attackTimer > 0)
				{
					attackTimer -= Time.deltaTime;
				}
				else
				{
					attacking = false;
					attackTrigger.enabled = false;
				}
			}
			
					

	}



}
