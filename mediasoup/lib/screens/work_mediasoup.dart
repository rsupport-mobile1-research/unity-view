


import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
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

class MyApp2 extends StatelessWidget {
  const MyApp2({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      initialRoute: '/',

      // ignore: missing_return
      onGenerateRoute: (settings) {
        if (settings.name == Welcome.RoutePath) {
          return MaterialPageRoute(
            builder: (context) => const Welcome(),
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
                  child: const Room(),
                )),
          );
        }
      },
    );
  }
}