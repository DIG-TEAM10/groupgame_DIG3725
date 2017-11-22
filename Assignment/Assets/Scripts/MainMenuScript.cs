using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuScript : MonoBehaviour {

    public GameObject NewGameButton;
    public GameObject OptionsButton;

    private int levelToLoad = 0;

	// Use this for initialization
	void Start () {
		
	}
	
    public void LevelSelection(int levelNumber)
	{
		switch (levelNumber) {
		case (0):
			break;
		case (1):
			break;
		case (2):
			break;
		case (3):
			break;



		}

	}
}