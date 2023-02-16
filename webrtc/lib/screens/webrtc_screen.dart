import 'dart:core';

import 'package:flutter/material.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:unity_view_test/screens/simple_screen.dart';

import '../webrtc/call_sample/call_sample.dart';
import '../webrtc/call_sample/data_channel_sample.dart';
import '../webrtc/route_item.dart';

class WebRTCScreen extends StatefulWidget {

  final bool isUnityView;

  const WebRTCScreen({super.key, required this.isUnityView});

  @override
  _WebRTCState createState() => _WebRTCState();
}

enum DialogDemoAction {
  cancel,
  connect,
}

class _WebRTCState extends State<WebRTCScreen> {
  List<RouteItem> items = [];
  String _server = '0.0.0.0';
  late SharedPreferences _prefs;

  bool _datachannel = false;

  @override
  initState() {
    super.initState();
    _initData();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        home: Scaffold(
            appBar: AppBar(
              title: const Text('Flutter-WebRTC example'),
            ),
            body: Column(children: [
              ListTile(
                title: const Text('P2P Call Sample'),
                subtitle: const Text("P2P Call Sample."),
                onTap: () => {
                    _datachannel = false,
                    _showAddressDialog(context)
                  },
                trailing: const Icon(Icons.arrow_right),
              ),
              const Divider(),
              ListTile(
                subtitle: const Text('P2P Data Channel.'),
                title: const Text("Data Channel Sample"),
                onTap: () => {
                  _datachannel = true,
                  _showAddressDialog(context)
                },
                trailing: Icon(Icons.arrow_right),
              ),
              const Divider()
            ])));
  }

  _initData() async {
    _prefs = await SharedPreferences.getInstance();
    setState(() {
      _server = _prefs.getString('server') ?? 'demo.cloudwebrtc.com';
    });
  }

  void showDemoDialog<T>(
      {required BuildContext context, required Widget child}) {
    showDialog<T>(
      context: context,
      builder: (BuildContext context) => child,
    ).then<void>((T? value) {
      // The value passed to Navigator.pop() or null.
      if (value != null) {
        if (value == DialogDemoAction.connect) {
          _prefs.setString('server', _server);
          if (widget.isUnityView) {
            Navigator.push(
                context,
                MaterialPageRoute(
                    builder: (BuildContext context) => _datachannel
                        ? DataChannelSample(host: _server)
                        : SimpleScreen(host: _server)));
          } else {
            Navigator.push(
                context,
                MaterialPageRoute(
                    builder: (BuildContext context) => _datachannel
                        ? DataChannelSample(host: _server)
                        : CallSample(host: _server)));
          }
        }
      }
    });
  }

  _showAddressDialog(context) {
    showDemoDialog<DialogDemoAction>(
        context: context,
        child: AlertDialog(
            title: const Text('Enter server address:'),
            content: TextField(
              onChanged: (String text) {
                setState(() {
                  _server = text;
                });
              },
              decoration: InputDecoration(
                hintText: _server,
              ),
              textAlign: TextAlign.center,
            ),
            actions: <Widget>[
              TextButton(
                  child: const Text('CANCEL'),
                  onPressed: () {
                    Navigator.pop(context, DialogDemoAction.cancel);
                  }),
              TextButton(
                  child: const Text('CONNECT'),
                  onPressed: () {
                    Navigator.pop(context, DialogDemoAction.connect);
                  })
            ]));
  }
}
