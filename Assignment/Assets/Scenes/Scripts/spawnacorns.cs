using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawnacorns : MonoBehaviour {

    public Transform acornObj;

	// Use this for initialization
	void Start () {
		
        for (int i= -6; i<7; i+=2)
        {
            Instantiate (acornObj, new Vector3 (i, 4, 0), acornObj.rotation);


        }


	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
