# Rsupport app

Setup flutter app to display video call on Unity view

# Clone source code

<details>
 <summary>:information_source: <b>WebRTC</b></summary>

Clone main source code at [Main repo](https://github.com/rsupport-mobile1-research/unity-view)
```
git clone https://github.com/rsupport-mobile1-research/unity-view.git
```

For this example all the source code in webrtc folder. In next step, we need to clone webrtc source code into webrtc folder at [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc)
```
cd unity-view
cd webrtc
git clone https://github.com/rsupport-mobile1-research/flutter-webrtc.git
```

![Alt text](/images/flutter_setup_guide_6.png "Guide 1")

</details>

<details>
 <summary>:information_source: <b>Janus client</b></summary>

Clone main source code at [Main repo](https://github.com/rsupport-mobile1-research/unity-view)
```
git clone https://github.com/rsupport-mobile1-research/unity-view.git
```

Move to unity-view folder and clone janus client source code into unity-view folder at [Janus client lib](https://github.com/rsupport-mobile1-research/flutter_janus_client) and then move to flutter_janus_client to switch source branch **stable_v2_dev** branch
```
cd unity-view
git clone https://github.com/rsupport-mobile1-research/flutter_janus_client.git
cd flutter_janus_client
git checkout stable_v2_dev
```

Clone webrtc source code into flutter_janus_client folder at [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc)

```
git clone https://github.com/rsupport-mobile1-research/flutter-webrtc.git
```

![Alt text](/images/flutter_setup_guide_1.png "Guide 1")

</details>

<details>
 <summary>:information_source: <b>MediaSoup</b></summary>

Clone main source code at [Main repo](https://github.com/rsupport-mobile1-research/unity-view)
```
git clone https://github.com/rsupport-mobile1-research/unity-view.git
```

For this example all the source code in mediasoup folder. In next step, we need to clone mediasoup-client-flutter source code into mediasoup folder at [Mediasoup client lib](https://github.com/rsupport-mobile1-research/mediasoup-client-flutter)
```
cd unity-view
cd mediasoup
git clone https://github.com/rsupport-mobile1-research/mediasoup-client-flutter.git
cd mediasoup-client-flutter
```

Clone webrtc source code into mediasoup-client-flutter folder at [WebRTC lib](https://github.com/rsupport-mobile1-research/flutter-webrtc)

```
git clone https://github.com/rsupport-mobile1-research/flutter-webrtc.git
```

![Alt text](/images/flutter_setup_guide_7.png "Guide 1")
</details>

# Launch the demo

<b>Android</b>
Start an android device to build the app.

Build androidlibrary from Unity
- [Install Unity](https://unity.com/download)

Open source code Unity 
- in **webrtc/unity/DemoApp** for Janus client
- in **unity/DemoApp** for Janus client
- in **mediasoup/unity/DemoApp** for Janus client

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

<details>
 <summary>:information_source: <b>WebRTC</b></summary>

> For mobile, you need to check your IP address to input to the demo. For mac we can go to Setting -> Open details of connected wifi and copy IP address. Example: 192.168.165.51

Run server
Move to server folder at webrtc/server.

Use mkcert to create a self-signed certificate.
```
brew update
brew install mkcert
mkcert -key-file configs/certs/key.pem -cert-file configs/certs/cert.pem  localhost 127.0.0.1 ::1 0.0.0.0
```

Run
```
brew install golang
go run cmd/server/main.go
``` 

> In case, you already setup golang & mkcert. Just need to move to server folder and run cmd

```
go run cmd/server/main.go
```

Open https://0.0.0.0:8086 to use flutter web demo.
> On popup input address of web demo, just need to input localhost to run
</details>
<details>
 <summary>:information_source: <b>Janus Client</b></summary>

Build app on 2 devices to test

</details>
<details>
 <summary>:information_source: <b>MediaSoup</b></summary>
</details>

Build app on 2 devices to test

<b>iOS</b>

<details>
 <summary>:information_source: <b>WebRTC</b></summary>
</details>
<details>
 <summary>:information_source: <b>Janus Client</b></summary>
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
<details>
 <summary>:information_source: <b>MediaSoup</b></summary>
</details>

# Reference docs

. [Flutter Unity View](https://github.com/juicycleff/flutter-unity-view-widget)
