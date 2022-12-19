
import 'dart:typed_data';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';
import 'package:unity_view_test/utilities/Helper.dart';
import 'package:unity_view_test/utilities/conf.dart';
import 'package:unity_view_test/utilities/flutter_janus_client/lib/janus_client.dart';
import 'package:unity_view_test/utilities/flutter_janus_client/lib/method_platform/rsupport_draw.dart';
import 'opengl_texture.dart';
import 'package:flutter/foundation.dart';


void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: const MyHomePage(title: 'Flutter Demo Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  final String title;


  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  late UnityWidgetController _unityWidgetController;
  int myid  = 0;
  bool isInit = false;
  final _controller =  OpenGLTextureController();
  final janusDrawController = RsupportDraw();
  final _width = 200.0;
  final _height = 200.0;
  bool front = true;
  dynamic myRoom = 1234;
  Map<dynamic, dynamic> feedStreams = {};
  Map<dynamic, dynamic> subscriptions = {};
  Map<dynamic, dynamic> subStreams = {};
  late JanusClient j;
  Map<dynamic, dynamic> remoteStreams = {};
  Map<dynamic, dynamic> mediaStreams = {};
  List<SubscriberUpdateStream> subscribeStreams = [];
  List<SubscriberUpdateStream> unSubscribeStreams = [];
  late RestJanusTransport rest;
  late WebSocketJanusTransport ws;
  late JanusSession session;
  late JanusVideoRoomPlugin plugin;
  JanusVideoRoomPlugin? remoteHandle;



@override
  void initState() {
    // TODO: implement initState
    super.initState();

  }

  @override
  void didChangeDependencies() async {
    super.didChangeDependencies();
    initialize();
  }

  initialize() async {
    ws = WebSocketJanusTransport(url: servermap['servercheap']);
    j = JanusClient(
        transport: ws,
        isUnifiedPlan: true,
        iceServers: [
          RTCIceServer(
              urls: "stun:stun1.l.google.com:19302",
              username: "",
              credential: "")
        ]);
    session = await j.createSession();
  }
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body:Builder(
        builder: (BuildContext context) {

          return Stack(
            children: [
              Padding(
                padding: const EdgeInsets.fromLTRB(0, 0, 0, 0),
                child: UnityWidget(
                  onUnityCreated: _onUnityCreated,
                  onUnityMessage: onUnityMessage,
                  onUnitySceneLoaded: onUnitySceneLoaded,
                  useAndroidViewSurface: false,
                  borderRadius: const BorderRadius.all(Radius.circular(70)),
                ),
              ),
              PointerInterceptor(
                  child: Positioned(
                    bottom: 20,
                    left: 20,
                    right: 20,
                    child: Card(
                      elevation: 10,
                      child: Padding(
                        padding:const EdgeInsets.fromLTRB(10, 0, 10, 0),
                        child: Column(

                          children: [
                            Row(
                              children: [
                                Expanded(
                                    flex: 1,
                                    child: TextButton(
                                        onPressed: () {
                                          joinRoom();
                                          // setCameraAction("Stop image");
                                         // getCubeTextureId();
                                        },
                                        style: TextButton.styleFrom(
                                          backgroundColor: Colors.red, // background
                                          foregroundColor:
                                          Colors.green,
                                          // foreground
                                        ),
                                        child: const Text('Call',
                                            style: TextStyle(fontSize: 20)))),
                                const SizedBox(width: 10),
                                Expanded(
                                    flex: 1,
                                    child: TextButton(
                                        onPressed: () {

                                          // setCameraAction("Stop image");
                                          // getCubeTextureId();
                                        },
                                        style: TextButton.styleFrom(
                                          //backgroundColor: Colors.white, // background
                                          foregroundColor:
                                          Colors.red, // foreground
                                        ),
                                        child: const Text('End Call',
                                            style: TextStyle(fontSize: 20)))),
                              ],
                            )
                          ],
                        ),
                      ),
                    ),
                  ),
              )
            ],
          );
        },
      )

    ); // This trailing comma makes auto-formatting nicer for build methods.

  }



  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
    myid = int.parse(message);

    // initializeController(myid);
    setState(()  {

    });

  }

  void onUnitySceneLoaded(SceneLoaded? scene) {
    print('Received scene loaded from unity: ${scene?.name}');
    print('Received scene loaded from unity buildIndex: ${scene?.buildIndex}');
  }

  // Callback that connects the created controller to the unity controller
  void _onUnityCreated(controller) {
    controller.resume();
    _unityWidgetController = controller;
    janusDrawController.testJanusSever(myid.toString());
  }

  void setRotationSpeed(Uint8List speed) {

    // _unityWidgetController.postMessage(
    //   'Cube',
    //   'SetImage',
    //   speed,
    // );
  }

  Future<void> initializeController(int textureID) async {
    await _controller.initialize(_width, _height,textureID);
    setState(() {});
  }


  subscribeTo(List<Map<dynamic, dynamic>> sources) async {
    if (sources.length == 0) return;
    var streams = (sources)
        .map((e) => PublisherStream(mid: e['mid'], feed: e['feed']))
        .toList();
    if (remoteHandle != null) {
      await remoteHandle?.update(
          subscribe: subscribeStreams, unsubscribe: unSubscribeStreams);
      subscribeStreams = [];
      unSubscribeStreams = [];
      return;
    }
    remoteHandle = await session.attach<JanusVideoRoomPlugin>();
    remoteHandle?.initDataChannel();
    remoteHandle?.data?.listen((event) {
      print('subscriber data:=>');
      print(event.text);
    });
    remoteHandle?.webRTCHandle?.peerConnection?.onRenegotiationNeeded =
        () async {
      await remoteHandle?.start(myRoom);
    };
    await remoteHandle?.joinSubscriber(myRoom, streams: streams);
    remoteHandle?.typedMessages?.listen((event) async {
      Object data = event.event.plugindata?.data;

      if (data is VideoRoomAttachedEvent) {
        data.streams?.forEach((element) {
          if (element.mid != null && element.feedId != null) {
            subStreams[element.mid!] = element.feedId!;
          }
          // to avoid duplicate subscriptions
          if (subscriptions[element.feedId] == null)
            subscriptions[element.feedId] = {};
          subscriptions[element.feedId][element.mid] = true;
        });
      }
      if (event.jsep != null) {
        await remoteHandle?.handleRemoteJsep(event.jsep);
        await remoteHandle?.start(myRoom);
      }
    }, onError: (error, trace) {
      print('error');
      print(error.toString());
      if (error is JanusError) {
        print(error.toMap());
      }
    });
    remoteHandle?.remoteTrack?.listen((event) async {
      String mid = event.mid!;
      if (subStreams[mid] != null) {
        dynamic feedId = subStreams[mid]!;
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
    plugin = await session.attach<JanusVideoRoomPlugin>();
    await plugin.initDataChannel();
    plugin.data?.listen((event) {
      print('subscriber data:=>');
      print(event.text);
    });
    await plugin.initializeMediaDevices(
        mediaConstraints: {'video': true, 'audio': false});
    RemoteStream myStream = RemoteStream('0');
    await myStream.init();
    myStream.videoRenderer.srcObject = plugin.webRTCHandle!.localStream;
    setState(() {
      remoteStreams.putIfAbsent(0, () => myStream);
    });
    await plugin.joinPublisher(myRoom, displayName: "Shivansh");
    plugin.webRTCHandle?.peerConnection?.onRenegotiationNeeded = () async {
      var offer = await plugin.createOffer(
          audioRecv: false, audioSend: true, videoRecv: false, videoSend: true);
      await plugin.configure(sessionDescription: offer);
    };
    plugin.typedMessages?.listen((event) async {
      Object data = event.event.plugindata?.data;
      if (data is VideoRoomJoinedEvent) {
        (await plugin.publishMedia(bitrate: 3000000));
        List<Map<dynamic, dynamic>> publisherStreams = [];
        for (Publishers publisher in data.publishers ?? []) {
          feedStreams[publisher.id!] = {
            "id": publisher.id,
            "display": publisher.display,
            "streams": publisher.streams
          };
          for (Streams stream in publisher.streams ?? []) {
            publisherStreams.add({"feed": publisher.id, ...stream.toMap()});
            if (publisher.id != null && stream.mid != null) {
              subStreams[stream.mid!] = publisher.id!;
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
            publisherStreams.add({"feed": publisher.id, ...stream.toMap()});
            if (publisher.id != null && stream.mid != null) {
              subStreams[stream.mid!] = publisher.id!;
            }
            subscribeStreams.add(SubscriberUpdateStream(
                feed: publisher.id, mid: stream.mid, crossrefid: null));
          }
        }
        subscribeTo(publisherStreams);
      }
      if (data is VideoRoomLeavingEvent) {
      //  unSubscribeStream(data.leaving!);
      }
      // if (data is VideoRoomConfigured) {}
      plugin.handleRemoteJsep(event.jsep);
    }, onError: (error, trace) {
      if (error is JanusError) {
        print(error.toMap());
      }
    });
  }
}
