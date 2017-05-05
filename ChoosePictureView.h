//
//  ChoosePictureView.h
//  HanEntertainment
//
//  Created by 杨晨 on 2017/2/18.
//
//

#import <UIKit/UIKit.h>
typedef void (^SelectIndex)(NSInteger selectIndex);//编码
@interface ChoosePictureView : UIView

@property (copy,nonatomic)SelectIndex selectIndex;

+(ChoosePictureView *)sharedManager;
//头像
-(void)initWithChoosePicture:(SelectIndex)selectIndex viewButtonTitle:(NSString *)titleString subviewPicutice:(UIView *)view;
//性别
-(void)initWithChoosePictureSex:(SelectIndex)selectIndex viewButtonTitle:(NSString *)sexString subviewPicutice:(UIView *)view;
@end
