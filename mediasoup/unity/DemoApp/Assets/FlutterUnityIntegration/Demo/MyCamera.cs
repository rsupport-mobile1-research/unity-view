using System;
using FlutterUnityIntegration;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Random = UnityEngine.Random;


public class MyCamera : MonoBehaviour, IEventSystemHandler {

    private int rows = 2;
    private int cols = 2;
    private float tile_size = 3;

    private Texture2D _imageTexture2D;
    private IntPtr _nativeTexturePointer;
    private long currentNativeTextureId = -1;

    private List<GameObject> objects = new List<GameObject>();
    private List<Texture2D> textureObjects = new List<Texture2D>();

    private AndroidJavaObject _androidApiInstance;

    #if !UNITY_ANDROID
    public class IOSNativeAPI {
        [DllImport("__Internal")]
        public static extern void sendMessageToMobileApp(System.IntPtr texture, String textureId);

        [DllImport("__Internal")]
        public static extern IntPtr getTextureId();
    }
    #endif

    [SerializeField] public GameObject myPrefab;

    // Start is called before the first frame update
    void Start() {
        // testCreateiOSTexture();
    }

    void testCreateiOSTexture() {
        for (int row = 0; row < rows; row++) {
           for (int col = 0; col < cols; col++) {
                GameObject tile = Instantiate(myPrefab);
                tile.name = $"Title {row} {col}";
                if (row == 0 && col == 0) {
                    // tile.GetComponent<Renderer>().material.mainTexture = Texture2D.CreateExternalTexture(1080, 1920, TextureFormat.ARGB32, false, false, id);
                } else {
                    Texture2D originTexture = Resources.Load("test") as Texture2D; 
                    if (originTexture) {
                        Texture2D texture = new Texture2D(originTexture.width, originTexture.height); 
                        int xN = originTexture.width;
                        int yN = originTexture.height;
                        for (int i = 0; i < xN; i++) {
                            for (int j = 0; j < yN; j++) {
                                texture.SetPixel(j, xN - i - 1, originTexture.GetPixel(j, i));
                                // texture.SetPixel(xN - i - 1, j, originTexture.GetPixel(i, j));
                            }
                        }
                        texture.Apply();
                        Debug.Log("Texture Loaded Sucessfully...");
                        tile.GetComponent<MeshRenderer>().material.mainTexture = texture;
                    } else {
                        Debug.Log("Unable to Load texture...");
                    }
                }
                float x = col * tile_size;
                float y = row * -tile_size;
                tile.transform.position = new Vector2(x - (tile_size/rows), y + 3.5f);
                tile.transform.localScale = new Vector2(2.5f, 2.5f);
                int pos = (row * 100) + col;
                objects.Add(tile);
                Debug.Log("item pos: " + pos);
            }   
        }
        Debug.Log("iOS Created External Texture");
    }


    void createAndroidTexture(long id) {
        if (id == -1 && _imageTexture2D != null) {
            _imageTexture2D = null;
            GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
            return;
        }
        _imageTexture2D = Texture2D.CreateExternalTexture(1080, 1920, TextureFormat.RGB24, true, true, new System.IntPtr(id));
        GetComponent<Renderer>().material.mainTexture = _imageTexture2D;
        Debug.Log("Android Created External Texture");
    }

    void createiOSTexture(IntPtr id) {
        for (int row = 0; row < rows; row++) {
           for (int col = 0; col < cols; col++) {
                GameObject tile = Instantiate(myPrefab);
                tile.name = $"Title {row} {col}";
                if (row == 0 && col == 0) {
                    tile.GetComponent<Renderer>().material.mainTexture = Texture2D.CreateExternalTexture(1080, 1920, TextureFormat.ARGB32, false, false, id);
                } else {
                    Texture2D originTexture = Resources.Load("test") as Texture2D; 
                    if (originTexture) {
                        Texture2D texture = new Texture2D(originTexture.width, originTexture.height); 
                        int xN = originTexture.width;
                        int yN = originTexture.height;
                        for (int i = 0; i < xN; i++) {
                            for (int j = 0; j < yN; j++) {
                                texture.SetPixel(j, xN - i - 1, originTexture.GetPixel(j, i));
                                // texture.SetPixel(xN - i - 1, j, originTexture.GetPixel(i, j));
                            }
                        }
                        texture.Apply();
                        Debug.Log("Texture Loaded Sucessfully...");
                        tile.GetComponent<MeshRenderer>().material.mainTexture = texture;
                    } else {
                        Debug.Log("Unable to Load texture...");
                    }
                }
                float x = col * tile_size;
                float y = row * -tile_size;
                tile.transform.position = new Vector2(x - (tile_size/rows), y + 3.5f);
                tile.transform.localScale = new Vector2(2.5f, 2.5f);
                int pos = (row * 100) + col;
                objects.Add(tile);
                Debug.Log("item pos: " + pos);
            }   
        }
        Debug.Log("iOS Created External Texture");
    }

    // Update is called once per frame
    void Update() {
        #if UNITY_ANDROID
        if (Application.platform == RuntimePlatform.Android) {
            if (_androidApiInstance == null) {
                // it is important to call this in update method. Single Threaded Rendering will run in UnityMain Thread
                AndroidJavaClass androidWebViewApiClass = new AndroidJavaClass("com.cloudwebrtc.webrtc.TextureRendererPlugIn");
                AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
                AndroidJavaObject currentActivityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
                _androidApiInstance = androidWebViewApiClass.CallStatic<AndroidJavaObject>("Instance", currentActivityObject);
            } else {
                long nativeTextureId = _androidApiInstance.Call<long>("getTextureId");
                if (currentNativeTextureId != nativeTextureId) {
                    currentNativeTextureId = nativeTextureId;
                    createAndroidTexture(currentNativeTextureId);
                    Debug.Log("currentNativeTextureId = " + nativeTextureId);
                }
            }
        }
        #endif
        #if !UNITY_ANDROID
        if (Application.platform == RuntimePlatform.IPhonePlayer) {
            IntPtr nativeTextureId = IOSNativeAPI.getTextureId();
            if (_nativeTexturePointer != nativeTextureId) {
                Debug.Log("New nativeTextureId = " + nativeTextureId);
                _nativeTexturePointer = nativeTextureId;
                createiOSTexture(_nativeTexturePointer);
            }
        }
        #endif
    }

    public void InitializeAndroidSurface() {}
}
