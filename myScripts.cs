using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using FlutterUnityIntegration;
using System.Runtime.InteropServices;
using System;
using UnityEngine.EventSystems;


public class NativeAPI
{
    [DllImport("__Internal")]
    public static extern void sendMessageToMobileApp(string message);
    //public static extern void setImageToCube(Image img);
}
public class myScripts : MonoBehaviour, IEventSystemHandler
{
    static Texture2D _texture;
    private IntPtr _nativeTexturePointer;

    // Start is called before the first frame update
    void Start()
    {
        
         _texture = new Texture2D(500, 500, TextureFormat.ARGB32, false);
        _texture.filterMode = FilterMode.Point;
        _texture.Apply();

        GetComponent<Renderer>().material.mainTexture = _texture;
        GetComponent<Renderer>().material.mainTexture.name = _texture.GetNativeTexturePtr().ToString();
        _nativeTexturePointer = _texture.GetNativeTexturePtr();

        NativeAPI.sendMessageToMobileApp(_nativeTexturePointer.ToString());
       

       // UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
    }



    // Update is called once per frame
    void Update()
    {
        NativeAPI.sendMessageToMobileApp(_nativeTexturePointer.ToString());
    }
    public void GetTextureId(String data)
    {

        Debug.Log("New action = " + data);
        UnityMessageManager.Instance.SendMessageToFlutter(_nativeTexturePointer.ToString());
    }

    public void SetImage(byte[] message)
    {
        //_texture.LoadRawTextureData()
    }
}
