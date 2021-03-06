//
//  PushSwitch.h
//  iOSNotifications
//
//  Created by WengHengcong on 2016/11/16.
//  Copyright © 2016年 WengHengcong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

#import "UINotificationManager.h"
#import "JSPushService.h"

#import "UILocalNotificationManager.h"

@interface NotificationSwitch : NSObject

+ (void)registePushWithClass:(id<UNUserNotificationCenterDelegate>)class  option:(NSDictionary*)launchOptions;

+ (void)resetBadge;

+ (void)registerDeviceToken:(NSData*)deviceToken;

+ (void)handleLocalNotification:(UILocalNotification *)notification;

+ (void)handleRemoteNotification:(NSDictionary *)userInfo;

+ (BOOL)supportIOS10NewFramework;

@end
