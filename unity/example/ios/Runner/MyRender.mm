//
//  MyRender.m
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import "MyRender.h"
#import <Metal/Metal.h>
#import <UIKit/UIKit.h>

@implementation MyRender

@synthesize oldTextureId = _oldTextureId;

-(id)init {
    if ( self = [super init] ) {
        printf("MyRender initData \n");
        [FrameworkLibAPI registerAPIforNativeCalls: self];
    }
    return self;
}


- (void)quitPlayer {
    printf("MyRender quitPlayer \n");
}

//- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
//    if (![_oldTextureId isEqualToString: unityTextureId]) {
//        _oldTextureId = unityTextureId;
//        id<MTLTexture> tex = (__bridge id<MTLTexture>)(void*)mtlTexture;
//        MTLPixelFormat format = [tex pixelFormat];
//        printf("MyRender sendMessageToMobileApp format %lu \n", (unsigned long)format);
//
//        NSAssert([tex pixelFormat] == MTLPixelFormatRGBA8Unorm_sRGB, @"Pixel format of texture must be MTLPixelFormatRGBA8Unorm_sRGB to create UIImage");
//
//        printf("MyRender sendMessageToMobileApp width: %lu height: %lu\n", tex.width, tex.height);
//
//        UIImage *image = [UIImage imageNamed: @"test_image"];
//        CGSize size = CGSizeMake(tex.width, tex.height);
//        UIImage *reSizedImage = [self resizeImage:image convertToSize: size];
//
//        const NSUInteger bytesPerPixel = 4;
//        const NSUInteger bytesPerRow = bytesPerPixel * tex.width;
//        uint8_t *imageData = [self convertImageData: reSizedImage];
////        NSData *imageData2 = UIImageJPEGRepresentation(reSizedImage, 1.0);
//
//        MTLRegion region = MTLRegionMake2D(0, 0, tex.width, tex.height);
//        [tex replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow:bytesPerRow];
////        [tex replaceRegion:region mipmapLevel:0 withBytes:[imageData2 bytes] bytesPerRow:bytesPerRow];
//    }
//}

- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
    if (![_oldTextureId isEqualToString: unityTextureId]) {
        _oldTextureId = unityTextureId;
        id<MTLTexture> tex = (__bridge id<MTLTexture>)(void*)mtlTexture;
        printf("MyRender sendMessageToMobileApp width: %lu height: %lu\n", tex.width, tex.height);

        UIImage *image = [UIImage imageNamed: @"test_image"];
        UIImage *reSizedImage = [self resizeImage: image centerSize: CGSizeMake(tex.width / 2, tex.height / 2)];
        UIImage *finalImage = reSizedImage;
        printf("MyRender sendMessageToMobileApp width: %f height: %f scale: %f \n", finalImage.size.width, finalImage.size.height, image.scale);
        CGSize size = CGSizeMake(finalImage.size.width * finalImage.scale, finalImage.size.height * finalImage.scale);
        printf("MyRender sendMessageToMobileApp width: %f height: %f\n", size.width, size.height);

        const NSUInteger bytesPerPixel = 4;
        const NSUInteger bytesPerRow = bytesPerPixel * size.width;
        uint8_t *imageData = [self convertImageData: finalImage];
        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
        [tex replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow:bytesPerRow];
    }
}

- (uint8_t *) convertImageData:(UIImage *) image
{
    CGImageRef imageRef = [image CGImage];
    
    // Create a suitable bitmap context for extracting the bits of the image
    const NSUInteger width = CGImageGetWidth(imageRef);
    const NSUInteger height = CGImageGetHeight(imageRef);
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    uint8_t *rawData = (uint8_t *)calloc(height * width * 4, sizeof(uint8_t));
    const NSUInteger bytesPerPixel = 4;
    const NSUInteger bytesPerRow = bytesPerPixel * width;
    const NSUInteger bitsPerComponent = 8;
    CGContextRef context = CGBitmapContextCreate(rawData, width, height,
                                                 bitsPerComponent, bytesPerRow, colorSpace,
                                                 kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
    CGColorSpaceRelease(colorSpace);

    CGContextDrawImage(context, CGRectMake(0, 0, width, height), imageRef);
    CGContextRelease(context);
    
    for (int lineIndex = 0; lineIndex < height; lineIndex++) {
        for (int pointPos = 0 ; pointPos < width / 2; pointPos++) {
            long byteIndex = (lineIndex * bytesPerRow) + (pointPos * 4);
            long targetIndex = (lineIndex * bytesPerRow) + ((width - pointPos - 1) * 4);

            char m = rawData[targetIndex];
            rawData[targetIndex] = rawData[byteIndex];
            rawData[byteIndex] = m;

            char m1 = rawData[targetIndex + 1];
            rawData[targetIndex + 1] = rawData[byteIndex + 1];
            rawData[byteIndex + 1] = m1;

            char m2 = rawData[targetIndex + 2];
            rawData[targetIndex + 2] = rawData[byteIndex + 2];
            rawData[byteIndex + 2] = m2;

            char m3 = rawData[targetIndex + 3];
            rawData[targetIndex + 3] = rawData[byteIndex + 3];
            rawData[byteIndex + 3] = m3;
        }
    }
    return rawData;
}

- (UIImage *)resizeImage2:(UIImage *)image centerSize:(CGSize)size {
    float newHeight = 0.0;
    float newWidth = 0.0;

    float oldWidth = image.size.width;
    float widthScaleFactor = size.width / oldWidth;

    float oldHeight = image.size.height;
    float heightScaleFactor = size.height / oldHeight;
    if (heightScaleFactor > widthScaleFactor) {
        newHeight = oldHeight * widthScaleFactor;
        newWidth = image.size.width * widthScaleFactor;
    } else {
        newHeight = image.size.height * heightScaleFactor;
        newWidth = oldWidth * heightScaleFactor;
    }

    float cxPad = size.width - newWidth;
    float cyPad = size.height - newHeight;
    if (cyPad > 0) {
        cyPad = cyPad / 2.0;
    }
    if (cxPad > 0) {
        cxPad = cxPad / 2.0;
    }

    CGSize frameSize = CGSizeMake(size.width, size.height);
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(frameSize.width, frameSize.height), YES, 0.0);
    [[UIColor whiteColor] setFill];
    UIRectFill(CGRectMake(0, 0, frameSize.width, frameSize.height));
    [image drawInRect:CGRectMake((int)cxPad, (int)cyPad, newWidth, newHeight)];
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return newImage;
}

- (UIImage *)resizeImage:(UIImage *)image centerSize:(CGSize)size {
    CGFloat scale = MAX(size.width/image.size.width, size.height/image.size.height);
    CGFloat width = image.size.width * scale;
    CGFloat height = image.size.height * scale;
    CGRect imageRect = CGRectMake((size.width - width)/2.0f,
                                  (size.height - height)/2.0f,
                                  width,
                                  height);

    UIGraphicsBeginImageContextWithOptions(size, NO, 0);
    [image drawInRect:imageRect];
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return newImage;
}

- (void)unloadPlayer {
    printf("MyRender unloadPlayer \n");
}

- (void)showHostMainWindow {
    printf("MyRender showHostMainWindow \n");
}

@end
