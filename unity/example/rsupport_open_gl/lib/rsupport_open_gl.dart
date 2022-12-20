
import 'rsupport_open_gl_platform_interface.dart';

class RsupportOpenGl {

  void testOpengl(String unityTextureId) {
    RsupportOpenGlPlatform.instance.testOpengl(unityTextureId);
  }

  void testJanusSever(String janusTextureId) {
    RsupportOpenGlPlatform.instance.testJanusSever(janusTextureId);
  }
}
