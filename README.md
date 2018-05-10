# ScrollChatView
### 用UITableView实现直播间滚动聊天列表,换一个思路用UITableView实现滚动。
#### 1. 效果图
![icon](https://github.com/chenhongch/ScrollChatView/blob/master/iPhone8Plus%20-%202018-05.png)

#### 2. 方法
 
/**
 set up Odd number of bars to content color. default: darkGrayColor（设置奇数行内容颜色优先级最高）
 */
 
@property (nonatomic ,retain)UIColor *oddNumberContentColor;

/**
 set up Odd number of bars to NickName color. default: darkGrayColor（设置奇数行昵称颜色优先级最高）
 */
 
@property (nonatomic ,retain)UIColor *oddNumberNickNameColor;

/**
 set up Even number of bars to content color. default: darkGrayColor（设置偶数行内容颜色优先级最高）
 */
 
@property (nonatomic ,retain)UIColor *evenNumberContentColor;

/**
 set up Even number of bars to NickName color. default: darkGrayColor（设置偶数行昵称颜色优先级最高）
 */
 
@property (nonatomic ,retain)UIColor *evenNumberNickNameColor;

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
 
@property (nonatomic ,assign)id<ScrollChatTextViewDelegate> yx_delegate;

 
#### 2. 须完善
  只能统一设置字体大小。


