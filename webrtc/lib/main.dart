import 'package:flutter/material.dart';
import 'package:unity_view_test/screens/webrtc_screen.dart';

import 'menu_screen.dart';
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
        '/webrtc': (context) => WebRTCScreen(),
      },
    );
  }
}
