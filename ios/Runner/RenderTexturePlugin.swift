//import Foundation
//import Metal
//import MetalKit
//
//class RenderTexturePlugin:NSObject , NativeCallsProtocol {
//
//
//    func showHostMainWindow() {
//        print("showHostMainWindow")
//    }
//
//    func unloadPlayer() {
//        print("unloadPlayer")
//    }
//
//    func quitPlayer() {
//        print("quitPlayer")
//    }
//
//
//    override  init() {
//        super.init()
//        NSClassFromString("FrameworkLibAPI")?.registerAPIforNativeCalls(self)
//    }
//
//    func sendMessage(toMobileApp unityTextureId: String) {
//        print("Receive data unityTextureId: " + unityTextureId)
//        var test = self.loadTextureWithName(name: unityTextureId)
//
//    }
//    
//
//
//    func loadTextureWithName(name:String) -> Void {
//        let device = MTLCreateSystemDefaultDevice()
//        let myLoader = MTKTextureLoader(device: device!)
//
////        let dict = NSMutableDictionary()
////        let a = [MTKTextureLoaderOption.textureUsage:MTLTextureUsage.shaderRead]
////        let b = [MTKTextureLoaderOption.textureStorageMode:MTLStorageMode.private]
//
//        do {
////            var test = try myLoader.newTexture(data: <#T##NSData#>) use this
////            //var test = try myLoader.newTexture(name: name, scaleFactor: 1.0, bundle: Bundle.main)
////             print(test)
//
//         }
//        catch let ex {
//             print(ex)
//         }
//
//
//    }
//
//
//
//
//
//
////    -(id<MTLTexture>)textureWithName:(NSString*)imgname UsingDevice:(id<MTLDevice>)device {
////
////         MTKTextureLoader* textureLoader = [[MTKTextureLoader alloc] initWithDevice:device];
////
////         NSDictionary *textureLoaderOptions = @{
////             MTKTextureLoaderOptionTextureUsage : @(MTLTextureUsageShaderRead),
////             MTKTextureLoaderOptionTextureStorageMode : @(MTLStorageModePrivate)
////         };
////
////         return [textureLoader newTextureWithName:imgname
////             scaleFactor:1.0
////             bundle:nil
////             options:textureLoaderOptions
////             error:nil];
////    }
//
//
//}
