//
//  LXBaseBrush.h
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
#import "LXPaintBrush.h"

/** 涂鸦工具. */
typedef NS_ENUM(NSUInteger, LXBrushType) {
    /** 画笔. */
    LXBrushTypePencil,
//    /** 橡皮. */
//    LXBrushTypeEraser,
//    /** 直线. */
//    LXBrushTypeLine,
//    /** 虚线. */
//    LXBrushTypeDashLine,
    /** 矩形. */
    LXBrushTypeRectangle,
//    /** 方形. */
//    LXBrushTypeSquare,
//    /** 椭圆. */
//    LXBrushTypeEllipse,
    /** 正圆. */
    LXBrushTypeCircle,
//    /** 箭头. */
//    LXBrushTypeArrow,
};

NS_ASSUME_NONNULL_BEGIN

@interface LXBaseBrush : NSObject<LXPaintBrush>

/** 初始点. */
@property (nonatomic, readonly) CGPoint startPoint;

/** 上一点. */
@property (nonatomic, readonly) CGPoint previousPoint;

/** 当前点. */
@property (nonatomic, readonly) CGPoint currentPoint;


/** 配置上下文. */
- (void)configureContext:(CGContextRef)context;

/** 创建对应类型的涂鸦工具. */
+ (id<LXPaintBrush>)brushWithType:(LXBrushType)brushType;

@end

NS_ASSUME_NONNULL_END
