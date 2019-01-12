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

@interface UPayApi : NSObject

/**
 检查UPay是否已被用户安装

 @return UPay已安装返回YES，未安装返回NO。
 */
+ (BOOL)isUPayAppInstalled;

/**
 发送请求到UPay

 @param req 具体的发送请求，在调用函数后，请自己释放
 @return 成功返回YES，失败返回NO
 */
+ (BOOL)sendReq:(UPayObject *)req;

@end

NS_ASSUME_NONNULL_END
