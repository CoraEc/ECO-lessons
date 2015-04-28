//
//  ECOCarWashBuildings.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ECORoom.h"

@interface ECOBuilding : NSObject
@property (nonatomic, readonly) NSArray     *rooms;
@property (nonatomic, assign)   NSUInteger  capacity;

+ (instancetype)building;

- (void)addRoom:(ECORoom *)room;
- (void)removeRoom:(ECORoom *)room;
- (void)removeRoomAtIndex:(NSUInteger)index;

@end
