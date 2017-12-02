using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PanelScript : MonoBehaviour
{
    private GameObject popUp;

    // Use this for initialization
    void Start()
    {
        popUp = GameObject.Find("Panel");
        popUp.SetActive(true);

        if (Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            popUp.SetActive(false);
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}