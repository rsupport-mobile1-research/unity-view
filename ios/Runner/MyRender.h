//
//  MyRender.h
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import <Foundation/Foundation.h>
#import <UnityFramework/NativeCallProxy.h>
#import <UIKit/UIKit.h>

<<<<<<< HEAD


=======
>>>>>>> 080dc6a39e3b1e37c942e5327ceeca177c3fdc8c
NS_ASSUME_NONNULL_BEGIN

@interface MyRender : NSObject <NativeCallsProtocol>
@property NSString* oldTextureId;
<<<<<<< HEAD
@property (nonatomic, retain)NSData *data;
@property id<MTLTexture> myTexture;
=======
>>>>>>> 080dc6a39e3b1e37c942e5327ceeca177c3fdc8c

    - (void) showHostMainWindow;
    - (void) unloadPlayer;
    - (void) quitPlayer;
    - (void) sendMessageToMobileApp:(char *) mtlTexture
                          textureId:(NSString *) unityTextureId;

@end
NS_ASSUME_NONNULL_END
