using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MyCamera : MonoBehaviour
{
    WebCamTexture webcamText;
    public RawImage display;

    // Start is called before the first frame update
    void Start()
    {
        if (webcamText != null) {
            display.texture = null;
            webcamText.Stop();
            webcamText = null;
        }
        else
        {
            WebCamDevice webCam = WebCamTexture.devices[0];
            webcamText = new WebCamTexture(webCam.name);
            display.texture = webcamText;
            webcamText.Play();

        }
    }
}
