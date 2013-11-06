//
//  NestEggIncomeFlipsideViewController.h
//  NestEggIncome
//
//  Created by Paul Newell on 11/6/13.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@class NestEggIncomeFlipsideViewController;

@protocol NestEggIncomeFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(NestEggIncomeFlipsideViewController *)controller;
@end

@interface NestEggIncomeFlipsideViewController : UIViewController

@property (weak, nonatomic) id <NestEggIncomeFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
