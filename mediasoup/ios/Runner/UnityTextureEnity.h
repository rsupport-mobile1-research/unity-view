//
//  UnityTextureEnity.h
//  Runner
//
//  Created by Vu Phan on 3/27/23.
//

#ifndef UnityTextureEnity_h
#define UnityTextureEnity_h

#import <MetalKit/MetalKit.h>

@interface UnityTextureEnity : NSObject

@property NSString *textureId;
@property id<MTLTexture> unityTextureId;
@property CGRect size;
@property NSNotification *notification;
@property NSString *isCreatedExternaltexture;

@end


#endif /* UnityTextureEnity_h */
