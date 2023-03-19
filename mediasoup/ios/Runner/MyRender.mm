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
@synthesize myTextureId;
@synthesize data;
@synthesize context;

-(id)init {
    if ( self = [super init] ) {
        [FrameworkLibAPI registerAPIforNativeCalls: self];
    }
    myTexture = [NSMutableDictionary new];
    myTextureId = [NSMutableArray new];

    [[NSNotificationCenter defaultCenter] addObserver:self
             selector:@selector(receiveDataLocalRemote:)
             name:@"PhatKTLocal"
             object:nil];

    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(receiveDataRemote:)
                                                 name:@"PhatKTRemote"
                                               object:nil];
    
    return self;
}

- (id<MTLTexture>)getTextureId:(NSString *)itemId {
    if (myTexture != nil && myTexture.count > 0) {
        return myTexture[itemId];
    }
    return nil;
}

- (void) receiveDataLocalRemote:(NSNotification *) notification {
    __weak MyRender* weakSelf = self;
    dispatch_async( dispatch_get_main_queue(), ^{
        MyRender* strongSelf = weakSelf;
        
        CGSize size = CGSizeMake([[notification.userInfo valueForKey:@"width"] floatValue] , [[notification.userInfo valueForKey:@"height"] floatValue] );
        
        uint8_t *imageData = [strongSelf convertImageData: notification.object];
        MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
        textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;
        
        // Set the pixel dimensions of the texture
        textureDescriptor.width = size.width;
        textureDescriptor.height = size.height;
        NSUInteger bytesPerRow = 4 * size.width;
        
        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
        
        if (strongSelf.myTexture[@"item-0"] == nil) {
            id<MTLDevice> device = MTLCreateSystemDefaultDevice();
            MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
            textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;
            
            textureDescriptor.width = size.width;
            textureDescriptor.height = size.height;
            [strongSelf.myTextureId addObject: [notification.userInfo valueForKey:@"texture"]];
            strongSelf.myTexture[@"item-0"] = [device newTextureWithDescriptor:textureDescriptor];
        }
        
        [strongSelf.myTexture[@"item-0"] replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow: bytesPerRow];
        
        free(imageData);
        CGContextRelease(strongSelf.context);
    });
}

- (void) receiveDataRemote:(NSNotification *) notification {
    __weak MyRender* weakSelf = self;
    dispatch_async( dispatch_get_main_queue(), ^{
        MyRender* strongSelf = weakSelf;

        CGSize size = CGSizeMake([[notification.userInfo valueForKey:@"width"] floatValue] , [[notification.userInfo valueForKey:@"height"] floatValue] );

        uint8_t *imageData = [strongSelf convertImageData: notification.object];
        MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
        textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;

        // Set the pixel dimensions of the texture
        textureDescriptor.width = size.width;
        textureDescriptor.height = size.height;
        NSUInteger bytesPerRow = 4 * size.width;

        MTLRegion region = MTLRegionMake2D(0, 0, size.width, size.height);
        
        NSString *cTextureId = [notification.userInfo valueForKey:@"texture"];
        NSString *newId;
        bool isExist = false;
        for (int i = 0; i < strongSelf.myTextureId.count; i++) {
            if (strongSelf.myTextureId[i] == cTextureId) {
                isExist = true;
                newId = strongSelf.myTextureId[i];
                break;
            }
        }

        if (isExist == false) {
            newId = [NSString stringWithFormat:@"item-%lu", (unsigned long)strongSelf.myTextureId.count];
            id<MTLDevice> device = MTLCreateSystemDefaultDevice();
            MTLTextureDescriptor *textureDescriptor = [[MTLTextureDescriptor alloc] init];
            textureDescriptor.pixelFormat = MTLPixelFormatRGBA8Unorm_sRGB;

            textureDescriptor.width = size.width;
            textureDescriptor.height = size.height;

            [strongSelf.myTextureId addObject: cTextureId];
            strongSelf.myTexture[newId] = [device newTextureWithDescriptor:textureDescriptor];
        }

        [strongSelf.myTexture[newId] replaceRegion:region mipmapLevel:0 withBytes:imageData bytesPerRow: bytesPerRow];

        free(imageData);
        CGContextRelease(strongSelf.context);
    });
}

- (uint8_t *) convertImageData:(UIImage *) image {
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
    
    context = CGBitmapContextCreate(rawData, width, height,
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
    CGFloat scale = 0.8f;
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

- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
    printf("MyRender sendMessageToMobileApp \n");
}

- (void) quitPlayer {
    printf("MyRender quitPlayer \n");
}

@end

