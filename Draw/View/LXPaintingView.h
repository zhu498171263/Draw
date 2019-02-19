//
//  LXPaintView.h
//  Draw
//
//  Created by zhu on 2019/2/18.
//  Copyright © 2019 zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LXPaintBrush;

@interface LXPaintingView : UIView

/** 背景照片. */
@property (nonatomic, strong) UIImage *backgroundImage;

/** 画刷. */
@property (nonatomic, strong) id<LXPaintBrush> paintBrush;

/** 能否撤销. */
@property (nonatomic, readonly) BOOL canUndo;

/** 能否恢复. */
@property (nonatomic, readonly) BOOL canRedo;


/** 清屏. */
- (void)clear;

/** 撤销. */
- (void)undo;

/** 恢复. */
- (void)redo;

/** 保存画板内容到系统相册. */
- (void)saveToPhotosAlbum;

@end
