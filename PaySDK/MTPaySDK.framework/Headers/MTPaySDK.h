//
//  MTPaySDK.h
//  MTPaySDK
//
//  Created by BiuKia on 2019/6/26.
//  Copyright © 2019 mt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for PaySDK.
FOUNDATION_EXPORT double PaySDKVersionNumber;

//! Project version string for PaySDK.
FOUNDATION_EXPORT const unsigned char PaySDKVersionString[];


@class PayReqModel;
@interface PaySDKManager : NSObject

///调起支付
/**
 调起支付

 @param payModel 支付参数
 @param controller 所在页面的controller
 @param success 成功
 @param failure 失败
 */
+(void)startPayWith:(PayReqModel *)payModel
               with:(UIViewController *)controller
            success:(void(^)(NSDictionary * responseObject))success
            failure:(void (^)(NSError *error))failure;


/// 组装微信小程序参数
+(void)wechatShareMiniProgramPathWith:(id)params success:(void(^)(NSString * responseString))success failure:(void(^)(NSError *error))failure;


/// SDK版本号
+(NSString *)sdkVersion;


@end


/// 支付参数model
@interface PayReqModel : NSObject
/**
 支付参数model

 @param orderAmount 订单金额
 @param uniqueOrderNo 订单号
 @param parentMerchantNo 运营商商编
 @param merchantNo 商户商编
 @param payeeName 收款人（仅做展示，可自定义）
 @return 支付入参对象
 */
-(instancetype)initWith:(NSString * )orderAmount
          uniqueOrderNo:(NSString *)uniqueOrderNo
       parentMerchantNo:(NSString *)parentMerchantNo
             merchantNo:(NSString *)merchantNo
              payeeName:(NSString *)payeeName;

@end



