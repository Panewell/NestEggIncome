//
//  NestEggIncomeMainViewController.m
//  NestEggIncome
//
//  Created by Paul Newell on 11/6/13.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import "NestEggIncomeMainViewController.h"

@interface NestEggIncomeMainViewController ()

@end

@implementation NestEggIncomeMainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Flipside View

- (void)flipsideViewControllerDidFinish:(NestEggIncomeFlipsideViewController *)controller
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"showAlternate"]) {
        [[segue destinationViewController] setDelegate:self];
    }
}

@end
