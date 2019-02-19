//
//  LXRectangleBrush.h
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import "LXBaseBrush.h"

NS_ASSUME_NONNULL_BEGIN

@interface LXRectangleBrush : LXBaseBrush

/** 获取用于椭圆/矩形绘制的矩形范围. */
@property (nonatomic, readonly) CGRect rectToDraw;

@end

NS_ASSUME_NONNULL_END
