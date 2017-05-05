//
//  PublicClass.h
//  Stormclouds
//
//  Created by 杨晨 on 2016/10/29.
//  Copyright © 2016年 杨晨. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PublicClass.h"
@interface PublicClass : NSObject
/**
    获取时间戳
 **/
+(NSString *)Converttimestamp;
/*
    正则判断手机号码地址格式
 */
+(BOOL)isMobileNumber:(NSString *)mobileNum;
/*
    判断输入的是不是汉字
 */
+(BOOL)textCheckChinese:(NSString *)text;
/*
    判断银行卡号
 */
+(BOOL)checkCardNo:(NSString*) cardNo;
/*
    获取当前时间
 */
+(NSString *)publiDate;
/**
    MD5加密
 **/
+(NSString *) md5: (NSString *) inPutText;
/**
 *  JSON字符串转字典
 *
 *  @param jsonString 传入所有数据JSON字符串
 *
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/** 时间戳转换成当前时间*/
+(NSString *)timeWithTimeIntervalString:(NSString *)timeString;

/** 时间戳转换成当前时间 格式=年月日时分秒*/
+(NSString *)timeWithTimeIntervalDataString:(NSString *)timeString;

/**字典转JSON字符串  */
+(NSString*)dictionaryToJson:(NSDictionary *)dic;

/**数组转JSON字符串*/
+ (NSString *)arrayToJSONString:(NSMutableArray *)array;

/** 字符串转数组 */
+ (NSMutableArray *)dictionaryWithArrayString:(NSString *)JSONString;

/* 身份证号格式的判断 */
+(BOOL)judgeIdentityStringValid:(NSString *)identityString;
/*
 上传图片
 */
+ (NSString *)imageBase64WithDataURL:(UIImage *)image;
/*
 //判断订单状态
 */
+(NSString *)initWithOrderTheType:(NSString *)type;

/**拼音转汉字 */
+ (NSString *)transform:(NSString *)chinese;



@end
