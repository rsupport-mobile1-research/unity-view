# Rsupport app

Setup flutter app to display video call from Flutter-WebRTC on Unity view

# Setup guide

Clone main source code at [Main repo](https://github.com/rsupport-mobile1-research/unity-view)
```
git clone https://github.com/rsupport-mobile1-research/unity-view.git
```

For this example all the source code in webrtc folder. In next step, we need to clone webrtc source code into webrtc folder at [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc)
```
cd unity-view
cd webrtc
git clone https://github.com/rsupport-mobile1-research/flutter-webrtc.git
git checkout feature/draw_video_stream_from_external_texture_with_webrtc
```

![Alt text](/images/flutter_setup_guide_6.png "Guide 1")

> In case you need to do some changes, please create a new branch for which part you need to edit. For example, I want to do some change for WebRTC I will create a new branch for main to do it from this repo [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc) **


# Launch code

<details>
 <summary>:information_source: <b>Android</b></summary>


Build androidlibrary from Unity
- [Install Unity](https://unity.com/download)
- Open source code Unity in **unity/DemoApp**

![Alt text](/images/flutter_setup_guide_2.png "Guide 2")

Config build setting for android on Unity. Select **File -> Build Settings**. In the window, select Android platform and click on Player Settings below of the window. Select Player and find Multithreaded Rendering* option. We need to disable this option.

![Alt text](/images/flutter_setup_guide_3.png "Guide 3")

Make sure **Export Project** is on

![Alt text](/images/flutter_setup_guide_3.1.png "Guide 3.1")

Close the window and click on Switch Plaform on Build Settings popup & close the popup. Select **Flutter -> Export Android Plugin**. After done this step we will see unityLibrary under Android folder.

Continue to change config NDK on android. We need to add **ndk.dir in local.properties** of android folder at **unity-view/android/local.properties** with
```
 ndk.dir=/Applications/Unity/Hub/Editor/[ndk version]/PlaybackEngines/AndroidPlayer/NDK
```
> Make sure you get the correct version of ndk by move to /Applications/Unity/Hub/Editor/ to get it

![Alt text](/images/flutter_setup_guide_4.png "Guide 4")

Open unity_view folder by android studio. Add unity-classes.jar in android/unityLibrary as a library by right click on unity-classes.jar -> Add as library...

![Alt text](/images/flutter_setup_guide_5.png "Guide 5")

Check if there are missing some files arcore_client.aar, ARPresto.aar, unityandroidpermissions.aar, UnityARCore.aar.
> If missing, check config build on Unity setting again

Start an android device to build the app.

</details>

<details>
 <summary>:information_source: <b>iOS</b></summary>


Build iOS library from Unity
- [Install Unity](https://unity.com/download)
- Open source code Unity in **unity/DemoApp**

![Alt text](/images/flutter_setup_guide_2.png "Guide 2")

Then you do following Steps like this:

> <b> Step 1 </b>
 Select menu 'File' -> Build Setting
 
![Alt text](/images/ios_setup_1.png)

> <b> Step 2 </b>
 Build Setting Panel Appear -> choose iOS -> Click Switch platform -> Click 'Payer Settings'
 
 ![Alt text](/images/ios_setup_2.png)
 ![Alt text](/images/ios_setup_2_1.png)

> <b> Step 3 </b>
Be select all type property like the red squard in these images

 ![Alt text](/images/ios_setup_3.png)
 ![Alt text](/images/ios_setup_4.png)

> <b> Step 4 </b>
Import package from folder 'Unity package'


![Alt text](/images/ios_setup_5.png)
![Alt text](/images/ios_setup_6.png)

> <b> Step 5 </b>
Now, Export Plugin for iOS from unity. You should export 'Export iOS Debug' and 'Export iOS Plugin',Unity tool will auto export to folder ios in flutter project


 ![Alt text](/images/ios_setup_7.png)
 ![Alt text](/images/ios_setup_8.png)

> <b> Step 6 </b>
Open folder 'unity-view' -> 'ios' -> Open Folder 'Runner.xcworkspace'. Then config like theses images

 ![Alt text](/images/ios_setup_9.png)
 ![Alt text](/images/ios_setup_10.png)
 ![Alt text](/images/ios_setup_11.png)
 
> <b> Step 7 </b>
Add file for custom workflow WebRTC
 

  ![Alt text](/images/ios_setup_11_1.png)
  ![Alt text](/images/ios_setup_11_2.png)
  ![Alt text](/images/ios_setup_11_3.png)

> <b> Step 8 </b>
Login your Developer Apple ID. Then register App bundle ID to build application on device.

 
  ![Alt text](/images/ios_setup_12.png)
  ![Alt text](/images/ios_setup_13.png)
 
 then you should setup all environment sdk flutter
 
  ![Alt text](/images/ios_setup_14.png)
 
then you can build on device.












 
 
 
</details>

> Reference docs: [Flutter Unity View](https://github.com/juicycleff/flutter-unity-view-widget)
