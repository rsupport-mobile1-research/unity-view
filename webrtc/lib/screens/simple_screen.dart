import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:flutter_webrtc/flutter_webrtc.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';

import '../webrtc/call_sample/signaling.dart';
import '../webrtc/utils/screen_select_dialog.dart';

class SimpleScreen extends StatefulWidget {
  final String host;
  const SimpleScreen({Key? key, required this.host}) : super(key: key);

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
  Image? exampleImage;
  int time = DateTime.now().millisecondsSinceEpoch;

  // @override
  // Widget build(BuildContext context) {
  //   return Scaffold(
  //     key: _scaffoldKey,
  //     appBar: AppBar(
  //       title: Text('Simple Screen'),
  //     ),
  //     body:
  //     Card(
  //         margin: const EdgeInsets.all(0),
  //         clipBehavior: Clip.antiAlias,
  //         child: Stack(
  //           children: [
  //             Padding(
  //                 padding: const EdgeInsets.only(bottom: 180),
  //                 child: UnityWidget(
  //                   onUnityCreated: _onUnityCreated,
  //                   onUnityMessage: onUnityMessage,
  //                   onUnitySceneLoaded: onUnitySceneLoaded,
  //                   useAndroidViewSurface: false,
  //                 )),
  //             // (remoteStream != null)
  //             //     ? Container(
  //             //         width: 100,
  //             //         height: 100,
  //             //         child: Texture(
  //             //           textureId: remoteStream.videoRenderer.textureId!,
  //             //           filterQuality: FilterQuality.low,
  //             //         ))
  //             //     : Container(width: 60),
  //             PointerInterceptor(
  //               child: Positioned(
  //                 bottom: 10,
  //                 left: 10,
  //                 right: 10,
  //                 child: Card(
  //                   elevation: 10,
  //                   child: Padding(
  //                       padding: const EdgeInsets.fromLTRB(10, 0, 10, 0),
  //                       child: Column(
  //                         children: <Widget>[
  //                           Row(children: [
  //                             const Padding(
  //                               padding: EdgeInsets.only(top: 0),
  //                               child: Text("Color:"),
  //                             ),
  //                             Expanded(
  //                                 flex: 1,
  //                                 child: TextButton(
  //                                     onPressed: () {
  //                                       setColor("#f44336");
  //                                     },
  //                                     style: TextButton.styleFrom(
  //                                       //backgroundColor: Colors.white, // background
  //                                       foregroundColor:
  //                                       Colors.red, // foreground
  //                                     ),
  //                                     child: const Text('Red',
  //                                         style: TextStyle(fontSize: 20)))),
  //                             Expanded(
  //                                 flex: 1,
  //                                 child: TextButton(
  //                                     onPressed: () {
  //                                       setColor("#2196f3");
  //                                       drawImageByTextureId();
  //                                     },
  //                                     style: TextButton.styleFrom(
  //                                       //backgroundColor: Colors.white, // background
  //                                       foregroundColor:
  //                                       Colors.blue, // foreground
  //                                     ),
  //                                     child: const Text('Blue',
  //                                         style: TextStyle(fontSize: 20)))),
  //                             Expanded(
  //                                 flex: 1,
  //                                 child: TextButton(
  //                                     onPressed: () {
  //                                       setColor("#ffeb3b");
  //                                       // setCameraAction("Stop image");
  //                                       getCubeTextureId();
  //                                     },
  //                                     style: TextButton.styleFrom(
  //                                       //backgroundColor: Colors.white, // background
  //                                       foregroundColor:
  //                                       Colors.yellow, // foreground
  //                                     ),
  //                                     child: const Text('Yellow',
  //                                         style: TextStyle(fontSize: 20)))),
  //                             Expanded(
  //                                 flex: 1,
  //                                 child: TextButton(
  //                                     onPressed: () {
  //                                       setColor("#4caf50");
  //                                       // setCameraAction("Start image");
  //                                       // setCameraData();
  //                                     },
  //                                     style: TextButton.styleFrom(
  //                                       //backgroundColor: Colors.white, // background
  //                                       foregroundColor:
  //                                       Colors.green, // foreground
  //                                     ),
  //                                     child: const Text('Green',
  //                                         style: TextStyle(fontSize: 20))))
  //                           ]),
  //                           Row(children: [
  //                             const Padding(
  //                               padding: EdgeInsets.only(top: 0),
  //                               child: Text("Rotation speed:"),
  //                             ),
  //                             Slider(
  //                               onChanged: (value) {
  //                                 setState(() {
  //                                   _sliderValue = value;
  //                                 });
  //                                 setRotationSpeed(value.toString());
  //                               },
  //                               value: _sliderValue,
  //                               min: 0.0,
  //                               max: 1.0,
  //                             )
  //                           ])
  //                         ],
  //                       )),
  //                 ),
  //               ),
  //             )
  //           ],
  //         )),
  //   );
  // }

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
    debugPrint('Received message from unity: $message');
  }

  void onUnitySceneLoaded(SceneLoaded? scene) {
    debugPrint('Received scene loaded from unity: ${scene?.name}');
    debugPrint('Received scene loaded from unity buildIndex: ${scene?.buildIndex}');
  }

  // Callback that connects the created controller to the unity controller
  void _onUnityCreated(controller) {
    controller.resume();
    _unityWidgetController = controller;
  }

  Signaling? _signaling;
  List<dynamic> _peers = [];
  String? _selfId;
  RTCVideoRenderer _localRenderer = RTCVideoRenderer();
  RTCVideoRenderer _remoteRenderer = RTCVideoRenderer();
  bool _inCalling = false;
  Session? _session;
  DesktopCapturerSource? selected_source_;
  bool _waitAccept = false;

  // ignore: unused_element
  _SimpleScreenState();

  @override
  initState() {
    super.initState();
    initRenderers();
    _connect(context);
  }

  initRenderers() async {
    await _localRenderer.initialize();
    await _remoteRenderer.initialize();
  }

  @override
  deactivate() {
    super.deactivate();
    _signaling?.close();
    _localRenderer.dispose();
    _remoteRenderer.dispose();
  }

  void _connect(BuildContext context) async {
    _signaling ??= Signaling(widget.host, context)..connect();
    _signaling?.onSignalingStateChange = (SignalingState state) {
      switch (state) {
        case SignalingState.ConnectionClosed:
        case SignalingState.ConnectionError:
        case SignalingState.ConnectionOpen:
          break;
      }
    };

    _signaling?.onCallStateChange = (Session session, CallState state) async {
      switch (state) {
        case CallState.CallStateNew:
          setState(() {
            _session = session;
          });
          break;
        case CallState.CallStateRinging:
          bool? accept = await _showAcceptDialog();
          if (accept!) {
            _accept();
            setState(() {
              _inCalling = true;
            });
          } else {
            _reject();
          }
          break;
        case CallState.CallStateBye:
          if (_waitAccept) {
            print('peer reject');
            _waitAccept = false;
            Navigator.of(context).pop(false);
          }
          setState(() {
            _localRenderer.srcObject = null;
            _remoteRenderer.srcObject = null;
            _inCalling = false;
            _session = null;
          });
          break;
        case CallState.CallStateInvite:
          _waitAccept = true;
          _showInvateDialog();
          break;
        case CallState.CallStateConnected:
          if (_waitAccept) {
            _waitAccept = false;
            Navigator.of(context).pop(false);
          }
          setState(() {
            _inCalling = true;
          });

          break;
        case CallState.CallStateRinging:
      }
    };

    _signaling?.onPeersUpdate = ((event) {
      setState(() {
        _selfId = event['self'];
        _peers = event['peers'];
      });
    });

    _signaling?.onLocalStream = ((stream) {
      _localRenderer.srcObject = stream;
      setState(() {});
    });

    _signaling?.onAddRemoteStream = ((_, stream) {
      _remoteRenderer.srcObject = stream;
      setState(() {});
    });

    _signaling?.onRemoveRemoteStream = ((_, stream) {
      _remoteRenderer.srcObject = null;
    });
  }

  Future<bool?> _showAcceptDialog() {
    return showDialog<bool?>(
      context: context,
      builder: (context) {
        return AlertDialog(
          title: Text("title"),
          content: Text("accept?"),
          actions: <Widget>[
            MaterialButton(
              child: Text(
                'Reject',
                style: TextStyle(color: Colors.red),
              ),
              onPressed: () => Navigator.of(context).pop(false),
            ),
            MaterialButton(
              child: Text(
                'Accept',
                style: TextStyle(color: Colors.green),
              ),
              onPressed: () => Navigator.of(context).pop(true),
            ),
          ],
        );
      },
    );
  }

  Future<bool?> _showInvateDialog() {
    return showDialog<bool?>(
      context: context,
      builder: (context) {
        return AlertDialog(
          title: Text("title"),
          content: Text("waiting"),
          actions: <Widget>[
            TextButton(
              child: Text("cancel"),
              onPressed: () {
                Navigator.of(context).pop(false);
                _hangUp();
              },
            ),
          ],
        );
      },
    );
  }

  _invitePeer(BuildContext context, String peerId, bool useScreen) async {
    if (_signaling != null && peerId != _selfId) {
      _signaling?.invite(peerId, 'video', useScreen);
    }
  }

  _accept() {
    if (_session != null) {
      _signaling?.accept(_session!.sid);
    }
  }

  _reject() {
    if (_session != null) {
      _signaling?.reject(_session!.sid);
    }
  }

  _hangUp() {
    if (_session != null) {
      _signaling?.bye(_session!.sid);
    }
  }

  _switchCamera() {
    _signaling?.switchCamera();
  }

  Future<void> selectScreenSourceDialog(BuildContext context) async {
    MediaStream? screenStream;
    if (WebRTC.platformIsDesktop) {
      final source = await showDialog<DesktopCapturerSource>(
        context: context,
        builder: (context) => ScreenSelectDialog(),
      );
      if (source != null) {
        try {
          var stream =
          await navigator.mediaDevices.getDisplayMedia(<String, dynamic>{
            'video': {
              'deviceId': {'exact': source.id},
              'mandatory': {'frameRate': 30.0}
            }
          });
          stream.getVideoTracks()[0].onEnded = () {
            print(
                'By adding a listener on onEnded you can: 1) catch stop video sharing on Web');
          };
          screenStream = stream;
        } catch (e) {
          print(e);
        }
      }
    } else if (WebRTC.platformIsWeb) {
      screenStream =
      await navigator.mediaDevices.getDisplayMedia(<String, dynamic>{
        'audio': false,
        'video': true,
      });
    }
    if (screenStream != null) _signaling?.switchToScreenSharing(screenStream);
  }

  _muteMic() {
    _signaling?.muteMic();
  }

  _buildRow(context, peer) {
    var self = (peer['id'] == _selfId);
    return ListBody(children: <Widget>[
      ListTile(
        title: Text(self
            ? peer['name'] + ', ID: ${peer['id']} ' + ' [Your self]'
            : peer['name'] + ', ID: ${peer['id']} '),
        onTap: null,
        trailing: SizedBox(
            width: 100.0,
            child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                children: <Widget>[
                  IconButton(
                    icon: Icon(self ? Icons.close : Icons.videocam,
                        color: self ? Colors.grey : Colors.black),
                    onPressed: () => _invitePeer(context, peer['id'], false),
                    tooltip: 'Video calling',
                  ),
                  IconButton(
                    icon: Icon(self ? Icons.close : Icons.screen_share,
                        color: self ? Colors.grey : Colors.black),
                    onPressed: () => _invitePeer(context, peer['id'], true),
                    tooltip: 'Screen sharing',
                  )
                ])),
        subtitle: Text('[' + peer['user_agent'] + ']'),
      ),
      Divider()
    ]);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('P2P Call Sample' +
            (_selfId != null ? ' [Your ID ($_selfId)] ' : '')),
        actions: <Widget>[
          IconButton(
            icon: const Icon(Icons.settings),
            onPressed: null,
            tooltip: 'setup',
          ),
        ],
      ),
      floatingActionButtonLocation: FloatingActionButtonLocation.centerFloat,
      // floatingActionButton:
      // _inCalling
      //     ? SizedBox(
      //     width: 240.0,
      //     child: Row(
      //         mainAxisAlignment: MainAxisAlignment.spaceBetween,
      //         children: <Widget>[
      //           FloatingActionButton(
      //             child: const Icon(Icons.switch_camera),
      //             tooltip: 'Camera',
      //             onPressed: _switchCamera,
      //           ),
      //           FloatingActionButton(
      //             child: const Icon(Icons.desktop_mac),
      //             tooltip: 'Screen Sharing',
      //             onPressed: () => selectScreenSourceDialog(context),
      //           ),
      //           FloatingActionButton(
      //             onPressed: _hangUp,
      //             tooltip: 'Hangup',
      //             child: Icon(Icons.call_end),
      //             backgroundColor: Colors.pink,
      //           ),
      //           FloatingActionButton(
      //             child: const Icon(Icons.mic_off),
      //             tooltip: 'Mute Mic',
      //             onPressed: _muteMic,
      //           )
      //         ]))
      //     : null,
      body: Stack(children: [
        Card(
            margin: const EdgeInsets.all(0),
            clipBehavior: Clip.antiAlias,
            child: Stack(
              children: [
                Padding(
                    padding: const EdgeInsets.only(bottom: 180),
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
                          padding: const EdgeInsets.fromLTRB(10, 0, 10, 0),
                          child: Column(
                            children: <Widget>[
                              Row(children: [
                                const Padding(
                                  padding: EdgeInsets.only(top: 0),
                                  child: Text("Color:"),
                                ),
                                Expanded(
                                    flex: 1,
                                    child: TextButton(
                                        onPressed: () {
                                          setColor("#f44336");
                                        },
                                        style: TextButton.styleFrom(
                                          //backgroundColor: Colors.white, // background
                                          foregroundColor:
                                          Colors.red, // foreground
                                        ),
                                        child: const Text('Red',
                                            style: TextStyle(fontSize: 20)))),
                                Expanded(
                                    flex: 1,
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
                                        child: const Text('Blue',
                                            style: TextStyle(fontSize: 20)))),
                                Expanded(
                                    flex: 1,
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
                                        child: const Text('Yellow',
                                            style: TextStyle(fontSize: 20)))),
                                Expanded(
                                    flex: 1,
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
                                        child: const Text('Green',
                                            style: TextStyle(fontSize: 20))))
                              ]),
                              Row(children: [
                                const Padding(
                                  padding: EdgeInsets.only(top: 0),
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
                              ]),
                              !_inCalling
                                  ?
                              // OrientationBuilder(builder: (context, orientation) {
                              // return Container(
                              //   child: Stack(children: <Widget>[
                              //     Positioned(
                              //         left: 0.0,
                              //         right: 0.0,
                              //         top: 0.0,
                              //         bottom: 0.0,
                              //         child: Container(
                              //           margin: EdgeInsets.fromLTRB(0.0, 0.0, 0.0, 0.0),
                              //           width: MediaQuery.of(context).size.width,
                              //           height: MediaQuery.of(context).size.height,
                              //           child: RTCVideoView(_remoteRenderer),
                              //           decoration: BoxDecoration(color: Colors.black54),
                              //         )),
                              //     Positioned(
                              //       left: 20.0,
                              //       top: 20.0,
                              //       child: Container(
                              //         width: orientation == Orientation.portrait ? 90.0 : 120.0,
                              //         height:
                              //         orientation == Orientation.portrait ? 120.0 : 90.0,
                              //         child: RTCVideoView(_localRenderer, mirror: true),
                              //         decoration: BoxDecoration(color: Colors.black54),
                              //       ),
                              //     ),
                              //   ]),
                              // );
                              // })
                              ListView.builder(
                                  shrinkWrap: true,
                                  padding: const EdgeInsets.all(0.0),
                                  itemCount: (_peers != null ? _peers.length : 0),
                                  itemBuilder: (context, i) {
                                    return _buildRow(context, _peers[i]);
                                  }) : Container()
                            ],
                          )),
                    ),
                  ),
                )
              ],
            )),
      ]),
    );
  }
}