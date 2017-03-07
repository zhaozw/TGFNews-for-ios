//
//  FlatButton.h
//  Popping
//
//  Created by André Schneider on 12.05.14.
//  Copyright (c) 2014 André Schneider. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlatButton : UIButton

+ (instancetype)button;
//执行结束动画
- (void)shakeButton;

@end
