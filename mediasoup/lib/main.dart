import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:unity_view_test/screens/room/room.dart';
import 'package:unity_view_test/screens/unity_media_soup.dart';
import 'package:unity_view_test/screens/welcome/welcome.dart';
import 'package:unity_view_test/screens/work_mediasoup.dart';
import 'app_modules/app_modules.dart';
import 'menu_screen.dart';

import 'dart:io';


class DevHttpOverrides extends HttpOverrides {
  @override
  HttpClient createHttpClient(SecurityContext? context) {
    return super.createHttpClient(context)
      ..badCertificateCallback =
          (X509Certificate cert, String host, int port) => true;
  }
}
void main() {
  WidgetsFlutterBinding.ensureInitialized();
  runApp(
    MultiBlocProvider(
      providers: getAppModules(),
      child:  MyApp(),
    ),
  );
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
        '/': (context) => const MenuScreen(),
        '/room' :(context) => const Room(),
        '/welcome':(context) => const MyApp2(),
        '/unity':(context) => const UnityMediaSoup()
      },
    );
  }
}
