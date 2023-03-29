//
//  MyRender.h
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import <Foundation/Foundation.h>
#import <UnityFramework/NativeCallProxy.h>
#import <UIKit/UIKit.h>
#import "UnityTextureEnity.h"
#import "FlutterRTCVideoRenderer.h"



NS_ASSUME_NONNULL_BEGIN

@interface MyRender : NSObject <NativeCallsProtocol>
@property (nonatomic) CGContextRef context;
@property NSMutableDictionary<NSString *, UnityTextureEnity *>* myTextures;

//-(void) handleDelegate;

    - (void) showHostMainWindow;
    - (void) unloadPlayer;
    - (void) quitPlayer;
    - (void) renderTextureImage:(UnityTextureEnity *) data;
    - (id<MTLTexture>) getTextureId;
    - (void) sendMessageToMobileApp:(char *) mtlTexture
                          textureId:(NSString *) unityTextureId;

@end
NS_ASSUME_NONNULL_END
