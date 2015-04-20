//
//  ECOCarWashBuildings.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOCarWashBuildings.h"

@interface ECOCarWashBuildings()
@property (nonatomic, retain) NSMutableArray    *mutableRooms;

@end

@implementation ECOCarWashBuildings

@dynamic rooms;

#pragma mark -
#pragma mark Class Methods


#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.mutableRooms= nil;
    [self rooms];
    
    self.capasity = 0;
    
    [super dealloc];
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)rooms {
    return [[self.mutableRooms copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)addRooms:(ECOCarWashBuildingRoom *)room {
    [self.mutableRooms addObject: room];
}

- (void)removeRooms:(ECOCarWashBuildingRoom *)room {
    [self.mutableRooms removeObject: room];
}


@end
