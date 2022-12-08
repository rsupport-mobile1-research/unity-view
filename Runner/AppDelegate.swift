import UIKit
import Flutter
import flutter_unity_widget
import Metal
import CoreVideo
import CoreMedia
import UnityFramework

@UIApplicationMain

@objc class AppDelegate: FlutterAppDelegate {
 
    

  override func application(
    _ application: UIApplication,
    didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
  ) -> Bool {

  
    // Initialize Unity
  	InitUnityIntegrationWithOptions(argc: CommandLine.argc, argv: CommandLine.unsafeArgv, launchOptions)

      
//      let METHOD_CHANNEL_NAME = "com.rsupport.unityViewTest/opengl_texture"
//          
//        
//
//          let controller : FlutterViewController = window?.rootViewController as! FlutterViewController

//          let methodChannel = FlutterMethodChannel(name: METHOD_CHANNEL_NAME, binaryMessenger: controller.binaryMessenger)
//
//
//          methodChannel.setMethodCallHandler({
//              (call: FlutterMethodCall, result: @escaping FlutterResult) -> Void in
//              switch call.method {
//              case "create":
//
//                  if let args = call.arguments as? Dictionary<String, Any>,
//
//                    let inputTexture = args["textureID"]{
//
//                      let _device = MyCameraGL()
//                      _device.getTexture()
//
//
////                      var cvret: CVReturn
////                      var   _CVMTLTextureCache:CVMetalTextureCache
////                      cvret = CVMetalTextureCacheCreate(kCFAllocatorDefault, nil, _device,nil,&_CVMTLTextureCache)
////                      print(cvret)
////
//
//
////                      let descriptor = MTLTextureDescriptor()
////                      descriptor.width = 500
////                      descriptor.height = 500
////                      descriptor.pixelFormat = .etc2_rgb8
////
////                      let metalLayer = CAMetalLayer()
////                      metalLayer.device = MTLCreateSystemDefaultDevice
//
//
//
//
////                      controller.view.backgroundColor = .red
////
////
////
////
////
////
////                      controller.textureFrameAvailable(inputTexture as! Int64)
////                      controller.view.backgroundColor = .blue
////
////                      let _myView = MTKView()
////
////                                          print("da khoi tao view")
////
////
////                      _myView.device = MTLCreateSystemDefaultDevice()
////
////
//////                      NSAssert(_view.device, @"Metal is not supported on this device");
////                      guard _myView != nil  else {
////                          return
////                      }
////                                         print("tao render")
////
////                      let renderer = AAPLMetalRenderer(device: _myView.device!, colorPixelFormat: _myView.pixelFormat!)
////
////                           print("tao render xong")
////                          renderer.mtkView(_myView, drawableSizeWillChange: _myView.drawableSize)
////                           print("ve")
////
////
////
////                      _myView.delegate = renderer
////
////                      controller.view.addSubview(_myView)
////                      print(_myView)
////
//
//
//
//
//
//
//                      result(true) // or your syntax
//                  } else {
//                      result(false)
//                  }
//
//
//
//
//              default:
//                  result(FlutterMethodNotImplemented)
//              }
//          })
    GeneratedPluginRegistrant.register(with: self)
//      Unity.shared.setHostMainWindow(window)
//      Unity.shared.show()
      RenderTexturePlugin()
    return super.application(application, didFinishLaunchingWithOptions: launchOptions)
  }
    
    
// func  makeTextureFromCVPixelBuffer(pixelBuffer: CVPixelBuffer, textureFormat: MTLPixelFormat) -> MTLTexture? {
//        let width = CVPixelBufferGetWidth(pixelBuffer)
//        let height = CVPixelBufferGetHeight(pixelBuffer)
//
//        // Create a Metal texture from the image buffer
//        var cvTextureOut: CVMetalTexture?
//        CVMetalTextureCacheCreateTextureFromImage(kCFAllocatorDefault, textureCache, pixelBuffer, nil, textureFormat, width, height, 0, &cvTextureOut)
//
//        guard let cvTexture = cvTextureOut, let texture = CVMetalTextureGetTexture(cvTexture) else {
//                CVMetalTextureCacheFlush(textureCache, 0)
//
//                return nil
//        }
//
//        return texture
//    }
    
    func getTexture() -> Void {
        

        let textureImageWidth = 1024
            let textureImageHeight = 1024

            let macPixelFormatString = "ARGB"
            var macPixelFormat: UInt32 = 0
            for c in macPixelFormatString.utf8.reversed() {
               macPixelFormat *= 256
               macPixelFormat += UInt32(c)
            }

            let ioSurface = IOSurfaceCreate([kIOSurfaceWidth: textureImageWidth,
                            kIOSurfaceHeight: textureImageHeight,
                            kIOSurfaceBytesPerElement: 4,
                            kIOSurfaceBytesPerRow: textureImageWidth * 4,
                            kIOSurfaceAllocSize: textureImageWidth * textureImageHeight * 4,
                            kIOSurfacePixelFormat: macPixelFormat] as CFDictionary)!
        let device = MTLCreateSystemDefaultDevice();
        
        let textureDescriptor = MTLTextureDescriptor()
  
        textureDescriptor.pixelFormat = .etc2_rgb8;
        
        // Set the pixel dimensions of the texture
        textureDescriptor.width = 100;
        textureDescriptor.height = 100;
        let test = device?.makeTexture(descriptor: textureDescriptor, iosurface: ioSurface, plane: 0)
        
        print(test as Any)
        
    }
    
    
}





extension UIImage {

    func toJpegData (compressionQuality: CGFloat, hasAlpha: Bool = true, orientation: Int = 6) -> Data? {
        guard cgImage != nil else { return nil }
        let options: NSDictionary =     [
            kCGImagePropertyOrientation: orientation,
            kCGImagePropertyHasAlpha: hasAlpha,
            kCGImageDestinationLossyCompressionQuality: compressionQuality
        ]
        return toData(options: options, type: .jpeg)
    }

    func toData (options: NSDictionary, type: ImageType) -> Data? {
        guard cgImage != nil else { return nil }
        return toData(options: options, type: type.value)
    }

    // about properties: https://developer.apple.com/documentation/imageio/1464962-cgimagedestinationaddimage
    func toData (options: NSDictionary, type: CFString) -> Data? {
        guard let cgImage = cgImage else { return nil }
        return autoreleasepool { () -> Data? in
            let data = NSMutableData()
            guard let imageDestination = CGImageDestinationCreateWithData(data as CFMutableData, kCGImagePropertyPNGTitle, 1, nil) else { return nil }
            CGImageDestinationAddImage(imageDestination, cgImage, options)
            CGImageDestinationFinalize(imageDestination)
            return data as Data
        }
    }

    // https://developer.apple.com/documentation/mobilecoreservices/uttype/uti_image_content_types
    enum ImageType {
        case image // abstract image data
        case jpeg                       // JPEG image
    //    case jpeg2000                   // JPEG-2000 image
     //   case tiff                       // TIFF image
       // case pict                       // Quickdraw PICT format
      //  case gif                        // GIF image
        case png                        // PNG image
//        case quickTimeImage             // QuickTime image format (OSType 'qtif')
//        case appleICNS                  // Apple icon data
   //     case bmp                        // Windows bitmap
//        case ico                        // Windows icon data
//        case rawImage                   // base type for raw image data (.raw)
//        case scalableVectorGraphics     // SVG image
//        case livePhoto                  // Live Photo

        var value: CFString {
            switch self {
            case .image: return  kCGImagePropertyImages
            case .jpeg: return kCGImagePropertyImages
            case .png: return kCGImagePropertyPNGTitle
                
//            case .quickTimeImage: return kUTTypeQuickTimeImage
//            case .appleICNS: return kUTTypeAppleICNS
//            case .bmp: return CGBitmapInfo.alphaInfoMask
//            case .ico: return kUTTypeICO
//            case .rawImage: return kUTTypeRawImage
//            case .scalableVectorGraphics: return kUTTypeScalableVectorGraphics
//            case .livePhoto: return kUTTypeLivePhoto
            }
        }
    }
}
