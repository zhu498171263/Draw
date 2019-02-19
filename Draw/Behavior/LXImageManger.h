//
//  LXImageManger.h
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LXImageManger : NSObject

/** 获取图片管理者. */
+ (instancetype)sharedImageManger;

/** 添加图片. */
- (void)addImage:(UIImage *)image;

/** 是否可以撤销. */
- (BOOL)canUndo;

/** 获取撤销操作的图片. */
- (UIImage *)imageForUndo;

/** 是否可以恢复. */
- (BOOL)canRedo;

/** 获取恢复操作的图片. */
- (UIImage *)imageForRedo;

/** 移除所有图片. */
- (void)removeAllImages;

@end

NS_ASSUME_NONNULL_END
