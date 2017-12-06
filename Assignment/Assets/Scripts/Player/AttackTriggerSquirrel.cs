using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackTriggerSquirrel: MonoBehaviour {

	public int dmg;
	void OnTriggerEnter2D(Collider2D col)
	{
		if(col.isTrigger != true && col.CompareTag("SQ"))
		{
			col.SendMessageUpwards("Damage", dmg);
		}

	}
}
