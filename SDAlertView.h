//
//  SDAlertView.h
//  SuDream
//
//  Created by Moon on 16/4/20.
//  Copyright © 2016年 SuDream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UILabel+LXAdd.h"

//动画类型
typedef NS_ENUM(NSInteger ,SDShowAnimationStyle) {
    SDAnimationDefault    = 0, 
    SDAnimationLeftShake  ,
    SDAnimationTopShake   ,
    SDAnimationNO         ,
};

//block

typedef void(^SDAlertClickIndexBlock)(NSInteger btnindex,NSString *btnTitle);


@interface SDAlertView : UIView

@property (nonatomic,copy)SDAlertClickIndexBlock clickBlock;

@property (nonatomic,assign)SDShowAnimationStyle animationStyle;


//提供属性可以之定义更改控件 的属性 设置自己不同的风格

@property (nonatomic,strong)UIView *alertView;
@property (nonatomic,strong)UILabel *titleLab;
@property (nonatomic,strong)UILabel *messageLab;


//btn

@property (nonatomic,strong)  UIColor *cancelColor;
@property (nonatomic,strong)  UIColor *otherColor;



/**
 *  初始化alert方法（根据内容自适应大小，目前只支持1个按钮或2个按钮）
 *
 *  @param title         标题
 *  @param message       内容（根据内容自适应大小）
 *  @param cancelTitle   取消按钮
 *  @param otherBtnTitle 其他按钮
 *  @param block         点击事件block
 *
 *  @return 返回alert对象
 */
-(instancetype)initWithTitle:(NSString *)title message:(NSString *)message cancelBtnTitle:(NSString *)cancelTitle otherBtnTitle:(NSString *)otherBtnTitle clickIndexBlock:(SDAlertClickIndexBlock)block;

/**
 *  showLXAlertView
 */
-(void)showsSDAlertView;





/**
 *  不隐藏，默认为NO。设置为YES时点击按钮alertView不会消失（适合在强制升级时使用）
 */
@property (nonatomic,assign)BOOL dontDissmiss;
@end



@interface UIImage (colorfuls)


//a image using a color
+ (UIImage *)imageWithColor:(UIColor *)color;




@end
