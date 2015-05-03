//
//  ECOWashRoom.h
//  ECOLessons
//
//  Created by Oleg Kobets on 01.05.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECORoom.h"
@class ECOCar;

@interface ECOWashRoom : ECORoom
@property (nonatomic, readonly) NSArray     *car;

- (instancetype)initWithWorkerCapacity:(NSUInteger)capacity
                           carCapacity:(NSUInteger)carCapacity;

- (void)addCar:(ECOCar *)car;
- (void)removeCar:(ECOCar *)car;

@end
