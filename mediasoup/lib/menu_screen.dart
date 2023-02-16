import 'package:flutter/material.dart';

class MenuScreen extends StatefulWidget {
  const MenuScreen({Key? key}) : super(key: key);

  @override
  _MenuScreenState createState() => _MenuScreenState();
}

class _MenuScreenState extends State<MenuScreen> {
  bool enableAR = true;

  List<_MenuListItem> menus = [
    _MenuListItem(
      description: 'Demo Media Soup',
      route: '/welcome',
      title: 'Simple Media Demo',
      enableAR: false,
    ),
    _MenuListItem(
      description: 'Mediasoup work with Unity',
      route: '/unity',
      title: 'Unity View',
      enableAR: false,
    )
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Menu List'),
        actions: [
          Row(
            children: [
              Text("Enable AR"),
              Checkbox(
                value: enableAR,
                onChanged: (changed) {
                  setState(() {
                    enableAR = changed!;
                  });
                },
              ),
            ],
          ),
        ],
      ),
      body: Center(
        child: ListView.builder(
          itemCount: menus.length,
          itemBuilder: (BuildContext context, int i) {
            return ListTile(
              title: Text(menus[i].title),
              subtitle: Text(menus[i].description),
              onTap: () {
                Navigator.of(context).pushNamed(
                  menus[i].route,
                );
              },
            );
          },
        ),
      ),
    );
  }
}

class _MenuListItem {
  final String title;
  final String description;
  final String route;
  final bool enableAR;

  _MenuListItem({required this.title, required this.description, required this.route, required this.enableAR});
}
