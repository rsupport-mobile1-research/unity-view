import 'dart:typed_data';

import 'package:flutter/services.dart';
import 'package:image/image.dart' as imglib;
import 'package:camera/camera.dart';
import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';
import 'package:rsupport_open_gl/rsupport_open_gl.dart';

List<CameraDescription> cameras = [];

class SimpleScreen extends StatefulWidget {
  SimpleScreen({Key? key}) : super(key: key);

  @override
  _SimpleScreenState createState() => _SimpleScreenState();
}

class _SimpleScreenState extends State<SimpleScreen>
    with WidgetsBindingObserver {
  static final GlobalKey<ScaffoldState> _scaffoldKey =
      GlobalKey<ScaffoldState>();

  final _rsupportOpenGlPlugin = RsupportOpenGl();

  /// For camera
  late CameraController cameraController;

  /// Others

  late UnityWidgetController _unityWidgetController;
  double _sliderValue = 0.0;
  String textureId = "";
  Image? exampleImage = null;
  int time = DateTime.now().millisecondsSinceEpoch;

  @override
  void initState() {
    /// For camera
    super.initState();
    cameraController = CameraController(cameras[0], ResolutionPreset.low);
    cameraController.initialize().then((_) {
      // cameraController.startImageStream((image) async {
      //   if (DateTime.now().millisecondsSinceEpoch - time > 500) {
      //     time = DateTime.now().millisecondsSinceEpoch;
      //     print("${image.width} ${image.height}");
      //     // exampleImage = await convertYUV420toImageColor(image);
      //     // setState(() {});
      //   }
      // });
      // if (!mounted) {
      //   return;
      // }
      // setState(() {});
    }).catchError((Object e) {
      if (e is CameraException) {
        switch (e.code) {
          case 'CameraAccessDenied':
            print('User denied camera access.');
            break;
          default:
            print('Handle other errors.');
            break;
        }
      }
    });
  }

  Future<Image?> convertYUV420toImageColor(CameraImage image) async {
    try {
      final int width = image.width;
      final int height = image.height;
      final int uvRowStride = image.planes[1].bytesPerRow;
      final int? uvPixelStride = image.planes[1].bytesPerPixel;

      print("uvRowStride: " + uvRowStride.toString());
      print("uvPixelStride: " + uvPixelStride.toString());

      // imgLib -> Image package from https://pub.dartlang.org/packages/image
      var img = imglib.Image(width, height); // Create Image buffer

      // Fill image buffer with plane[0] from YUV420_888
      for(int x=0; x < width; x++) {
        for(int y=0; y < height; y++) {
          final int uvIndex = uvPixelStride! * (x/2).floor() + uvRowStride*(y/2).floor();
          final int index = y * width + x;

          final yp = image.planes[0].bytes[index];
          final up = image.planes[1].bytes[uvIndex];
          final vp = image.planes[2].bytes[uvIndex];
          // Calculate pixel color
          int r = (yp + vp * 1436 / 1024 - 179).round().clamp(0, 255);
          int g = (yp - up * 46549 / 131072 + 44 -vp * 93604 / 131072 + 91).round().clamp(0, 255);
          int b = (yp + up * 1814 / 1024 - 227).round().clamp(0, 255);
          // color: 0x FF  FF  FF  FF
          //           A   B   G   R
          img.data[index] = (0xFF << 24) | (b << 16) | (g << 8) | r;
        }
      }

      imglib.PngEncoder pngEncoder = new imglib.PngEncoder(level: 0, filter: 0);
      List<int> png = pngEncoder.encodeImage(img);
      // muteYUVProcessing = false;
      return Image.memory(Uint8List.fromList(png));
    } catch (e) {
      print(">>>>>>>>>>>> ERROR:" + e.toString());
    }
    return null;
  }

  @override
  void dispose() {
    /// For camera
    cameraController.dispose();
    _unityWidgetController.dispose();
    super.dispose();
  }

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
                  padding: EdgeInsets.only(bottom: 180),
                  child: UnityWidget(
                    onUnityCreated: _onUnityCreated,
                    onUnityMessage: onUnityMessage,
                    onUnitySceneLoaded: onUnitySceneLoaded,
                    useAndroidViewSurface: false,
                  )),
              PointerInterceptor(
                child: Positioned(
                  bottom: 0,
                  left: 0,
                  right: 0,
                  child: Card(
                    elevation: 10,
                    child: Column(
                      children: <Widget>[
                        Padding(
                          padding: const EdgeInsets.only(top: 20),
                          child: Text("Color:"),
                        ),
                        Row(children: [
                          Expanded(
                              child: TextButton(
                                  onPressed: () {
                                    setColor("#f44336");
                                  },
                                  style: TextButton.styleFrom(
                                    //backgroundColor: Colors.white, // background
                                    foregroundColor: Colors.red, // foreground
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
                                    foregroundColor: Colors.blue, // foreground
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
                                    foregroundColor: Colors.green, // foreground
                                  ),
                                  child: Text('Green',
                                      style: TextStyle(fontSize: 20))),
                              flex: 1)
                        ]),
                        // Container(
                        //     width: 200,
                        //     height: 200,
                        //     child: (cameraController != null)
                        //         ? CameraPreview(cameraController)
                        //         : Container()),

                        // (exampleImage != null) ? Container(width: 200, height: 200, child: exampleImage) : Container(),
                        Padding(
                          padding: const EdgeInsets.only(top: 20),
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
                        ),
                      ],
                    ),
                  ),
                ),
              ),
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

  // void setCameraData() {
  //   Map<String, dynamic> data = Map();
  //   data['imageData'] = Uint8List.fromList([
  //     0x30, 0x32, 0x32, 0x32, 0xe7, 0x30, 0xaa, 0x7f, 0x32, 0x32, 0x32, 0x32, 0xf9, 0x40, 0xbc, 0x7f, 0x03, 0x03, 0x03, 0x03, 0xf6, 0x30, 0x02, 0x05, 0x03, 0x03, 0x03, 0x03, 0xf4, 0x30, 0x03, 0x06,
  //     0x32, 0x32, 0x32, 0x32, 0xf7, 0x40, 0xaa, 0x7f, 0x32, 0xf2, 0x02, 0xa8, 0xe7, 0x30, 0xff, 0xff, 0x03, 0x03, 0x03, 0xff, 0xe6, 0x40, 0x00, 0x0f, 0x00, 0xff, 0x00, 0xaa, 0xe9, 0x40, 0x9f, 0xff, 0x5b, 0x03, 0x03, 0x03, 0xca, 0x6a, 0x0f, 0x30, 0x03, 0x03, 0x03, 0xff, 0xca, 0x68, 0x0f, 0x30, 0xaa, 0x94, 0x90, 0x40, 0xba, 0x5b, 0xaf, 0x68, 0x40, 0x00, 0x00, 0xff, 0xca, 0x58, 0x0f, 0x20, 0x00, 0x00, 0x00, 0xff, 0xe6, 0x40, 0x01, 0x2c, 0x00, 0xff, 0x00, 0xaa, 0xdb, 0x41, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe8, 0x40, 0x01, 0x1c, 0x00, 0xff, 0x00, 0xaa, 0xbb, 0x40, 0xff, 0xff,
  //   ]);
  //   _unityWidgetController.postJsonMessage(
  //     'CubeGame',
  //     'SetCameraData',
  //     data,
  //   );
  // }
  //
  // void setCameraAction(String action) {
  //   _unityWidgetController.postMessage(
  //     'CubeGame',
  //     'SetCameraAction',
  //     action,
  //   );
  // }

  void getCubeTextureId() {
    _unityWidgetController.postMessage(
      'CubeGame',
      'GetTextureId',
      '',
    );
  }

  void drawImageByTextureId() {
    if (textureId.isNotEmpty) {
      _rsupportOpenGlPlugin.testOpengl(textureId);
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
