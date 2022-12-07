import Foundation

class RenderTexturePlugin: NativeCallsProtocol {
    
    func sendMessage(toMobileApp mtlTexture: UnsafeMutablePointer<CChar>!) {}
    
    func sendMessage(toMobileApp mtlTexture: UnsafeMutablePointer<CChar>!, textureId unityTextureId: String!) {
        let convert: UInt8? = UInt8(unityTextureId)
        let convert2: UInt8? = UInt8(String(describing: mtlTexture))
        print("Receive data mtlTexture: \(String(describing: mtlTexture)) covert: \(convert) textureId: \(unityTextureId) convert2: \(convert2)")


        let untiyTexture: MTLTexture? = (mtlTexture as? MTLTexture)
        let untiyTexture2: MTLTexture? = (convert as? MTLTexture)
        let untiyTexture3: MTLTexture? = (convert2 as? MTLTexture)
    
        print("Receive data untiyTexture: \(untiyTexture?.width)-\(untiyTexture?.height) untiyTexture2: \(untiyTexture2?.width)-\(untiyTexture2?.height) untiyTexture3: \(untiyTexture3?.width)-\(untiyTexture3?.height)")

//        let width = untiyTexture.width
//        let height = untiyTexture.height
//        print("Receive data untiyTexture: \(width)-\(height)")
    }
    
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

    func sendMessage(toMobileApp unityTextureId:UInt8!) {
        let untiyTexture:MTLTexture! = (unityTextureId as! MTLTexture)
        let width = untiyTexture.width
        let height = untiyTexture.height
        print("Receive data untiyTexture: \(width)-\(height)")
    }
}
