//
//  SingletonPopupView.h
//  Stormclouds
//
//  Created by 杨晨 on 2016/11/5.
//  Copyright © 2016年 杨晨. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SingletonPopupView : UIView<UITextFieldDelegate>
/*
 *
 *
//单例初始化
 *
 *
 */
+(SingletonPopupView *)shareInstance;
/*
 *
 * * *prompt     需要提示的文字
 * * *aSuperView   显示的view
 *
 */
-(void)shouBusyViewPrompt:(NSString *)prompt superView:(UIView *)aSuperView;



@end
