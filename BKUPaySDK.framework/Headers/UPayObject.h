//
//  UPayObject.h
//  SDK
//
//  Created by 无双 on 2019/1/12.
//  Copyright © 2019年 wushuang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UPayObject : NSObject

/** 设备的唯一标识, 确保与自己项目中Build setting中的URL Types中设置的一样 (必传) */
@property (nonatomic, copy) NSString *appKey;

/** 订单号 (必传) */
@property (nonatomic, copy) NSString *orderNO;

/** 签名使用 (必传) */
@property (nonatomic, copy) NSString *sign_key;

@end

NS_ASSUME_NONNULL_END
