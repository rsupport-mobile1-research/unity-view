using System;
using FlutterUnityIntegration;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;


public class MyCamera : MonoBehaviour, IEventSystemHandler {

    private Texture2D _imageTexture2D;
    private IntPtr _nativeTexturePointer;
    
    private AndroidJavaObject _androidApiInstance;


    public class IOSNativeAPI {
        [DllImport("__Internal")]
        public static extern void sendMessageToMobileApp(string message);
    }

    // Start is called before the first frame update
    void Start() {
        _imageTexture2D = new Texture2D(500, 500, TextureFormat.ARGB32, false);
        _imageTexture2D.filterMode = FilterMode.Point;
		_imageTexture2D.Apply();
		GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
        _nativeTexturePointer = _imageTexture2D.GetNativeTexturePtr();
    }

    // Update is called once per frame
    void Update() {
        if (Application.platform == RuntimePlatform.Android) {
            if (_androidApiInstance == null) {
                // it is important to call this in update method. Single Threaded Rendering will run in UnityMain Thread
                InitializeAndroidSurface(500, 500);
            } else {
                _androidApiInstance.Call("updateSurfaceTexture");
            }
        } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
            IOSNativeAPI.sendMessageToMobileApp(_nativeTexturePointer.ToString());
        }
    }

    public void InitializeAndroidSurface( int viewportWidth, int viewportHeight) {
        AndroidJavaClass androidWebViewApiClass =
            new AndroidJavaClass("com.cloudwebrtc.webrtc.TextureRendererPlugIn");
        
        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

        AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

        _androidApiInstance =
            androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject,
                viewportWidth, viewportHeight, _nativeTexturePointer.ToInt32());
    }

    public void GetTextureId(String data) {
        Debug.Log("New action = " + data);
        UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
    }
}
