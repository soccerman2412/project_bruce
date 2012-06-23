//
//  AppDelegate.h
//  MonsterSmash
//
//  Created by Taylor Plimpton on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
/*#import "SettingsManager.h"
#import "LocalyticsSession.h"
#import "GameCenter.h"
#import "IAPManager.h"
#import "SimpleAudioEngine.h"*/

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, readonly) RootViewController *viewController;

@end
