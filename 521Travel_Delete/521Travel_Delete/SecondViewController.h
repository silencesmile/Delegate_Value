//
//  SecondViewController.h
//  521Travel_block_Value
//
//  Created by youngstar on 16/12/7.
//  Copyright © 2016年 521Travel.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SecondDelegate <NSObject>

- (void)sendText:(NSString *)text;

@end

@interface SecondViewController : UIViewController

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) id <SecondDelegate> delegate;
@end
