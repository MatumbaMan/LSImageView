//
//  UIImageView+WebImage.m
//  LSImageView
//
//  Created by HouKinglong on 16/4/15.
//  Copyright © 2016年 HouKinglong. All rights reserved.
//

#import "UIImageView+WebImage.h"

@implementation UIImageView (WebImage)

- (void)setImageURL:(NSURL *)url {
    [self setImageURL:url placeholderImage:nil option:0 progress:nil completion:nil];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage {
    [self setImageURL:url placeholderImage:placeholderImage option:0 progress:nil completion:nil];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option {
    [self setImageURL:url placeholderImage:placeholderImage option:option progress:nil completion:nil];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage completion:(LSImageViewCompletion)completion {
    [self setImageURL:url placeholderImage:placeholderImage option:0 progress:nil completion:completion];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option completion:(LSImageViewCompletion)completion {
    [self setImageURL:url placeholderImage:placeholderImage option:option progress:nil completion:completion];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage progress:(LSImageViewDownloadProgress)progress completion:(LSImageViewCompletion)completion {
    [self setImageURL:url placeholderImage:placeholderImage option:0 progress:progress completion:completion];
}

- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option progress:(LSImageViewDownloadProgress)progress completion:(LSImageViewCompletion)completion {
    
    dispatch_async_main_safe(^{
        self.image = placeholderImage;
    });
    
    if (url) {
        
    } else {
        
    }
}

- (void)cancleLoad {
    
}

@end
