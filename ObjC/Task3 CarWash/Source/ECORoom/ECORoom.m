//
//  ECOCarWashBuildingRoom.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECORoom.h"

@interface ECORoom()
@property (nonatomic, retain) NSMutableArray    *mutableStaff;

@end

@implementation ECORoom

@dynamic staff;

#pragma mark -
#pragma mark Class Methods


#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableStaff = nil;
    
    [super dealloc];
}

- (instancetype)initWithCapasity:(NSUInteger)capacity {
    self = [super init];
    if (self) {
        self.capacity = capacity;
        self.mutableStaff = [NSMutableArray array];        
    }
    
    return self;
}

- (instancetype)managerRoom {
    [self initWithCapasity:1];
    
    return self;
}


#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)staff {
    return [[self.mutableStaff copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addStaff:(ECOStaff *)staff {
    if (self.capacity >= self.mutableStaff.count){
        [self.mutableStaff addObject:staff];
    } else {
        break;
    }
}

- (void)removeStaff:(ECOStaff *)staff {
    [self.mutableStaff removeObject:staff];
}

@end



