//
//  LSImageViewManager.m
//  LSImageView
//
//  Created by HouKinglong on 16/4/15.
//  Copyright © 2016年 HouKinglong. All rights reserved.
//

#import "LSImageViewManager.h"

@implementation LSImageViewManager

+ (instancetype)getInstance {
    static dispatch_once_t once ;
    static id instance;
    dispatch_once(&once, ^{
        instance = [self new];
    });
    return instance;
}

- (void)downloadImageWithURL:(NSURL *)url option:(LSImageViewOptions)option progress:(LSImageViewDownloadProgress)progress completed:(LSImageViewCompletion)completed {
    
    if ([url isKindOfClass:NSString.class]) {
        url = [NSURL URLWithString:(NSString *)url];
    }
    
    // Prevents app crashing on argument type error like sending NSNull instead of NSURL
    if (![url isKindOfClass:NSURL.class]) {
        url = nil;
    }
    
    if (!url) {
        NSError * error = [NSError errorWithDomain:NSURLErrorDomain code:NSURLErrorFileDoesNotExist userInfo:nil];
        completed(nil, error, LSImageViewLoadTypeNone);
        return;
    }
}
@end
