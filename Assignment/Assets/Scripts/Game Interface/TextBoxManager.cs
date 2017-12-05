using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextBoxManager : MonoBehaviour {

    public GameObject textBox;

    public Text theText;

    public TextAsset textFile;
    public string[] textLines;

    public int currentLine;
    public int endAtLine;

    public PlayerScript player;

    public bool IsActive;

    public bool stopPlayerMovement;

    // Use this for initialization
    void Start()
    {
        player = FindObjectOfType<PlayerScript>();


        if (textFile != null)
        {
            textLines = (textFile.text.Split('\n'));
        }

        if(endAtLine == 0)
        {
            endAtLine = textLines.Length - 1;
        }

        if (IsActive)
        {
            EnableTextBox();
        }
        else
            DisableTextBox();
    }


    void Update()
    {

        if(!IsActive)
        {
            return;
        }

        theText.text = textLines[currentLine];
        
        if(Input.GetKeyDown(KeyCode.Return))
        {
            currentLine += 1;
        }

        if(currentLine > endAtLine)
        {
            DisableTextBox();
        }

    }

    public void EnableTextBox()
    {
        textBox.SetActive(true);
        IsActive = true;

        if(stopPlayerMovement)
        {
            player.canMove = false;
        }
    }


    public void DisableTextBox()
    {
        textBox.SetActive(false);
        IsActive = false;

        player.canMove = true;
    }

    public void ReloadScript(TextAsset theText)
    {
        if(theText!= null)
        {
            textLines = new string[1];
            textLines = (theText.text.Split('\n'));

        }
    }

}

