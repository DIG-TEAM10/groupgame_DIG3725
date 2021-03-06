﻿  using UnityEngine;
  using System.Collections;
  using UnityEngine.UI;
  using UnityEngine.EventSystems;
 
  public class SceneSelectionFlashingScript : MonoBehaviour
{
    Text text;

    void Start ()
    {
        text = GetComponent<Text>();
        StartBlinking();
    }

    IEnumerator Blink()
    {
        while(true)
        {
            switch(text.color.a.ToString())
            {
                case "0":
                    text.color = new Color(text.color.r, text.color.g, text.color.b, 1);
                    yield return new WaitForSeconds(0.7f);
                    break;
                case "1":
                    text.color = new Color(text.color.r, text.color.g, text.color.b, 0);
                    yield return new WaitForSeconds(0.7f);
                    break;
            }
        }
    }

    void StartBlinking()
    {
        StopCoroutine("Blink");
        StartCoroutine("Blink");
    }

    void StopBlinking()
    {
        StopCoroutine("Blink");
    }

}
