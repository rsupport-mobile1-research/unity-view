////
////  MyCameraGL.swift
////  Runner
////
////  Created by Phat Kha on 26/11/2022.
////
//
//import Metal
//import Foundation
//import CoreGraphics
//import CoreVideo
//import CoreMedia
//import UIKit
//
//
//
//class MyCameraGL: UIViewController {
//    var filterRenderers: [FilterRenderer] = [RosyMetalRenderer(), RosyCIRenderer()]
//    var photoFilter: FilterRenderer?
//
//    
//    func getTexture() -> Void {
//     
//        photoFilter = filterRenderers[0]
//        guard let filter = photoFilter else {
//            return
//        }
//        
//    
//        guard (filter.render(pixelBuffer: getCMSampleBuffer() ) != nil) else {
//            print("Unable to filter video buffer")
//            return
//        }
//        print("tao buffer success")
//        
//        
//    }
//    
//    
//    func getCMSampleBuffer() -> CVPixelBuffer {
//        var pixelBuffer : CVPixelBuffer? = nil
//               CVPixelBufferCreate(kCFAllocatorDefault, 100, 100, kCVPixelFormatType_32BGRA, nil, &pixelBuffer)
//
//               var info = CMSampleTimingInfo()
//               info.presentationTimeStamp = CMTime.zero
//               info.duration = CMTime.invalid
//               info.decodeTimeStamp = CMTime.invalid
//
//
//               var formatDesc: CMFormatDescription? = nil
//               CMVideoFormatDescriptionCreateForImageBuffer(allocator: kCFAllocatorDefault, imageBuffer: pixelBuffer!, formatDescriptionOut: &formatDesc)
//            
//               var sampleBuffer: CMSampleBuffer? = nil
//
//               CMSampleBufferCreateReadyWithImageBuffer(allocator: kCFAllocatorDefault, imageBuffer: pixelBuffer!, formatDescription: formatDesc!, sampleTiming: &info, sampleBufferOut: &sampleBuffer)
//        print(sampleBuffer)
//               
//        let videoPixelBuffer = CMSampleBufferGetImageBuffer(sampleBuffer!)!
//        
//        
//        let formatDescription = CMSampleBufferGetFormatDescription(sampleBuffer!)!
//                   
//        if !(photoFilter?.isPrepared ?? (0 != 0)) {
//            /*
//            outputRetainedBufferCountHint is the number of pixel buffers we expect to hold on to from the renderer. This value informs the renderer
//            how to size its buffer pool and how many pixel buffers to preallocate. Allow 3 frames of latency to cover the dispatch_async call.
//            */
//            photoFilter!.prepare(with: formatDescription, outputRetainedBufferCountHint: 3)
//        }
//        
//        
//        return videoPixelBuffer
//        
//    }
//    
//    func createMetalTexture() -> Void
//    {
////        CVReturn cvret;
////        // 1. Create a Metal Core Video texture cache from the pixel buffer.
////        cvret = CVMetalTextureCacheCreate(
////                        kCFAllocatorDefault,
////                        nil,
////                        _metalDevice,
////                        nil,
////                        &_CVMTLTextureCache);
////
////        NSAssert(cvret == kCVReturnSuccess, @"Failed to create Metal texture cache");
////        
////        // 2. Create a CoreVideo pixel buffer backed Metal texture image from the texture cache.
////        
////        cvret = CVMetalTextureCacheCreateTextureFromImage(
////                        kCFAllocatorDefault,
////                        _CVMTLTextureCache,
////                        _CVPixelBuffer, nil,
////                        _formatInfo->mtlFormat,
////                        _size.width, _size.height,
////                        0,
////                        &_CVMTLTexture);
////        
////        NSAssert(cvret == kCVReturnSuccess, @"Failed to create CoreVideo Metal texture from image");
////        
////        // 3. Get a Metal texture using the CoreVideo Metal texture reference.
////        _metalTexture = CVMetalTextureGetTexture(_CVMTLTexture);
////        
////        NSAssert(_metalTexture, @"Failed to create Metal texture CoreVideo Metal Texture");
//    }
//}
