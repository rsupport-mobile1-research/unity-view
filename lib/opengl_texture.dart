import 'dart:async';

import 'package:flutter/services.dart';

class OpenGLTextureController {
  static const MethodChannel _channel =  MethodChannel('com.rsupport.unityViewTest/opengl_texture');

  int textureId = 0;

  Future<bool> initialize(double width, double height, int textureId) async {
    textureId = await _channel.invokeMethod('create', {
      'width': width,
      'height': height,
      'textureID':textureId,
    });
    return true;
  }

  Future<Null> dispose() =>
      _channel.invokeMethod('dispose', {'textureId': textureId});

  bool get isInitialized => textureId != null;
}
