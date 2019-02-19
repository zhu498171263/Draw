//
//  LXRectangleBrush.m
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import "LXRectangleBrush.h"

@implementation LXRectangleBrush

- (void)drawInContext:(CGContextRef)context
{
    [self configureContext:context];
    
    // 这里选择重写此方法自己画,因为在 configureContext 中添加路径的话会影响子类.
    CGContextStrokeRect(context, self.rectToDraw);
}

- (CGRect)rectToDraw
{
    return (CGRect) {
        MIN(self.startPoint.x,  self.currentPoint.x),
        MIN(self.startPoint.y,  self.currentPoint.y),
        ABS(self.startPoint.x - self.currentPoint.x),
        ABS(self.startPoint.y - self.currentPoint.y),
    };
}

@end
