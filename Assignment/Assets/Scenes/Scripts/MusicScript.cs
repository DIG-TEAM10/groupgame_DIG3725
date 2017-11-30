using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicScript : MonoBehaviour {
	static MusicScript instance = null;
	bool play = false;

	void awake() {

	}

	// Use this for initialization
	void Start () {
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} else {
			Destroy (gameObject);
		}

			
	
		// Update is called once per frame
	}
	}
