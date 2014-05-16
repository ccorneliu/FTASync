//
//  ToDoItem.h
//  FTASyncDemo
//
//  Created by Corneliu Chitanu on 16/05/14.
//  Copyright (c) 2014 Corneliu Chitanu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FTASyncParent.h"

@class Person;

@interface ToDoItem : FTASyncParent

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) Person *person;

@end
