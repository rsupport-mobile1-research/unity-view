#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"


@implementation FrameworkLibAPI

id<NativeCallsProtocol> api = NULL;
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi
{
    api = aApi;
}

@end


extern "C" {
    void showHostMainWindow() { return [api showHostMainWindow]; }
    void unloadPlayer() { return [api unloadPlayer]; }
    void quitPlayer() { return [api quitPlayer]; }
    void sendMessageToMobileApp(const char* unityTextureId) {
        return [api sendMessageToMobileApp:[NSString stringWithUTF8String:unityTextureId]];
    }
    void sendMessageToMobileAppWithNature((NSData *) data
                      textureId:(NSString *) unityTextureId){
        return [api sendMessageToMobileAppWithNature: data textureId: unityTextureId ];
    }
}

