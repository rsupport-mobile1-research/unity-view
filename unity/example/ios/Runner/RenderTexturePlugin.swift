import Foundation

class RenderTexturePlugin: NativeCallsProtocol {
    
    func sendMessage(toMobileApp mtlTexture: UnsafeMutablePointer<CChar>!) {}
    
    func sendMessage(toMobileApp mtlTexture: UnsafeMutablePointer<CChar>!, textureId unityTextureId: String!) {
        
//        let textureConvert = String(describing: mtlTexture)
//        var byte: UnsafePointer<Int8> = Array(textureConvert.utf8)[0]
//        sendMessage(toMobileApp: byte as MTLTexture)
//        print("Receive data mtlTexture: \(String(describing: mtlTexture)) textureId: \(unityTextureId)")
                

//    mtlTexture: Optional(0x000000011a906830) textureId: Optional("4740638768")

//        let convert: UInt8? = UInt8(unityTextureId)
//        let convert2: UInt8? = UInt8(String(describing: mtlTexture))
//        print("Receive data mtlTexture: \(String(describing: mtlTexture)) covert: \(convert) textureId: \(unityTextureId) convert2: \(convert2)")
//
//
//        let untiyTexture: MTLTexture? = (mtlTexture as? MTLTexture)
//        let untiyTexture2: MTLTexture? = (convert as? MTLTexture)
//        let untiyTexture3: MTLTexture? = (convert2 as? MTLTexture)
//
//        print("Receive data untiyTexture: \(untiyTexture?.width)-\(untiyTexture?.height) untiyTexture2: \(untiyTexture2?.width)-\(untiyTexture2?.height) untiyTexture3: \(untiyTexture3?.width)-\(untiyTexture3?.height)")

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

    func sendMessage(toMobileApp untiyTexture:MTLTexture!) {
        let width = untiyTexture.width
        let height = untiyTexture.height
        print("Receive data untiyTexture: \(width)-\(height)")
    }
}
