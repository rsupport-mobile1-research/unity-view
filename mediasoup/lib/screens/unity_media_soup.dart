import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';
import 'package:pointer_interceptor/pointer_interceptor.dart';
import 'package:random_string/random_string.dart';
import 'package:unity_view_test/screens/room/room.dart';
import 'package:unity_view_test/screens/room/room_modules.dart';
import 'package:unity_view_test/screens/welcome/welcome.dart';

import '../features/me/bloc/me_bloc.dart';
import '../features/media_devices/bloc/media_devices_bloc.dart';
import '../features/peers/bloc/peers_bloc.dart';
import '../features/producers/bloc/producers_bloc.dart';
import '../features/room/bloc/room_bloc.dart';
import '../features/signaling/room_client_repository.dart';

class UnityMediaSoup extends StatefulWidget {
  const UnityMediaSoup({super.key});
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return UnityMediaSoupState();
  }
}

class UnityMediaSoupState extends State<UnityMediaSoup> {
  late UnityWidgetController _unityWidgetController;
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      initialRoute: '/',

      // ignore: missing_return
      onGenerateRoute: (settings) {
        if (settings.name == Welcome.RoutePath) {
          return MaterialPageRoute(
            builder: (BuildContext context) {

              return Stack(
                children: [
                  Padding(
                    padding: const EdgeInsets.fromLTRB(0, 0, 0, 0),
                    child: UnityWidget(
                      onUnityCreated: _onUnityCreated,
                      onUnityMessage: onUnityMessage,
                      onUnitySceneLoaded: onUnitySceneLoaded,
                      useAndroidViewSurface: false,
                      borderRadius: const BorderRadius.all(Radius.circular(70)),
                    ),
                  ),
                  PointerInterceptor(
                    child: Positioned(
                      bottom: 20,
                      left: 20,
                      right: 20,
                      child: Card(
                        elevation: 10,
                        child: Padding(
                          padding:const EdgeInsets.fromLTRB(10, 0, 10, 0),
                          child: Column(

                            children: [
                              Row(
                                children: [
                                  Expanded(
                                      flex: 1,
                                      child: TextButton(
                                          onPressed: () {
                                            Navigator.pushNamed(
                                              context,
                                              '/room',
                                              arguments: "",
                                            );
                                            // setCameraAction("Stop image");
                                            // getCubeTextureId();
                                          },
                                          style: TextButton.styleFrom(
                                            backgroundColor: Colors.red, // background
                                            foregroundColor:
                                            Colors.green,
                                            // foreground
                                          ),
                                          child: const Text('Call',
                                              style: TextStyle(fontSize: 20)))),
                                  const SizedBox(width: 10),
                                  Expanded(
                                      flex: 1,
                                      child: TextButton(
                                          onPressed: () {

                                            // setCameraAction("Stop image");
                                            // getCubeTextureId();
                                          },
                                          style: TextButton.styleFrom(
                                            //backgroundColor: Colors.white, // background
                                            foregroundColor:
                                            Colors.red, // foreground
                                          ),
                                          child: const Text('End Call',
                                              style: TextStyle(fontSize: 20)))),
                                ],
                              )
                            ],
                          ),
                        ),
                      ),
                    ),
                  )
                ],
              );
            },
          );
        }
        if (settings.name == Room.RoutePath) {
          return MaterialPageRoute(
            builder: (context) => MultiBlocProvider(
                providers: getRoomModules(settings: settings),
                child: RepositoryProvider(
                  lazy: false,
                  create: (context) {
                    final meState = context.read<MeBloc>().state;
                    String displayName = meState.displayName;
                    String id = meState.id;
                    final roomState = context.read<RoomBloc>().state;
                    String url = roomState.url;

                    Uri? uri = Uri.parse(url);

                    return RoomClientRepository(
                      peerId: id,
                      displayName: displayName,
                      url: url.isEmpty
                          ? 'wss://${uri.host}:4443'
                          : 'wss://v3demo.mediasoup.org:4443',
                      roomId: uri.queryParameters['roomId'] ??
                          uri.queryParameters['roomid'] ??
                          randomAlpha(8).toLowerCase(),
                      peersBloc: context.read<PeersBloc>(),
                      producersBloc: context.read<ProducersBloc>(),
                      meBloc: context.read<MeBloc>(),
                      roomBloc: context.read<RoomBloc>(),
                      mediaDevicesBloc: context.read<MediaDevicesBloc>(),
                    )..join();
                  },
                  child:  Stack(
                    children: [
                      Padding(
                        padding: const EdgeInsets.fromLTRB(0, 0, 0, 0),
                        child: UnityWidget(
                          onUnityCreated: _onUnityCreated,
                          onUnityMessage: onUnityMessage,
                          onUnitySceneLoaded: onUnitySceneLoaded,
                          useAndroidViewSurface: false,
                          borderRadius: const BorderRadius.all(Radius.circular(70)),
                        ),
                      ),
                      PointerInterceptor(
                        child: Positioned(
                          bottom: 20,
                          left: 20,
                          right: 20,
                          child: Card(
                            elevation: 10,
                            child: Padding(
                              padding:const EdgeInsets.fromLTRB(10, 0, 10, 0),
                              child: Column(

                                children: [
                                  Row(
                                    children: [
                                      Expanded(
                                          flex: 1,
                                          child: TextButton(
                                              onPressed: () {
                                                // Navigator.pushNamed(
                                                //   context,
                                                //   '/room',
                                                //   arguments: "",
                                                // );
                                                // setCameraAction("Stop image");
                                                // getCubeTextureId();
                                              },
                                              style: TextButton.styleFrom(
                                                backgroundColor: Colors.red, // background
                                                foregroundColor:
                                                Colors.green,
                                                // foreground
                                              ),
                                              child: const Text('Call',
                                                  style: TextStyle(fontSize: 20)))),
                                      const SizedBox(width: 10),
                                      Expanded(
                                          flex: 1,
                                          child: TextButton(
                                              onPressed: () {

                                                // setCameraAction("Stop image");
                                                // getCubeTextureId();
                                              },
                                              style: TextButton.styleFrom(
                                                //backgroundColor: Colors.white, // background
                                                foregroundColor:
                                                Colors.red, // foreground
                                              ),
                                              child: const Text('End Call',
                                                  style: TextStyle(fontSize: 20)))),
                                    ],
                                  )
                                ],
                              ),
                            ),
                          ),
                        ),
                      )
                    ],
                  ),
                )),
          );
        }
      },
    );
  }

  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');

    // initializeController(myid);
    setState(() {});
  }

  void onUnitySceneLoaded(SceneLoaded? scene) {
    print('Received scene loaded from unity: ${scene?.name}');
    print('Received scene loaded from unity buildIndex: ${scene?.buildIndex}');
  }

  // Callback that connects the created controller to the unity controller
  void _onUnityCreated(controller) {
    controller.resume();
    _unityWidgetController = controller;
    //janusDrawController.testJanusSever(myid.toString());
  }

  void setRotationSpeed(Uint8List speed) {
    // _unityWidgetController.postMessage(
    //   'Cube',
    //   'SetImage',
    //   speed,
    // );
  }

  void joinRoom(BuildContext context) {}
}
