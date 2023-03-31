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

@synthesize myTextures;
@synthesize context;

-(id)init {
    if ( self = [super init] ) {
        [FrameworkLibAPI registerAPIforNativeCalls: self];
    }
    myTextures = [[NSMutableDictionary alloc] init];
    
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(receiveDataRemote:)
                                                 name:@"PhatKTRemote"
                                               object:nil];
    
    return self;
}

- (id<MTLTexture>) getTextureId:(NSString *)itemId {
    if (myTextures.count > 0) {
        UnityTextureEnity *item = [self.myTextures objectForKey:itemId];
        if ([item.isCreatedExternaltexture isEqual: @"true"]) {
            [self renderTextureImage: item];
            return nil;
        } else {
            item.isCreatedExternaltexture = @"true";
            return item.unityTextureId;
        }
    }
    return nil;
}

- (void) renderTextureImage:(UnityTextureEnity *)data {
    if (data.notification == nil) return;

    CGRect inputSize = CGRectMake(0, 0, [[data.notification.userInfo valueForKey:@"width"] floatValue] , [[data.notification.userInfo valueForKey:@"height"] floatValue] );
    CGRect outputSize = CGRectMake(0, 0, 300, 300);
//    CGRect outSize = CGRectMake(0, 0, size.width, size.height);
    uint8_t *imageData = [self convertImageData: data.notification.object inputSize: inputSize outputSize: outputSize];
    MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
    textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;

    // Set the pixel dimensions of the texture
    textureDescriptor.width = inputSize.size.width;
    textureDescriptor.height = inputSize.size.height;
    NSUInteger bytesPerRow = 4 * inputSize.size.width;

    MTLRegion region = MTLRegionMake2D(0, 0, inputSize.size.width, inputSize.size.height);
    [data.unityTextureId replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow: bytesPerRow];
    free(imageData);
    CGContextRelease(context);
    
    data.notification = nil;
}


- (void) receiveDataRemote:(NSNotification *) notification {
    __weak MyRender* weakSelf = self;
    dispatch_async( dispatch_get_main_queue(), ^{
        MyRender* strongSelf = weakSelf;
        CGSize size = CGSizeMake([[notification.userInfo valueForKey:@"width"] floatValue] , [[notification.userInfo valueForKey:@"height"] floatValue] );
        NSString *cTextureId = [notification.userInfo valueForKey:@"texture"];
        NSString *newId;
        bool isExist = false;
        for (int i = 0; i < strongSelf.myTextures.count; i++) {
            UnityTextureEnity *item = [strongSelf.myTextures objectForKey:[NSString stringWithFormat:@"item-%d", i]];
            if (item != nil && [item.textureId isEqual: cTextureId]) {
                isExist = true;
                newId = [NSString stringWithFormat:@"item-%d", i];
            }
        }
        if (isExist == false) {
            newId = [NSString stringWithFormat:@"item-%lu", (unsigned long) strongSelf.myTextures.count];
            id<MTLDevice> device = MTLCreateSystemDefaultDevice();
            MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
            textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;

            textureDescriptor.width = size.width;
            textureDescriptor.height = size.height;

            UnityTextureEnity* newEntity = [[UnityTextureEnity alloc] init];
            newEntity.notification = notification;
            newEntity.size = CGRectMake(0, 0, size.width, size.height);
            newEntity.textureId = cTextureId;
            newEntity.unityTextureId = [device newTextureWithDescriptor:textureDescriptor];
            newEntity.isCreatedExternaltexture = @"false";
            [strongSelf.myTextures setObject:newEntity forKey:newId];
        } else {
            UnityTextureEnity *item = [strongSelf.myTextures objectForKey: newId];
            if (item.notification == nil) {
                if (size.width != item.size.size.width || size.height != item.size.size.height) {
                    id<MTLDevice> device = MTLCreateSystemDefaultDevice();

                    MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
                    textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;

                    textureDescriptor.width = size.width;
                    textureDescriptor.height = size.height;
                    
                    item.size = CGRectMake(0, 0, size.width, size.height);
                    item.unityTextureId = [device newTextureWithDescriptor:textureDescriptor];
                    item.isCreatedExternaltexture = @"false";
                }
                item.notification = notification;
            }
        }
    });
}

- (uint8_t *) convertImageData:(CIImage *) image inputSize:(CGRect)inputSize outputSize:(CGRect)outputSize {

    CIContext* tempContext = [CIContext contextWithOptions:nil];
    CGImageRef imageRef = [tempContext createCGImage:image fromRect:inputSize];
//    UIImage* uiImage = [[UIImage alloc] initWithCGImage:imageRef2];
//
//
//    CGFloat scale = MAX(inputSize.size.width/outputSize.size.width, inputSize.size.height/outputSize.size.height);
//    CGFloat oldImageWidth = outputSize.size.width * scale;
//    CGFloat oldImageHeight = outputSize.size.height * scale;
//    CGRect imageRect = CGRectMake((inputSize.size.width - oldImageWidth)/2.0f,
//                                  (inputSize.size.height - oldImageHeight)/2.0f,
//                                  oldImageWidth,
//                                  oldImageHeight);
//
//    UIGraphicsBeginImageContextWithOptions(outputSize.size, NO, 0);
//    [uiImage drawInRect:imageRect];
//    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
//    UIGraphicsEndImageContext();

//    UIImage* uiImage = [UIImage imageWithCGImage:image];
//    UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
//    CGImageRef imageRef = [newImage CGImage];
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
    
    context = CGBitmapContextCreate(rawData, width, height,
                                    bitsPerComponent, bytesPerRow, colorSpace,
                                    kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);//kCGBitmapByteOrder32Big
    
    if (context != nil && imageRef != nil){
        CGContextDrawImage(context, CGRectMake(0, 0, width, height), imageRef);
        if(!context) {
            free(context);
            NSLog(@"Bitmap context not created");
        }
        CGImageRelease(imageRef);
//        CGImageRelease(imageRef2);
        CGColorSpaceRelease(colorSpace);
    } else {
        return  nil;
    }
    return rawData;
}


//- (UIImage *)resizeImage:(UIImage *)image centerSize:(CGSize)size {
//    CGFloat scale = 0.8f;
//    CGFloat width = image.size.width * scale;
//    CGFloat height = image.size.height * scale;
//    CGRect imageRect = CGRectMake((size.width - width)/2.0f,
//                                  (size.height - height)/2.0f,
//                                  width,
//                                  height);
//
//    UIGraphicsBeginImageContextWithOptions(size, NO, 0);
//    [image drawInRect:imageRect];
//    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
//    UIGraphicsEndImageContext();
//    return newImage;
//}

- (void)unloadPlayer {
    printf("MyRender unloadPlayer \n");
}

- (void)showHostMainWindow {
    printf("MyRender showHostMainWindow \n");
}

- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
    printf("MyRender sendMessageToMobileApp \n");
}

- (void) quitPlayer {
    printf("MyRender quitPlayer \n");
}

@end

