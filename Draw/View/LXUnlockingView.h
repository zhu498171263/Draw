//
//  LXUnlockingView.h
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LXUnlockingView : UIView

/** 完成回调. */
@property (nonatomic, copy) BOOL (^completeHandle)(NSString *password);

/** 成功回调. */
@property (nonatomic, copy) void (^successHandle)(void);

/** 失败回调. */
@property (nonatomic, copy) void (^failureHandle)(void);

@end

NS_ASSUME_NONNULL_END
