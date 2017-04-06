//
//  YZNotification.h
//  YZNotificationDemo
//
//  Created by Shin on 2017/4/2.
//  Copyright © 2017年 Shin. All rights reserved.
//

#import <UIKit/UIKit.h>

/**通知类型*/
typedef enum : NSUInteger {
    YZNotificationTypeDefault,
    YZNotificationTypeSuccess,
    YZNotificationTypeFailed,
    YZNotificationTypeWarning,
    YZNotificationTypeCustom
} YZNotificationType;

/**icon的位置*/
typedef enum : NSUInteger {
    YZNotificationIconPositionLeft,
    YZNotificationIconPositionRight,
} YZNotificationIconPosition;

/**title类型*/
typedef enum : NSUInteger {
    YZNotificationOnlyTitle,
    YZNotificationOnlySubTile,
    YZNotificationMixureTile,  //default
} YZNotificationTitleType;

/**动画类型*/
typedef enum : NSUInteger {
    YZNotificationAnimationFade,        //渐隐
    YZNotificationAnimationSpring,      //弹簧下弹
    YZNotificationAnimationHorizontalSlide, //水平从左向右滑动
    YZNotificationAnimationVerticalSlide,   //垂直上下滑动
    YZNotificationAnimation
} YZNotificationAnimationType;


@interface YZNotification : UIView

/**通知类型*/
@property (nonatomic, assign) YZNotificationType type ;

/**icon位置*/
@property (nonatomic, assign) YZNotificationIconPosition position ;

/**title类型*/
@property (nonatomic, assign) YZNotificationTitleType titleType ;

/**动画效果*/
@property (nonatomic, assign) YZNotificationAnimationType animationType ;



/**图标*/
@property (nonatomic, strong) UIImageView *icon ;
/**标题*/
@property (nonatomic, strong) UILabel *title ;
/**子标题/内容*/
@property (nonatomic, strong) UILabel *subTitle ;


/**
 类方法1:传入类型和两个标题,即可显示默认设置的通知栏

 @param notificationType 通知类型
 @param title 标题
 @param subTitle 副标题
 @return id
 */
+ (instancetype)notificationWithType:(YZNotificationType)notificationType Title:(NSString *)title subTitle:(NSString *)subTitle ;


/**
 类方法2:所有可修改的参数的类方法

 @param notificationType 通知类型
 @param title 标题
 @param subTitle 副标题
 @param icon 图标
 @param iconPosition 图标位置
 @param titleType 标题类型
 @param animationType 动画类型
 @return id
 */
+ (instancetype)notificationWithType:(YZNotificationType)notificationType Title:(NSString *)title subTitle:(NSString *)subTitle andIcon:(UIImage *)icon andIconPosition:(YZNotificationIconPosition)iconPosition andTitleType:(YZNotificationTitleType)titleType andAnimationType:(YZNotificationAnimationType)animationType;





@end
