import Foundation

class RenderTexturePlugin:NSObject , NativeCallsProtocol {
    
    
    func showHostMainWindow() {
        print("showHostMainWindow")
    }
    
    func unloadPlayer() {
        print("unloadPlayer")
    }
    
    func quitPlayer() {
        print("quitPlayer")
    }
    

    override  init() {
        super.init()
        NSClassFromString("FrameworkLibAPI")?.registerAPIforNativeCalls(self)
    }

    func sendMessage(toMobileApp unityTextureId: String) {
        print("Receive data unityTextureId: " + unityTextureId)
    }
}
