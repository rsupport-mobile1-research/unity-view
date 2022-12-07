import Foundation

class RenderTexturePlugin: NativeCallsProtocol {
    
    func showHostMainWindow() {
        print("showHostMainWindow")
    }
    
    func unloadPlayer() {
        print("unloadPlayer")
    }
    
    func quitPlayer() {
        print("quitPlayer")
    }
    

    init() {
        NSClassFromString("FrameworkLibAPI")?.registerAPIforNativeCalls(self)
    }

    func sendMessage(toMobileApp unityTextureId: String) {
        print("Receive data unityTextureId: " + unityTextureId)
    }
}
