//
//  LSImageViewManager.h
//  LSImageView
//
//  Created by HouKinglong on 16/4/15.
//  Copyright © 2016年 HouKinglong. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LSImageViewConfig.h"

@interface LSImageViewManager : NSObject

+ (instancetype)getInstance;

- (void)downloadImageWithURL:(NSURL *)url option:(LSImageViewOptions)option progress:(LSImageViewDownloadProgress)progress completed:(LSImageViewCompletion)completed;

@end
