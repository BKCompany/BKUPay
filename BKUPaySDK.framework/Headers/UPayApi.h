//
//  UPayApi.h
//  SDK
//
//  Created by 无双 on 2019/1/12.
//  Copyright © 2019年 wushuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UPayObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BKRespType) {
    BKRespType_cancle    = 0,  //支付取消
    BKRespType_success   = 1,  //支付成功
    BKRespType_faild     = 2,  //支付失败
    BKRespType_other     = 3,  //未知错误
};

@protocol SBKUpayDelegate <NSObject>

/**
 app调起uPay后，收到uPay的回应

 @param BKRespType 支付状态
 */
- (void)uPayOnResp:(BKRespType)BKRespType;

@end

@interface UPayApi : NSObject

/**
 检查UPay是否已被用户安装

 @return UPay已安装返回YES，未安装返回NO。
 */
+ (BOOL)isUPayAppInstalled;

/**
 发送请求调起UPay

 @param req 具体的发送请求，在调用函数后，请自己释放
 @param callResult 调起的结果
 */
+ (void)sendReq:(UPayObject *)req callResult:(void(^)(BOOL success))callResult;

/**
 处理uPay通过URL启动App时传递的数据

 @param url uPay启动第三方应用时传递过来的URL
 @param delegate SBKUpayDelegate对象，用来接收uPay触发的消息
 @return 成功返回YES，失败返回NO。
 */
+ (BOOL)handleOpenURL:(NSURL *)url delegate:(id<SBKUpayDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
