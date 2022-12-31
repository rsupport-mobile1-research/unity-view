# Rsupport app

Setup flutter app to display video call from Janus server on Unity view

# Setup guide

Clone main source code at [Main repo](https://github.com/rsupport-mobile1-research/unity-view)
```
git clone https://github.com/rsupport-mobile1-research/unity-view.git
```

Move to unity-view folder and clone janus client source code into unity-view folder at [Janus client lib](https://github.com/rsupport-mobile1-research/flutter_janus_client)
```
cd unity-view & git clone https://github.com/rsupport-mobile1-research/flutter_janus_client.git
```
Move to flutter_janus_client folder and clone webrtc source code into flutter_janus_client folder at [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc)

```
cd flutter_janus_client & git clone https://github.com/rsupport-mobile1-research/flutter-webrtc.git
```

![Alt text](/images/flutter_setup_guide_1.png "Guide 1")

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
 
![Alt text](/images/flutter_setup_guide_2.png "Guide 2")


</details>

> Reference docs: [Flutter Unity View](https://github.com/juicycleff/flutter-unity-view-widget)
