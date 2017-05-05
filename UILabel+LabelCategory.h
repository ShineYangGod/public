//
//  UILabel+LabelCategory.h
//  YiStreetMerchants
//
//  Created by 杨晨 on 2016/12/27.
//  Copyright © 2016年 xiezefeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (LabelCategory)
//动态设置label的高度
+ (CGFloat)getHeightByWidth:(CGFloat)width title:(NSString *)title font:(UIFont*)font;
//动态设置label的宽度
+ (CGFloat)getWidthWithTitle:(NSString *)title font:(UIFont *)font;
@end
