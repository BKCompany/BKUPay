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

/** 设备的唯一标识, 确保与自己项目中Build setting中的URL Types中设置的一样，(建议：公司名缩写加项目名英文缩写加数字组成， 例如TencentWechat888) */
@property (nonatomic, copy) NSString *urlScheme;

/** 订单号 */
@property (nonatomic, copy) NSString *orderNO;

@end

NS_ASSUME_NONNULL_END
