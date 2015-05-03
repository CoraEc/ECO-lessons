//
//  ECOCarWashBuildings.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBuilding.h"

@interface ECOBuilding()
@property (nonatomic, retain) NSMutableArray    *mutableRooms;

@end

@implementation ECOBuilding

@dynamic rooms;

#pragma mark -
#pragma mark Class Methods

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableRooms = nil;
    
    [super dealloc];
}

- (instancetype)initWithCapacity:(NSUInteger)capacity {
    self = [super init];
    if (self){
        self.capacity = capacity;
        self.mutableRooms = [NSMutableArray array];
    }
    
    return self;
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)rooms {
    return [[self.mutableRooms copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addRoom:(ECORoom *)room {
    if (self.capacity >= self.mutableRooms.count) {
        [self.mutableRooms addObject:room];
    } else {
        break;
    }    
}

- (void)removeRoom:(ECORoom *)room {
    [self.mutableRooms removeObject:room];
}

@end


