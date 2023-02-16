
import 'package:flutter/material.dart';

import 'package:expandable_bottom_sheet/expandable_bottom_sheet.dart';
import 'package:unity_view_test/screens/room/ui/leave.dart';
import 'package:unity_view_test/screens/room/ui/room_app_bar.dart';

import '../../features/media_devices/ui/AudioInputSelector.dart';
import '../../features/media_devices/ui/VideoInputSelector.dart';
import '../../features/peers/ui/list_remote_streams.dart';
import '../../features/producers/ui/controls/audio_output.dart';
import '../../features/producers/ui/controls/microphone.dart';
import '../../features/producers/ui/controls/webcam.dart';
import '../../features/producers/ui/renderer/local_stream.dart';

class Room extends StatefulWidget {
  static const String RoutePath = '/room';

  const Room({Key? key}) : super(key: key);

  @override
  _RoomState createState() => _RoomState();
}

class _RoomState extends State<Room> {
  bool show = true;

  void toggle() {
    setState(() {
      show = !show;
    });
  }

  @override
  Widget build(BuildContext context) {
    final screenHeight = MediaQuery.of(context).size.height;

    return Scaffold(
      extendBodyBehindAppBar: true,
      appBar: RoomAppBar(
        display: show,
      ),
      body: ExpandableBottomSheet(
        persistentContentHeight: kToolbarHeight + 16,
        expandableContent: AnimatedOpacity(
          duration: const Duration(milliseconds: 500),
          opacity: show ? 1.0 : 0.0,
          child: Container(
            margin: const EdgeInsets.only(left: 10, right: 10),
            constraints: BoxConstraints(
              maxHeight: screenHeight * 0.4 + 2,
              minHeight: screenHeight * 0.4 + 2,
              maxWidth: 300,
              minWidth: 0,
            ),
            decoration: const BoxDecoration(
              borderRadius: BorderRadius.vertical(top: Radius.circular(30.0)),
              color: Colors.white,
              boxShadow: [
                BoxShadow(
                  color: Colors.grey,
                  offset: Offset(0.0, 1.0), //(x,y)
                  blurRadius: 5.0,
                ),
              ],
            ),
            child: SingleChildScrollView(
              scrollDirection: Axis.vertical,
              clipBehavior: Clip.none,
              physics: const BouncingScrollPhysics(),
              child: Column(
                children: [
                  Container(
                    width: 30,
                    margin: const EdgeInsets.symmetric(vertical: 6),
                    child: const Divider(
                      height: 2,
                      thickness: 2,
                    ),
                  ),
                  Row(
                    mainAxisSize: MainAxisSize.max,
                    mainAxisAlignment: MainAxisAlignment.spaceEvenly,
                    children: const [
                      Webcam(),
                      Microphone(),
                      AudioOutput(),
                      Leave(),
                    ],
                  ),
                  Padding(
                    padding: const EdgeInsets.only(
                      left: 8.0,
                      top: 8.0,
                      right: 8.0,
                    ),
                    child: Column(
                      children: [
                        Column(
                          children: [
                            Row(
                              children: [
                                const Icon(Icons.mic),
                                Text(
                                  'Audio Input',
                                  style: Theme.of(context).textTheme.headline5,
                                ),
                              ],
                            ),
                            const AudioInputSelector(),
                          ],
                        ),
                        Column(
                          children: [
                            Row(
                              children: [
                                const Icon(Icons.videocam),
                                Text(
                                  'Video Input',
                                  style: Theme.of(context).textTheme.headline5,
                                ),
                              ],
                            ),
                            const VideoInputSelector(),
                          ],
                        ),
                        // Column(
                        //   children: [
                        //     Row(
                        //       children: [
                        //         const Icon(Icons.videocam),
                        //         Text(
                        //           'Audio Output',
                        //           style: Theme.of(context).textTheme.headline5,
                        //         ),
                        //       ],
                        //     ),
                        //     AudioOutputSelector(),
                        //   ],
                        // ),
                      ],
                    ),
                  ),
                ],
              ),
            ),
          ),
        ),
        background: GestureDetector(
          onTap: toggle,
          child: Stack(
            fit: StackFit.expand,
            children: const [
              ListRemoteStreams(),
              LocalStream(),
            ],
          ),
        ),
      ),
    );
  }
}
