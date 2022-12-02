import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'rsupport_open_gl_method_channel.dart';

abstract class RsupportOpenGlPlatform extends PlatformInterface {
  /// Constructs a RsupportOpenGlPlatform.
  RsupportOpenGlPlatform() : super(token: _token);

  static final Object _token = Object();

  static RsupportOpenGlPlatform _instance = MethodChannelRsupportOpenGl();

  /// The default instance of [RsupportOpenGlPlatform] to use.
  ///
  /// Defaults to [MethodChannelRsupportOpenGl].
  static RsupportOpenGlPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [RsupportOpenGlPlatform] when
  /// they register themselves.
  static set instance(RsupportOpenGlPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  void testOpengl(String unityTextureId) {
    throw UnimplementedError('testOpengl(String unityTextureId) has not been implemented.');
  }

  void testJanusSever(janusTextureId) {
    throw UnimplementedError('testJanusSever(janusTextureId) has not been implemented.');
  }
}
