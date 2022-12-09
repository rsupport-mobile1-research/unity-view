//
//  MyRender.m
//  Runner
//
//  Created by Vu Phan on 12/9/22.
//

#import "MyRender.h"

@implementation MyRender

+ (void)initData {
    printf("MyRender initData");
    [FrameworkLibAPI registerAPIforNativeCalls: MyRender.self];
}


- (void)quitPlayer {
    printf("MyRender quitPlayer");
}

- (void)sendMessageToMobileApp:(char *)mtlTexture textureId:(NSString *)unityTextureId {
    printf("MyRender sendMessageToMobileApp");
}

- (void)showHostMainWindow {
    printf("MyRender showHostMainWindow");
}

- (void)unloadPlayer {
    printf("MyRender unloadPlayer");
}

@end
