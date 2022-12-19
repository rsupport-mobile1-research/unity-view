

import 'package:janus_client/method_platform/rsupport_ios_draw_platfrom_interface.dart';

class RsupportDraw {
  void drawDataFromTexture(String unityTextureId){
    RsupportiOSDrawPlatform.instance.drawDataFromTexture(unityTextureId);
  }

  void testJanusSever(String janusTextureId) {
    RsupportiOSDrawPlatform.instance.testJanusSever(janusTextureId);
  }

}