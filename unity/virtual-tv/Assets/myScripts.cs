using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using FlutterUnityIntegration;
using System.Runtime.InteropServices;
using System;
using UnityEngine.EventSystems;

 public class NativeAPI {
        [DllImport("__Internal")]
        public static extern void sendMessageToMobileApp(System.IntPtr texture, String textureId);
 }

public class myScripts : MonoBehaviour, IEventSystemHandler
{
    static Texture2D _texture;
    private IntPtr _nativeTexturePointer;
    private AndroidJavaObject _androidApiInstance;

    // Start is called before the first frame update
    void Start()
    {
        _texture = new Texture2D(500, 500, TextureFormat.ARGB32, false);
        _texture.filterMode = FilterMode.Point;
        _texture.Apply();
		GetComponent<Renderer>().material.mainTexture = _texture;
        _nativeTexturePointer = _texture.GetNativeTexturePtr();

    }


    void Update() {
        NativeAPI.sendMessageToMobileApp(_nativeTexturePointer, _nativeTexturePointer.ToString());
        //if (Application.platform == RuntimePlatform.Android) {
        //    if (_androidApiInstance == null) {
        //        // it is important to call this in update method. Single Threaded Rendering will run in UnityMain Thread
        //        InitializeAndroidSurface(500, 500);
        //    } else {
        //        _androidApiInstance.Call("updateSurfaceTexture");
        //    }
        //} else if (Application.platform == RuntimePlatform.IPhonePlayer) {
        //    IOSNativeAPI.sendMessageToMobileApp(_nativeTexturePointer, _nativeTexturePointer.ToString());
        //}
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
