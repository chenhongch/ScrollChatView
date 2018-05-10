//
//  ScrollChatView.h
//  ScrollChatView
//
//  Created by 陈红 on 2018/1/31.
//  Copyright © 2018年 陈红. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ScrollChatView;

@protocol ScrollChatViewDelegate <NSObject>

- (void)scrollChatTextView:(ScrollChatView *)view withIndex:(NSInteger)index withText:(NSString*)text;

@end

@interface ScrollChatView : UITableView

/**
 set up Odd number of bars to content color. default: darkGrayColor（设置奇数行内容颜色优先级最高）
 */
@property (nonatomic ,retain)UIColor *oddNumberContentColor;
/**
 set up Odd number of bars to NickName color. default: darkGrayColor（设置奇数行昵称颜色优先级最高）
 */
@property (nonatomic ,retain)UIColor *oddNumberNickNameColor;
/**
 set up Odd number of bars to content font. default: 16
 */
//@property (nonatomic ,retain)UIFont *oddNumberContentFont;
/**
 set up Even number of bars to content color. default: darkGrayColor（设置偶数行内容颜色优先级最高）
 */
@property (nonatomic ,retain)UIColor *evenNumberContentColor;
/**
 set up Even number of bars to NickName color. default: darkGrayColor（设置偶数行昵称颜色优先级最高）
 */
@property (nonatomic ,retain)UIColor *evenNumberNickNameColor;

/**
 set up Even number of bars to content font. default: 16
 */
//@property (nonatomic ,retain)UIFont *evenNumberContentFont;



/**
 set up reviewer nickName color. default: darkGrayColor（设置昵称颜色优先级次低）
 */
@property (nonatomic ,retain)UIColor *reviewerNickNameColor;
/**
 set up reviewer content color. default: darkGrayColor （设置内容颜色优先级次低）
 */
@property (nonatomic ,retain)UIColor *contentColor;



/**
 all text font. default 16 （设置整体字号优先级最低）
 */
@property (nonatomic ,retain)UIFont *font;
/**
 set up content color. default: darkGrayColor （设置整体颜色优先级最低）
 */
@property (nonatomic ,retain)UIColor *color;

/**
 Rolling speed(Unit second). default 2s （设置滚动速度）
 */
@property (nonatomic ,assign)NSInteger speed;

/**
 Row spacing(设置行间距)
 */
@property (nonatomic ,assign)CGFloat padding;

/**
 Insert the current comment (当前用户评论的内容)
 */
@property (nonatomic,copy)NSString     *cureentText;


/**
 data--Final assignment（带以上属性负责完后，再更新数据）
 */
@property (nonatomic ,retain)NSArray *dataList;

/**
 yx_delegate
 */
@property (nonatomic ,assign)id<ScrollChatViewDelegate> yx_delegate;


@end
