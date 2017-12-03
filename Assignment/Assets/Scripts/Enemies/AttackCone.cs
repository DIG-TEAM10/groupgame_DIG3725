using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackCone : MonoBehaviour
{

	public BirdAttack birdAttack;

	public bool isLeft = false;



	// Use this for initialization
	void Start()
	{

		birdAttack = gameObject.GetComponentInParent<BirdAttack>();

	}

	// Update is called once per frame
	void OnTriggerStay2D(Collider2D col)
	{
		if (col.CompareTag("Player"))
		{
			if (isLeft)
			{
				birdAttack.Attack(false);
			}

			else
			{
				birdAttack.Attack(true);
			}
		}
	}
}