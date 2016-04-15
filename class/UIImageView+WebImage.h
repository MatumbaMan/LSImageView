//
//  UIImageView+WebImage.h
//  LSImageView
//
//  Created by HouKinglong on 16/4/15.
//  Copyright © 2016年 HouKinglong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LSImageViewConfig.h"

@interface UIImageView (WebImage)

/************************************************************
函数描述 : 设置ImageView图片的URL，ImageView会异步下载并缓存
输入参数 : (NSURL *)url    URL路径
输出参数 : N/A
返回参数 : null
备注信息 :
**********************************************************/
- (void)setImageURL:(NSURL *)url;

/************************************************************
 函数描述 : 设置ImageView图片的URL和一个占位图片，ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
           (UIImage *)placeholderImage    占位图片
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage;

/************************************************************
 函数描述 : 设置ImageView图片的URL、占位图片和下载选项（详见LSImageViewOptions定义），ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
            (UIImage *)placeholderImage    占位图片；
            (LSImageViewOptions)option    下载选项
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option;

/************************************************************
 函数描述 : 设置ImageView图片的URL、占位图片和完成回调，ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
            (UIImage *)placeholderImage    占位图片；
            (LSImageViewCompletion)completion 下载完成block
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage completion:(LSImageViewCompletion)completion;

/************************************************************
 函数描述 : 设置ImageView图片的URL、占位图片、下载选项（详见LSImageViewOptions定义）和完成回调，ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
            (UIImage *)placeholderImage    占位图片；
            (LSImageViewOptions)option    下载选项；
            (LSImageViewCompletion)completion 下载完成block
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option completion:(LSImageViewCompletion)completion;

/************************************************************
 函数描述 : 设置ImageView图片的URL、占位图片、下载进度回调和完成回调，ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
            (UIImage *)placeholderImage    占位图片；
            (LSImageViewDownloadProgress)progress   下载进度回调
            (LSImageViewCompletion)completion 下载完成block
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage progress:(LSImageViewDownloadProgress)progress completion:(LSImageViewCompletion)completion;

/************************************************************
 函数描述 : 设置ImageView图片的URL、占位图片、下载选项（详见LSImageViewOptions定义）、下载进度回调和完成回调，ImageView会异步下载并缓存，ImageView会显示占位图片直到图片下载成功
 输入参数 : (NSURL *)url    URL路径；
            (UIImage *)placeholderImage    占位图片；
            (LSImageViewOptions)option    下载选项；
            (LSImageViewDownloadProgress)progress   下载进度回调
            (LSImageViewCompletion)completion 下载完成block
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)setImageURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage option:(LSImageViewOptions)option progress:(LSImageViewDownloadProgress)progress completion:(LSImageViewCompletion)completion;

/************************************************************
 函数描述 : 停止图片缓存动作
 输入参数 : N/A
 输出参数 : N/A
 返回参数 : null
 备注信息 :
 **********************************************************/
- (void)cancleLoad;

@end
