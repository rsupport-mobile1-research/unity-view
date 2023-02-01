import 'package:flutter/material.dart';
import 'package:unity_view_test/screens/no_interaction_screen.dart';
import 'package:unity_view_test/screens/orientation_screen.dart';

import 'janus/JanusHome.dart';
import 'janus/typed_examples/audio_bridge.dart';
import 'janus/typed_examples/screen_share_videoroom.dart';
import 'janus/typed_examples/sip.dart';
import 'janus/typed_examples/streaming.dart';
import 'janus/typed_examples/text_room.dart';
import 'janus/typed_examples/video_call.dart';
import 'janus/typed_examples/video_room.dart';
import 'menu_screen.dart';
import 'screens/api_screen.dart';
import 'screens/loader_screen.dart';
import 'screens/simple_screen.dart';

void main() {
  WidgetsFlutterBinding.ensureInitialized();
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Unity Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
        visualDensity: VisualDensity.adaptivePlatformDensity,
      ),
      initialRoute: '/',
      routes: {
        '/': (context) => MenuScreen(),
        '/simple': (context) => SimpleScreen(),
        '/janus': (context) => JanusHome(),
        '/loader': (context) => LoaderScreen(),
        '/orientation': (context) => OrientationScreen(),
        '/api': (context) => ApiScreen(),
        '/none': (context) => NoInteractionScreen(),

        "/typed_video_room_v2_unified": (context) => TypedVideoRoomV2Unified(),
        "/typed_sip": (context) => TypedSipExample(),
        "/typed_streaming": (context) => TypedStreamingV2(),
        "/typed_video_call": (context) => TypedVideoCallV2Example(),
        "/typed_audio_bridge": (context) => TypedAudioRoomV2(),
        "/typed_text_room": (context) => TypedTextRoom(),
        "/screen_share_typed_video_room_v2_unified": (context) =>
            TypedScreenShareVideoRoomV2Unified(),
      },
    );
  }
}
