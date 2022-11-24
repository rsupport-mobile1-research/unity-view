using System;
using FlutterUnityIntegration;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class MyCamera : MonoBehaviour, IEventSystemHandler {

    private Texture2D _imageTexture2D;
    private IntPtr _nativeTexturePointer;
    
    private AndroidJavaObject _androidApiInstance;

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
        if (_androidApiInstance == null) {
            // it is important to call this in update method. Single Threaded Rendering will run in UnityMain Thread
            InitializeAndroidSurface(500, 500);
        } else {
            _androidApiInstance.Call("updateSurfaceTexture");
        }
    }

    public void InitializeAndroidSurface( int viewportWidth, int viewportHeight) {
        AndroidJavaClass androidWebViewApiClass =
            new AndroidJavaClass("com.rsupport.opengl.rsupport_open_gl.TextureRendererPlugIn");
        
        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");

        AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");

        _androidApiInstance =
            androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject,
                viewportWidth, viewportHeight, _nativeTexturePointer.ToInt32());
    }

    // // This method is called from Flutter
    // public void SetCameraAction(String action) {
    //     Debug.Log("New action = " + action);
    // }

    // // This method is called from Flutter
    // public void SetCameraData(String data) {
    //     DataEntity myObject = JsonUtility.FromJson<DataEntity>(data);
    //     Debug.Log("New data = " + myObject.imageData[0]);
    //     byte[] result = new byte[myObject.imageData.Length];
    //     for (int i = 0; i < myObject.imageData.Length; i++) {
    //         result[i] = ((byte)myObject.imageData[i]);
    //     }
    //     Debug.Log("New data converted = " + result[0]);

    //     Texture2D tex = new Texture2D(16, 16, TextureFormat.PVRTC_RGBA4, false);
    //     // Load data into the texture and upload it to the GPU.
    //     tex.LoadRawTextureData(result);
    //     tex.Apply();
    //     // Assign texture to renderer's material.
    //     GetComponent<Renderer>().material.mainTexture = tex;
    // }

    public void GetTextureId(String data) {
        Debug.Log("New action = " + data);
        UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
        // Texture2D tex = new Texture2D(256, 256, TextureFormat.ARGB32, false);
		// tex.filterMode = FilterMode.Point;
		// tex.Apply();
		// GetComponent<Renderer>().material.mainTexture = tex;
        // UnityMessageManager.Instance.SendMessageToFlutter(tex.GetNativeTexturePtr().ToString());
    }
}
