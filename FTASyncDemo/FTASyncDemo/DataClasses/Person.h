//
//  Person.h
//  FTASyncDemo
//
//  Created by Corneliu Chitanu on 16/05/14.
//  Copyright (c) 2014 Corneliu Chitanu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "AbstractPerson.h"

@class ToDoItem;

@interface Person : AbstractPerson

@property (nonatomic, retain) NSData * photo;
@property (nonatomic, retain) NSSet *toDoItem;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addToDoItemObject:(ToDoItem *)value;
- (void)removeToDoItemObject:(ToDoItem *)value;
- (void)addToDoItem:(NSSet *)values;
- (void)removeToDoItem:(NSSet *)values;

@end
