﻿using System;
using FlutterUnityIntegration;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;


public class Rotate : MonoBehaviour, IEventSystemHandler
{
    [SerializeField]
    Vector3 RotateAmount;

    // Start is called before the first frame update
    void Start()
    {
        RotateAmount = new Vector3(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
        gameObject.transform.Rotate(RotateAmount * Time.deltaTime * 120);

        for (int i = 0; i < Input.touchCount; ++i)
        {
            if (Input.GetTouch(i).phase.Equals(TouchPhase.Began))
            {
                var hit = new RaycastHit();

                Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);

                if (Physics.Raycast(ray, out hit))
                {
                    // This method is used to send data to Flutter
                    UnityMessageManager.Instance.SendMessageToFlutter("The cube feels touched.");
                }
            }
        }
    }

    // This method is called from Flutter
    public void SetRotationSpeed(String message)
    {
        Debug.Log("New speed = " + message);
        float value = float.Parse(message);
        RotateAmount = new Vector3(value, value, value);
    }

    // This method is called from Flutter
    public void SetColor(String color)
    {
        Debug.Log("New color = " + color);
        Color greenColor;
        ColorUtility.TryParseHtmlString(color, out greenColor);
        gameObject.GetComponent<Renderer>().material.color = greenColor;
    }
}