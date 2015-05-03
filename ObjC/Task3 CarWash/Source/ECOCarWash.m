//
//  ECOCarWash.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOCarWash.h"

@interface ECOCarWash()
@property (nonatomic, retain) NSMutableArray    *mutableBuildings;
@property (nonatomic, retain) NSMutableArray    *mutableStaff;

@end

@implementation ECOCarWash

@dynamic buildings;
@dynamic staff;

#pragma mark -
#pragma mark Class Methods

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableBuildings = nil;
    self.mutableStaff = nil;
    
    [super dealloc];
}

-(instancetype)init {
    self = [super init]
    if (self) {
        self.mutableStaff = [NSMutableArray array];
        self.mutableBuildings = [NSMutableArray array];
    }
    
    return self;
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)buildings {
    return [[self.mutableBuildings copy] autorelease];
}

- (NSArray *)staff {
    return [[self.mutableStaff copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addBuildings:(ECOBuilding *)building {
    [self.mutableBuildings addObject:building];
}

- (void)removeBuildings:(ECOBuilding *)building {
    [self.mutableBuildings removeObject:building];
}

- (void)addStaff:(ECOStaff *)staff {
    [self.mutableStaff addObject:staff];
}

- (void)removeStaff:(ECOStaff *)staff {
    [self.mutableStaff removeObject:staff];
}

@end

