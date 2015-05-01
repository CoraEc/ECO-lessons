//
//  ECOWashRoom.m
//  ECOLessons
//
//  Created by Oleg Kobets on 01.05.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOWashRoom.h"

@interface ECOWashRoom()
@property (nonatomic, retain) NSMutableArray    *mutableCar;

@end

@implementation ECOWashRoom

@dynamic car;

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableCar = nil;
    
    [super dealloc];
}

- (instancetype)init {
    self = [super init]
    if (self){
        self.mutableCar = [NSMutableArray array];
    }
    return self;
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)car {
    return [[self.mutableCar copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addCar:(ECOCar *)car {
    [self.mutableCar addObject:car];
}

- (void)removeCar:(ECOCar *)car {
    [self.mutableCar removeObject:car];
}



@end
