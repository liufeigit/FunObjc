//
//  ViewController.h
//  Dogo-iOS
//
//  Created by Marcus Westin on 6/26/13.
//  Copyright (c) 2013 Flutterby Labs Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "State.h"

@interface ViewController : UIViewController
- (instancetype)initWithState:(State*)state;
@end
