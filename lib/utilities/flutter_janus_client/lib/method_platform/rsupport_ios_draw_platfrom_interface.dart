
import 'package:janus_client/method_platform/rsupport_ios_draw_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

abstract class RsupportiOSDrawPlatform extends PlatformInterface{
  RsupportiOSDrawPlatform() : super(token: _token);
  static final Object _token = Object();

  static RsupportiOSDrawPlatform _instance =  RsupportiOSDrawMethodChangel();
  static RsupportiOSDrawPlatform get instance => _instance;

  static set instance(RsupportiOSDrawPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }
  void drawDataFromTexture(String unityTextureId) {
    throw UnimplementedError('drawDataFromTexture(String unityTextureId) has not been implemented.');
  }

  void testJanusSever(janusTextureId) {
    throw UnimplementedError('testJanusSever(janusTextureId) has not been implemented.');
  }

}