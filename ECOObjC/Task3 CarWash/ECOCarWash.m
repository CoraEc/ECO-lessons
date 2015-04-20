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

+ (instancetype)carWash {
    return [[[self alloc] init] autorelease];
}

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableBuildings = nil;
    [self buildings];
    
    self.mutableStaff = nil;
    [self staff];
    
    [super dealloc];
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

- (void)addBuildings:(ECOCarWashBuildings *)building {
    [self.mutableBuildings addObject: building];
}

- (void)removeBuildings:(ECOCarWashBuildings *)building {
    [self.mutableBuildings removeObject: building];
}

- (void)addStaff:(ECOCarWashStaff *)building {
    [self.mutableStaff addObject: staff];
}

- (void)removeStaff:(ECOCarWashStaff *)building {
    [self.mutableStaff removeObject: staff];
}

@end
