//
//  LXEllipseBrush.m
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import "LXEllipseBrush.h"

@implementation LXEllipseBrush

- (void)drawInContext:(CGContextRef)context
{
    [self configureContext:context];
    
    CGContextStrokeEllipseInRect(context, self.rectToDraw);
}

@end
