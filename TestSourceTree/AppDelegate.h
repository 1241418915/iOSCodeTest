//
//  AppDelegate.h
//  TestSourceTree
//
//  Created by 子非鱼 on 2019/11/16.
//  Copyright © 2019 子非鱼. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

