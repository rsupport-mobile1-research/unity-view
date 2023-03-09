//
//  MyRender.h
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import <Foundation/Foundation.h>
#import <UnityFramework/NativeCallProxy.h>
#import <UIKit/UIKit.h>
#import "FlutterRTCVideoRenderer.h"



NS_ASSUME_NONNULL_BEGIN

@interface MyRender : NSObject <NativeCallsProtocol>
@property NSString* oldTextureId;
@property uint8_t *data;
@property (nonatomic) CGContextRef context;
@property id<MTLTexture> myTexture;

//-(void) handleDelegate;

    - (void) showHostMainWindow;
    - (void) unloadPlayer;
    - (void) quitPlayer;
    - (id<MTLTexture>) getTextureId;
    - (void) sendMessageToMobileApp:(char *) mtlTexture
                          textureId:(NSString *) unityTextureId;

@end
NS_ASSUME_NONNULL_END
