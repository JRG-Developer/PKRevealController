//
//  PKMenuProtocol.h
//  AppOrderCore
//
//  Created by Joshua Greene on 7/4/13.
//  Copyright (c) 2013 App-Order. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PKRevealController;

@protocol PKRevealMenuDelegate <NSObject>
@required
- (void)selectMenuItemType:(int)type;
@optional
- (BOOL)revealViewController:(PKRevealController *)controller shouldSetFrontViewController:(UIViewController *)viewController;
- (void)revealViewController:(PKRevealController *)controller willSelectFrontViewController:(UIViewController *)viewController;
- (void)revealViewController:(PKRevealController *)controller didSelectFrontViewController:(UIViewController *)viewController;
@end