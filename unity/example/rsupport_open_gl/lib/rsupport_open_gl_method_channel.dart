import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'rsupport_open_gl_platform_interface.dart';

/// An implementation of [RsupportOpenGlPlatform] that uses method channels.
class MethodChannelRsupportOpenGl extends RsupportOpenGlPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('rsupport_open_gl');

  @override
  void testOpengl(String unityTextureId) async {
    methodChannel.invokeMethod<String>('testOpengl', {
      'textureId': unityTextureId,
    });
  }
}
