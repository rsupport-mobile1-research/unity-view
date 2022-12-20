

import 'package:flutter/cupertino.dart';
import 'package:flutter/services.dart';
import 'package:janus_client/method_platform/rsupport_ios_draw_platfrom_interface.dart';

class RsupportiOSDrawMethodChangel extends RsupportiOSDrawPlatform{

  @visibleForTesting
  final methodChannel = const MethodChannel('rsupport_draw');

  @override
  void drawDataFromTexture(String unityTextureId) async {
      methodChannel.invokeMethod('draw_camera',{
        'textureId':unityTextureId
      });
  }


  @override
  void testJanusSever(janusTextureId) async {
    methodChannel.invokeMethod('data_janus_server',{
      'textureId':janusTextureId
    });
  }
}