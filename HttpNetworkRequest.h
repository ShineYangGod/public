//
//  HttpNetworkRequest.h
//  HanEntertainment
//
//  Created by 杨晨 on 2017/1/11.
//  Copyright © 2017年 qyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AFNetworking;

@interface HttpNetworkRequest : NSObject

+ (HttpNetworkRequest *)sharedInstance;

//GET请求
/**
 *  创建提示框
 *  @param HttpString  网址头部
 *  @param URLString      url
 *  @param dict      传入的字典
 *  @param succeed  成功执行的方法
 *  @param failure   错误执行的方法

 */

- (void)GET:(NSString *)HttpString URL:(NSString *)URLString dict:(id)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;
//POS请求
/**
 *  创建提示框
 *  @parm  HTTPString   网址头部 如http://www.baidu.com/
 *  @param URLString      url
 *  @param dict      传入的字典
 *  @param succeed  成功执行的方法
 *  @param failure   错误执行的方法
 
 */
- (void)POST:(NSString *)HTTPString URL:(NSString *)URLString dict:(id)dict succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;

//上传图片POS请求
/**
 *  创建提示框
 *  @param HTTPString  网址头部
 *  @param URLString      url
 *  @param dict      传入的字典
 *  @param succeed  成功执行的方法
 *  @param failure   错误执行的方法
 
 */
-(void)ImagePOST:(NSString *)HTTPString URL:(NSString *)URLString dict:(id)dict imageArray:(NSArray *)imgArray succeed:(void (^)(id data))succeed failure:(void (^)(NSError *error))failure;
@end
