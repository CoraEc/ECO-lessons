//
//  ECOWasherBuilding.h
//  ECOLessons
//
//  Created by Oleg Kobets on 03.05.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBuilding.h"

@class ECOWashRoom;

@interface ECOWasherBuilding : ECOBuilding
@property (nonatomic, readonly) NSArray     *washerRoom;

- (instancetype)initWithRoomCapacity:(NSUInteger)capacity
                    washRoomCapacity:(NSUInteger)washRoomCapacity;

- (void)addCar:(ECOWashRoom *)washRoom;
- (void)removeCar:(ECOWashRoom *)washRoom;

@end
