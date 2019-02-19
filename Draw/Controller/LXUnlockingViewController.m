//
//  LXUnlockingViewController.m
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import "LXUnlockingViewController.h"
#import "LXUnlockingView.h"

@interface LXUnlockingViewController ()
@property (strong, nonatomic) IBOutlet LXUnlockingView *unlockingView;

@end

@implementation LXUnlockingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.unlockingView.completeHandle = ^(NSString *password){
        NSLog(@"password: %@", password);
        return [password isEqualToString:@"0124678"];
    };
    
    __weak __typeof(self) weakSelf = self;
    self.unlockingView.successHandle = ^{
        
        UIViewController *toVC = [weakSelf.storyboard instantiateViewControllerWithIdentifier:
                                  @"LXPaintViewController"];
        
        [UIView transitionFromView:weakSelf.view
                            toView:toVC.view
                          duration:1
                           options:UIViewAnimationOptionTransitionFlipFromLeft
                        completion:^(BOOL finished) {
                            toVC.view.window.rootViewController = toVC;
                        }];
    };
}

@end
