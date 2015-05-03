//
//  ECOWashRoom.m
//  ECOLessons
//
//  Created by Oleg Kobets on 01.05.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOWashRoom.h"

@interface ECOWashRoom()
@property (nonatomic, retain)   NSMutableArray    *mutableCar;
@property (nonatomic, readonly) NSUInteger        carCapacity;

@end

@implementation ECOWashRoom

@dynamic car;

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableCar = nil;
    
    [super dealloc];
}

- (instancetype)initWithWorkerCapasity:(NSUInteger)capacity
                           carCapacity:(NSUInteger)carCapacity {
    
    self = [super initWithCapasity: capacity];
    if (self){
        self.carCapacity = carCapacity;
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
    if (self.carCapacity >= self.mutableCar.count) {
        [self.mutableCar addObject:car];
    } else {
        break;
    }    
}

- (void)removeCar:(ECOCar *)car {
    [self.mutableCar removeObject:car];
}

@end
