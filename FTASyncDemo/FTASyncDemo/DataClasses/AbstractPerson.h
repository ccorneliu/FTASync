//
//  AbstractPerson.h
//  FTASyncDemo
//
//  Created by Corneliu Chitanu on 16/05/14.
//  Copyright (c) 2014 Corneliu Chitanu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FTASyncParent.h"


@interface AbstractPerson : FTASyncParent

@property (nonatomic, retain) NSString * name;

@end
