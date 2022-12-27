//
//  MyRender.m
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import "MyRender.h"
#import <Metal/Metal.h>
#import <UIKit/UIKit.h>
#import <WebRTC/WebRTC.h>
#import <MetalKit/MetalKit.h>


@implementation MyRender

@synthesize oldTextureId = _oldTextureId;
@synthesize myTexture;
@synthesize data;

-(id)init {
    if ( self = [super init] ) {
        [FrameworkLibAPI registerAPIforNativeCalls: self];
//        [[NSNotificationCenter defaultCenter] addObserver:self
//                 selector:@selector(receiveDataLocal:)
//                 name:@"PhatKTLocal"
//                 object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self
                 selector:@selector(receiveDataRemote:)
                 name:@"PhatKTRemote"
                 object:nil];
    }
    return self;
}

- (void) receiveDataLocal:(NSNotification *) notification {
    NSLog(@"receiveDataLocal");
    __weak MyRender* weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        MyRender* strongSelf = weakSelf;
        NSData * myData = [NSData dataWithData:notification.object];
        UIImage *image = [UIImage imageWithData:myData];
        
        CGSize size = CGSizeMake([[notification.userInfo valueForKey:@"width"] floatValue] , [[notification.userInfo valueForKey:@"height"] floatValue] );
        
         uint8_t *imageData = [strongSelf convertImageData: image];
        MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
        textureDescriptor.pixelFormat = MTLPixelFormatBGRA8Unorm_sRGB;
        
        // Set the pixel dimensions of the texture
        textureDescriptor.width = size.width;
        textureDescriptor.height = size.height;
        NSUInteger bytesPerRow = 4 * size.width;
        
        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
        
        [strongSelf.myTexture replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow: bytesPerRow];
        free(imageData);
    });
}

- (void) receiveDataRemote:(NSNotification *) notification {
    NSLog(@"receiveDataRemote");
    __weak MyRender* weakSelf = self;
    dispatch_async(dispatch_get_main_queue(), ^{
        MyRender* strongSelf = weakSelf;
        NSData * myData = [NSData dataWithData:notification.object];
        UIImage *image = [UIImage imageWithData:myData];
        
        CGSize size = CGSizeMake([[notification.userInfo valueForKey:@"width"] floatValue] , [[notification.userInfo valueForKey:@"height"] floatValue] );
        
         uint8_t *imageData = [strongSelf convertImageData: image];
        MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
        textureDescriptor.pixelFormat = MTLPixelFormatBGRA8Unorm_sRGB;
        
        // Set the pixel dimensions of the texture
        textureDescriptor.width = size.width;
        textureDescriptor.height = size.height;
        NSUInteger bytesPerRow = 4 * size.width;
        
        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
        
        [strongSelf.myTexture replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow: bytesPerRow];
        free(imageData);
    });
}

- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
    if (![_oldTextureId isEqualToString: unityTextureId]) {
        _oldTextureId = unityTextureId;
        NSLog(@"old texture %@ - unitytexture %@",_oldTextureId,unityTextureId);
        id<MTLTexture> tex = (__bridge id<MTLTexture>)(void*)mtlTexture;
        myTexture = tex;
//        printf("MyRender sendMessageToMobileApp width: %lu height: %lu\n", tex.width, tex.height);
//
//        UIImage *image = [UIImage imageNamed: @"mount"];
//        UIImage *reSizedImage = [self resizeImage: image centerSize: CGSizeMake(tex.width / 2, tex.height / 2)];
//        UIImage *finalImage = reSizedImage;
//        printf("MyRender sendMessageToMobileApp width: %f height: %f scale: %f \n", finalImage.size.width, finalImage.size.height, image.scale);
//        CGSize size = CGSizeMake(finalImage.size.width * 2, finalImage.size.height * 2 );
//        printf("MyRender 2 sendMessageToMobileApp width: %f height: %f\n", size.width, size.height);
//
//
//        const NSUInteger bytesPerPixel = 4;
//        const NSUInteger bytesPerRow = bytesPerPixel * size.width;
//        uint8_t *imageData =  [self convertImageData: finalImage];
//        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
//
//        [tex replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow:bytesPerRow];

    }
}

- (uint8_t *) convertImageData:(UIImage *) image
{
   // UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
    CGImageRef imageRef = [image CGImage];
    if (imageRef == nil) {
        return  nil;
    }
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
                                                 kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);//kCGBitmapByteOrder32Big
     
    if(context != nil && imageRef != nil){
        CGContextDrawImage(context, CGRectMake(0, 0, width, height), imageRef);
        if(!context) {
            free(context);
                NSLog(@"Bitmap context not created");
            }
        CGColorSpaceRelease(colorSpace);
    } else {
        return  nil;
    }
    return rawData;
}

- (UIImage *)resizeImage:(UIImage *)image centerSize:(CGSize)size {
    CGFloat scale = 0.9;
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

- (void)quitPlayer {
    printf("MyRender quitPlayer \n");
}

- (void)unloadPlayer {
    printf("MyRender unloadPlayer \n");
}

- (void)showHostMainWindow {
    printf("MyRender showHostMainWindow \n");
}

@end
