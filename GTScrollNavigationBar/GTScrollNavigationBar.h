//
//  GTScrollNavigationBar.h
//  GTScrollNavigationBarExample
//
//  Created by Luu Gia Thuy on 21/12/13.
//  Copyright (c) 2013 Luu Gia Thuy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GTScrollNavigationBarScrolledDown,
    GTScrollNavigationBarScrolledUp
} GTScrollNavigationBarState;

@interface GTScrollNavigationBar : UINavigationBar

@property (strong, nonatomic) UIScrollView *scrollView;
@property (assign, nonatomic) GTScrollNavigationBarState scrollState;

@end