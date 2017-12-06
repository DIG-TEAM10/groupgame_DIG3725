using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackTriggerBird : MonoBehaviour {

	public int dmg;
	void OnTriggerEnter2D(Collider2D col)
	{
		if(col.isTrigger != true && col.CompareTag("Bird"))
		{
			col.SendMessageUpwards("Damage", dmg);
		}

	}
}
