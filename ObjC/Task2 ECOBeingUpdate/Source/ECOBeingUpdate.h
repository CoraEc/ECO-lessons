//
//  ECOBeingUpdate.h
//  ECO lessons
//
//  Created by Oleg Kobets on 16.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+ECOExtensions.h"

@interface ECOBeingUpdate : NSObject
@property (nonatomic, copy)     NSString        *name;
@property (nonatomic, assign)   NSUInteger      age;
@property (nonatomic, assign)   NSUInteger      weight;

+ (instancetype)beingUpdate;

- (void)performGenderSpecificOperation;

@end
