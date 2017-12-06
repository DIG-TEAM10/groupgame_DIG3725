﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackTriggerWolf : MonoBehaviour {

	public int dmg;
	void OnTriggerEnter2D(Collider2D col)
	{
		if(col.isTrigger != true && col.CompareTag("WolfEnemy"))
		{
			col.SendMessageUpwards("Damage", dmg);
		}

	}
}
