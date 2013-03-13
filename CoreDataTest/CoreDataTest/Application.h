//
//  Application.h
//  CoreDataTest
//
//  Created by Igor Tomych on 3/4/13.
//  Copyright (c) 2013 Igor Tomych. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Application : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * price;

@end
