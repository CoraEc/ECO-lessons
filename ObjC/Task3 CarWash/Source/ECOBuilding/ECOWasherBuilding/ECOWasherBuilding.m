//
//  ECOWasherBuilding.m
//  ECOLessons
//
//  Created by Oleg Kobets on 03.05.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOWasherBuilding.h"

@interface ECOWasherBuilding()
@property (nonatomic, retain)   NSMutableArray    *mutableWasherRoom;
@property (nonatomic, readonly) NSUInteger        washRoomCapacity;

@end

@implementation ECOWasherBuilding

@dynamic washerRoom;

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableWasherRoom = nil;
    
    [super dealloc];
}

- (instancetype)initWithRoomCapacity:(NSUInteger)capacity
                    washRoomCapacity:(NSUInteger)washRoomCapacity {
    
    self = [super initWithCapasity: capacity];
    if (self){
        self.washRoomCapacity = washRoomCapacity;
        self.mutableWasherRoom = [NSMutableArray array];
    }
    
    return self;
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)washerRoom{
    return [[self.mutableWasherRoom copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addCar:(ECOWashRoom *)washRoom {
    if (self.washRoomCapacity >= self.mutableWasherRoom.count) {
        [self.mutableWasherRoom addObject:washRoom];
    } else {
        break;
    }
}

- (void)removeCar:(ECOWashRoom *)washRoom {
    [self.mutableWasherRoom removeObject:washRoom];
}

@end
