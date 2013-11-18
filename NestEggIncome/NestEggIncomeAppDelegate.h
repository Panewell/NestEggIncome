//
//  NestEggIncomeAppDelegate.h
//  NestEggIncome
//
//  Created by Paul Newell on 11/6/13.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NestEggIncomeAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
// database path
@property NSString *databasename;
@property NSString *databasepath;
@property NSArray *documentPaths;
@property NSString *documentsDir;
@property NSFileManager *appdelfilemanager;

@end
