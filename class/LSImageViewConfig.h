//
//  LSImageViewConfig.h
//  LSImageView
//
//  Created by HouKinglong on 16/4/15.
//  Copyright © 2016年 HouKinglong. All rights reserved.
//

#ifndef LSImageViewConfig_h
#define LSImageViewConfig_h

typedef NS_OPTIONS(NSUInteger, LSImageViewOptions) {
    LSImageViewRetryWhenFailed = 1 << 0,
};

typedef NS_ENUM(NSUInteger, LSImageViewLoadType) {
    LSImageViewLoadTypeNone,
    LSImageViewLoadTypeDisk,
    LSImageViewLoadTypeMemory
};

typedef void(^LSImageViewDownloadProgress)(NSInteger receivedSize,NSInteger totalSize);
typedef void(^LSImageViewCompletion)(UIImage * image, NSError * error, LSImageViewLoadType loadType);

#define dispatch_async_main_safe(block)\
        if ([NSThread mainThread]) {\
            block();\
        } else {\
            dispatch_async(dispatch_get_main_queue(), block);\
        }

#endif /* LSImageViewConfig_h */
