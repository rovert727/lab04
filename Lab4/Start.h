//
//  ViewController.h
//  Lab04
//
//  Created by Jose Rodriguez on 22/06/16.
//  Copyright © 2016 Jose. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Declarations.h"
#import "Intro.h"

@interface Start : UIViewController<UIPageViewControllerDelegate,UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;



@end

