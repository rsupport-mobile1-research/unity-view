import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';

class SimpleScreen extends StatefulWidget {
  const SimpleScreen({Key? key}) : super(key: key);

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

  @override
  Widget build(BuildContext context) {
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
}