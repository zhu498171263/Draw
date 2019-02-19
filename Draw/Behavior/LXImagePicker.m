//
//  LXImagePicker.m
//  Draw
//
//  Created by zhu on 2019/2/19.
//  Copyright © 2019 zhu. All rights reserved.
//

#import "LXImagePicker.h"
#import "LXPaintViewController.h"

@interface LXImagePicker () <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) LXPaintViewController* viewController;

/** 选中的图片. */
@property (nonatomic, readwrite, strong) UIImage *selectedImage;

@end

@implementation LXImagePicker

#pragma mark - 选择照片

- (IBAction)pickImage:(UIBarButtonItem *)sender {
    UIImagePickerController *pickerVC = [UIImagePickerController new];

    pickerVC.delegate   = self;
    pickerVC.sourceType = UIImagePickerControllerSourceTypeSavedPhotosAlbum;

    pickerVC.modalPresentationStyle = UIModalPresentationPopover;
    pickerVC.popoverPresentationController.barButtonItem = sender;

    [self.viewController presentViewController:pickerVC animated:YES completion:nil];
}

#pragma mark - UIImagePickerControllerDelegate

- (void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo:(NSDictionary *)info
{
    self.selectedImage = info[UIImagePickerControllerOriginalImage];
    [self sendActionsForControlEvents:UIControlEventValueChanged];
    
    [self.viewController dismissViewControllerAnimated:YES completion:nil];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker
{
    [self.viewController dismissViewControllerAnimated:YES completion:nil];
}

@end
