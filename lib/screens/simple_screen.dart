import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';

///Video call
import 'package:janus_client/janus_client.dart';
import 'package:flutter_webrtc/flutter_webrtc.dart';
import '../janus/Helper.dart';
import '../janus/conf.dart';
import 'package:logging/logging.dart';
import 'package:flutter/foundation.dart';

class SimpleScreen extends StatefulWidget {
  SimpleScreen({Key? key}) : super(key: key);

  @override
  _SimpleScreenState createState() => _SimpleScreenState();
}

class _SimpleScreenState extends State<SimpleScreen>
    with WidgetsBindingObserver {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
  GlobalKey<ScaffoldState>();

  /// Others
  late UnityWidgetController _unityWidgetController;
  double _sliderValue = 0.0;
  String textureId = "";
  Image? exampleImage = null;
  int time = DateTime.now().millisecondsSinceEpoch;

  /// Video call
  late JanusClient j;
  Map<int, RemoteStream> remoteStreams = {};

  late RestJanusTransport rest;
  late WebSocketJanusTransport ws;
  late JanusSession session;
  late JanusVideoRoomPlugin plugin;
  JanusVideoRoomPlugin? remoteHandle;
  late int myId;
  bool front = true;
  int myRoom = 1234;
  Map<int, dynamic> feedStreams = {};
  Map<int?, dynamic> subscriptions = {};
  Map<int, dynamic> feeds = {};
  Map<String, int> subStreams = {};
  Map<int, MediaStream?> mediaStreams = {};

  @override
  void didChangeDependencies() async {
    super.didChangeDependencies();
    initialize();
  }
  initialize() async {
    ws = WebSocketJanusTransport(url: servermap['janus_ws']);
    j = JanusClient(transport: ws, isUnifiedPlan: true, iceServers: [
      RTCIceServer(
          urls: "stun:stun1.l.google.com:19302", username: "", credential: "")
    ]);
    session = await j.createSession();
    plugin = await session.attach<JanusVideoRoomPlugin>();
  }

  subscribeTo(List<Map<String, dynamic>> sources) async {
    if (sources.length == 0) return;
    var streams = (sources)
        .map((e) => PublisherStream(mid: e['mid'], feed: e['feed']))
        .toList();
    if (remoteHandle != null) {
      await remoteHandle?.subscribeToStreams(streams);
      return;
    }
    remoteHandle = await session.attach<JanusVideoRoomPlugin>();
    print(sources);
    var start = await remoteHandle?.joinSubscriber(myRoom, streams: streams);
    remoteHandle?.typedMessages?.listen((event) async {
      Object data = event.event.plugindata?.data;
      if (data is VideoRoomAttachedEvent) {
        print('Attached event');
        data.streams?.forEach((element) {
          if (element.mid != null && element.feedId != null) {
            subStreams[element.mid!] = element.feedId!;
          }
          // to avoid duplicate subscriptions
          if (subscriptions[element.feedId] == null)
            subscriptions[element.feedId] = {};
          subscriptions[element.feedId][element.mid] = true;
        });
        print('substreams');
        print(subStreams);
      }
      if (event.jsep != null) {
        await remoteHandle?.handleRemoteJsep(event.jsep);
        await start!();
      }
    }, onError: (error, trace) {
      if (error is JanusError) {
        print(error.toMap());
      }
    });
    remoteHandle?.remoteTrack?.listen((event) async {
      String mid = event.mid!;
      if (subStreams[mid] != null) {
        int feedId = subStreams[mid]!;
        if (!remoteStreams.containsKey(feedId)) {
          RemoteStream temp = RemoteStream(feedId.toString());
          await temp.init();
          setState(() {
            remoteStreams.putIfAbsent(feedId, () => temp);
          });
        }
        if (event.track != null && event.flowing == true) {
          remoteStreams[feedId]?.video.addTrack(event.track!);
          remoteStreams[feedId]?.videoRenderer.srcObject =
              remoteStreams[feedId]?.video;
          if (kIsWeb) {
            remoteStreams[feedId]?.videoRenderer.muted = false;
          }
        }
      }
    });
    return;
  }

  Future<void> joinRoom() async {
    await plugin.initializeMediaDevices();
    RemoteStream mystr = RemoteStream('0');
    await mystr.init();
    mystr.videoRenderer.srcObject = plugin.webRTCHandle!.localStream;
    setState(() {
      remoteStreams.putIfAbsent(0, () => mystr);
    });
    await plugin.joinPublisher(myRoom, displayName: "Shivansh");
    plugin.typedMessages?.listen((event) async {
      Object data = event.event.plugindata?.data;
      if (data is VideoRoomJoinedEvent) {
        (await plugin.publishMedia(bitrate: 3000000));
        List<Map<String, dynamic>> publisherStreams = [];
        for (Publishers publisher in data.publishers ?? []) {
          for (Streams stream in publisher.streams ?? []) {
            feedStreams[publisher.id!] = {
              "id": publisher.id,
              "display": publisher.display,
              "streams": publisher.streams
            };
            publisherStreams.add({"feed": publisher.id, ...stream.toJson()});
            if (publisher.id != null && stream.mid != null) {
              subStreams[stream.mid!] = publisher.id!;
              print("substreams is:");
              print(subStreams);
            }
          }
        }
        subscribeTo(publisherStreams);
      }
      if (data is VideoRoomNewPublisherEvent) {
        List<Map<String, dynamic>> publisherStreams = [];
        for (Publishers publisher in data.publishers ?? []) {
          feedStreams[publisher.id!] = {
            "id": publisher.id,
            "display": publisher.display,
            "streams": publisher.streams
          };
          for (Streams stream in publisher.streams ?? []) {
            publisherStreams.add({"feed": publisher.id, ...stream.toJson()});
            if (publisher.id != null && stream.mid != null) {
              subStreams[stream.mid!] = publisher.id!;
              print("substreams is:");
              print(subStreams);
            }
          }
        }
        print('got new publishers');
        print(publisherStreams);
        subscribeTo(publisherStreams);
      }
      if (data is VideoRoomLeavingEvent) {
        print('publisher is leaving');
        print(data.leaving);
        unSubscribeStream(data.leaving!);
      }
      if (data is VideoRoomConfigured) {
        print('typed event with jsep' + event.jsep.toString());
        await plugin.handleRemoteJsep(event.jsep);
      }
    }, onError: (error, trace) {
      if (error is JanusError) {
        print(error.toMap());
      }
    });
  }

  Future<void> unSubscribeStream(int id) async {
// Unsubscribe from this publisher
    var feed = this.feedStreams[id];
    if (feed == null) return;
    this.feedStreams.remove(id);
    await remoteStreams[id]?.dispose();
    remoteStreams.remove(id);
    MediaStream? streamRemoved = this.mediaStreams.remove(id);
    streamRemoved?.getTracks().forEach((element) async {
      await element.stop();
    });
    var unsubscribe = {
      "request": "unsubscribe",
      "streams": [
        {feed: id}
      ]
    };
    if (remoteHandle != null)
      await remoteHandle?.send(data: {"message": unsubscribe});
    this.subscriptions.remove(id);
  }

  @override
  void dispose() async {
    super.dispose();
    await remoteHandle?.dispose();
    await plugin.dispose();
    session.dispose();
  }

  callEnd() async {
    await plugin.hangup();
    for (int i = 0; i < feedStreams.keys.length; i++) {
      await unSubscribeStream(feedStreams.keys.elementAt(i));
    }
    remoteStreams.forEach((key, value) async {
      value.dispose();
    });
    setState(() {
      remoteStreams = {};
    });
    subStreams.clear();
    subscriptions.clear();
    await plugin.webRTCHandle!.localStream?.dispose();
    await plugin.dispose();
    await remoteHandle?.dispose();
  }

  @override
  Widget build(BuildContext context) {
    /// Data from Janus client
    List<RemoteStream> items =
    remoteStreams.entries.map((e) => e.value).toList();
    RemoteStream? remoteStream;
    if (items.length > 0) {
      /// Send remoteStream to native plugins
      remoteStream = items[0];
      debugPrint("start video ${remoteStream.videoRenderer.textureId}");

      // RTCVideoView(remoteStream.videoRenderer,
      //     filterQuality: FilterQuality.none,
      //     objectFit:
      //     RTCVideoViewObjectFit.RTCVideoViewObjectFitContain,
      //     mirror: true);
    }
    return Scaffold(
      key: _scaffoldKey,
      appBar: AppBar(
        title: Text('Simple Screen'),
      ),
      body: Card(
          margin: const EdgeInsets.all(0),
          clipBehavior: Clip.antiAlias,
          child: Stack(
            children: [
              Padding(
                  padding: EdgeInsets.only(bottom: 180),
                  child: UnityWidget(
                    onUnityCreated: _onUnityCreated,
                    onUnityMessage: onUnityMessage,
                    onUnitySceneLoaded: onUnitySceneLoaded,
                    useAndroidViewSurface: false,
                  )),
              // (remoteStream != null)
              //     ? Container(
              //         width: 100,
              //         height: 100,
              //         child: Texture(
              //           textureId: remoteStream.videoRenderer.textureId!,
              //           filterQuality: FilterQuality.low,
              //         ))
              //     : Container(width: 60),
              PointerInterceptor(
                child: Positioned(
                  bottom: 10,
                  left: 10,
                  right: 10,
                  child: Card(
                    elevation: 10,
                    child: Padding(
                        padding: EdgeInsets.fromLTRB(10, 0, 10, 0),
                        child: Column(
                          children: <Widget>[
                            Row(children: [
                              Padding(
                                padding: const EdgeInsets.only(top: 0),
                                child: Text("Color:"),
                              ),
                              Expanded(
                                  child: TextButton(
                                      onPressed: () {
                                        setColor("#f44336");
                                      },
                                      style: TextButton.styleFrom(
                                        //backgroundColor: Colors.white, // background
                                        foregroundColor:
                                        Colors.red, // foreground
                                      ),
                                      child: Text('Red',
                                          style: TextStyle(fontSize: 20))),
                                  flex: 1),
                              Expanded(
                                  child: TextButton(
                                      onPressed: () {
                                        setColor("#2196f3");
                                        drawImageByTextureId();
                                      },
                                      style: TextButton.styleFrom(
                                        //backgroundColor: Colors.white, // background
                                        foregroundColor:
                                        Colors.blue, // foreground
                                      ),
                                      child: Text('Blue',
                                          style: TextStyle(fontSize: 20))),
                                  flex: 1),
                              Expanded(
                                  child: TextButton(
                                      onPressed: () {
                                        setColor("#ffeb3b");
                                        // setCameraAction("Stop image");
                                        getCubeTextureId();
                                      },
                                      style: TextButton.styleFrom(
                                        //backgroundColor: Colors.white, // background
                                        foregroundColor:
                                        Colors.yellow, // foreground
                                      ),
                                      child: Text('Yellow',
                                          style: TextStyle(fontSize: 20))),
                                  flex: 1),
                              Expanded(
                                  child: TextButton(
                                      onPressed: () {
                                        setColor("#4caf50");
                                        // setCameraAction("Start image");
                                        // setCameraData();
                                      },
                                      style: TextButton.styleFrom(
                                        //backgroundColor: Colors.white, // background
                                        foregroundColor:
                                        Colors.green, // foreground
                                      ),
                                      child: Text('Green',
                                          style: TextStyle(fontSize: 20))),
                                  flex: 1)
                            ]),
                            Row(children: [
                              Padding(
                                padding: const EdgeInsets.only(top: 0),
                                child: Text("Video call:"),
                              ),
                              Expanded(
                                  child: IconButton(
                                      icon: Icon(
                                        Icons.call,
                                        color: Colors.greenAccent,
                                      ),
                                      onPressed: () async {
                                        await this.joinRoom();
                                      }),
                                  flex: 1),
                              Expanded(
                                  child: IconButton(
                                      icon: Icon(
                                        Icons.call_end,
                                        color: Colors.red,
                                      ),
                                      onPressed: () async {
                                        await callEnd();
                                      }),
                                  flex: 1),
                              Expanded(
                                  child: IconButton(
                                      icon: Icon(
                                        Icons.switch_camera,
                                        color: Colors.yellow,
                                      ),
                                      onPressed: () async {
                                        setState(() {
                                          front = !front;
                                        });
                                        await plugin.switchCamera(
                                            deviceId: await getCameraDeviceId(front));
                                        RemoteStream mystr = RemoteStream('0');
                                        await mystr.init();
                                        mystr.videoRenderer.srcObject =
                                            plugin.webRTCHandle!.localStream;
                                        setState(() {
                                          remoteStreams.remove(0);
                                          remoteStreams[0] = mystr;
                                        });
                                      }),
                                  flex: 1),
                            ]),
                            Row(children: [
                              Padding(
                                padding: const EdgeInsets.only(top: 0),
                                child: Text("Rotation speed:"),
                              ),
                              Slider(
                                onChanged: (value) {
                                  setState(() {
                                    _sliderValue = value;
                                  });
                                  setRotationSpeed(value.toString());
                                },
                                value: _sliderValue,
                                min: 0.0,
                                max: 1.0,
                              )
                            ])
                          ],
                        )),
                  ),
                ),
              )
            ],
          )),
    );
  }

  void setRotationSpeed(String speed) {
    _unityWidgetController.postMessage(
      'Cube',
      'SetRotationSpeed',
      speed,
    );
  }

  void setColor(String color) {
    _unityWidgetController.postMessage(
      'Cube',
      'SetColor',
      color,
    );
  }

  void getCubeTextureId() {
    _unityWidgetController.postMessage(
      'CubeGame',
      'GetTextureId',
      '',
    );
  }

  void drawImageByTextureId() {
    if (textureId.isNotEmpty) {
    }
  }

  void onUnityMessage(message) {
    textureId = message;
    print('Received message from unity: ${message}');
  }

  void onUnitySceneLoaded(SceneLoaded? scene) {
    print('Received scene loaded from unity: ${scene?.name}');
    print('Received scene loaded from unity buildIndex: ${scene?.buildIndex}');
  }

  // Callback that connects the created controller to the unity controller
  void _onUnityCreated(controller) {
    controller.resume();
    this._unityWidgetController = controller;
  }
}