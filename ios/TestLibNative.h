
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestLibNativeSpec.h"

@interface TestLibNative : NSObject <NativeTestLibNativeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestLibNative : NSObject <RCTBridgeModule>
#endif

@end
