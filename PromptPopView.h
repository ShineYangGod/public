//
//  PromptPopView.h
//  HanEntertainment
//
//  Created by 杨晨 on 2017/1/12.
//  Copyright © 2017年 qyj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PromptPopView : UIView
//通用成功提示弹窗
+(void)showWithSuccess:(NSString*)successString;
//通用失败提示弹窗
+(void)showWithError:(NSString*)errorString;
@end
