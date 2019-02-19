//
//  LXPaintingLayer.h
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@protocol LXPaintBrush;

NS_ASSUME_NONNULL_BEGIN

@interface LXPaintingLayer : CALayer

/** 能否撤销. */
@property (nonatomic, readonly) BOOL canUndo;

/** 能否恢复. */
@property (nonatomic, readonly) BOOL canRedo;

/** 画刷对象. */
@property (nonatomic, strong) id<LXPaintBrush> paintBrush;


/** 触摸事件响应,于四个触摸事件发生时调用此方法并将 UITouch 传入. */
- (void)touchAction:(UITouch *)touch;

/** 清屏. */
- (void)clear;

/** 撤销. */
- (void)undo;

/** 恢复. */
- (void)redo;

@end

NS_ASSUME_NONNULL_END
