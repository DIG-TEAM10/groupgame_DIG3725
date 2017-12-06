using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackTriggerPorc: MonoBehaviour {

	public int dmg;
	void OnTriggerEnter2D(Collider2D col)
	{
		if(col.isTrigger != true && col.CompareTag("Pork"))
		{
			col.SendMessageUpwards("Damage", dmg);
		}

	}
}
