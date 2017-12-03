using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BirdAttack : MonoBehaviour
{

public bool isLeft = true;

public GameObject bullet;
public Transform target;
	public Transform shootpointLeft; 

	// Use this for initialization
	void Start()
	{
	//curhealth = maxhealth;
	}

	// Update is called once per frame
	void Update()
	{

	}

	public void Attack(bool attackingLeft)
	{
		//bulletTimer += Time.deltaTime;

		//if (bulletTimer >= shootInterval)
		{

			Vector2 direction = target.transform.position - transform.position;
			direction.Normalize();

			if (!attackingLeft)
			{

				GameObject bulletClone;
				//bulletClone = Instantiate(bulletClone, shootPointLeft.transform.position, shootPointLeft.transform.rotation as gameObject);
				//bulletClone.GetComponent<Rigidbody2D>().velocity = direction * bulletSpeed;

				//bulletTimer = 0;

			}
		}
	}
}