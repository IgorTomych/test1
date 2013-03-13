//
//  AppDelegate.h
//  CoreDataTest
//
//  Created by Igor Tomych on 3/4/13.
//  Copyright (c) 2013 Igor Tomych. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewController;

@property (strong, nonatomic) NSManagedObjectContext* managedContext;
@property (strong, nonatomic) NSPersistentStoreCoordinator* storeCoordinator;
@property (strong, nonatomic) NSManagedObjectModel* managedModel;

@end
