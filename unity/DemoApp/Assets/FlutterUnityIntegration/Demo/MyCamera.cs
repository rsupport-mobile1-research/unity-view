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
    private long currentNativeTextureId = -1;
    
    private AndroidJavaObject _androidApiInstance;

    #if !UNITY_ANDROID
    public class IOSNativeAPI {
        [DllImport("__Internal")]
        public static extern void sendMessageToMobileApp(System.IntPtr texture, String textureId);
    }
    #endif

    // Start is called before the first frame update
    void Start() {
        #if !UNITY_ANDROID
        _imageTexture2D = new Texture2D(500, 500, TextureFormat.ARGB32, false);
        _imageTexture2D.filterMode = FilterMode.Point;
		_imageTexture2D.Apply();
		GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
        _nativeTexturePointer = _imageTexture2D.GetNativeTexturePtr();
        #endif
    }

    void createTexture(long id) {
        if (id == -1 && _imageTexture2D != null) {
            _imageTexture2D = null;
            GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
            return;
        }
        _imageTexture2D = Texture2D.CreateExternalTexture(1080, 1920, TextureFormat.RGB24, true, true, new System.IntPtr(id));
		GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
    }

    // Update is called once per frame
    void Update() {
        #if UNITY_ANDROID
        if (Application.platform == RuntimePlatform.Android) {
            if (_androidApiInstance == null) {
                // it is important to call this in update method. Single Threaded Rendering will run in UnityMain Thread
                InitializeAndroidSurface();
            } else {
                long nativeTextureId = _androidApiInstance.Call<long>("getTextureId");
                if (currentNativeTextureId != nativeTextureId) {
                    currentNativeTextureId = nativeTextureId;
                    createTexture(currentNativeTextureId);
                    Debug.Log("currentNativeTextureId = " + nativeTextureId);
                }
            }
        }
        #endif
        #if !UNITY_ANDROID
        if (Application.platform == RuntimePlatform.IPhonePlayer) {
            IOSNativeAPI.sendMessageToMobileApp(_nativeTexturePointer, _nativeTexturePointer.ToString());
        }
        #endif
    }

    public void InitializeAndroidSurface() {
        AndroidJavaClass androidWebViewApiClass =
            new AndroidJavaClass("com.cloudwebrtc.webrtc.TextureRendererPlugIn");
        
        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

        AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

        _androidApiInstance =
            androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
    }

    public void GetTextureId(String data) {
        Debug.Log("New action = " + data);
        UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
    }
}
