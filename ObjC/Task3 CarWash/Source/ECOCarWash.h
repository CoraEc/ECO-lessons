//
//  ECOCarWash.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ECOBuilding.h"
#import "ECOStaff.h"

@interface ECOCarWash : NSObject
@property (nonatomic, readonly) NSArray *buildings;
@property (nonatomic, readonly) NSArray *staff;


+ (instancetype)carWash;

- (void)addBuildings:(ECOBuilding *)building;
- (void)removeBuildings:(ECOBuilding *)building;
- (void)removeBuildingsAtIndex:(NSUInteger)index ;

- (void)addStaff:(ECOStaff *)building;
- (void)removeStaff:(ECOStaff *)building;
- (void)removeStaffAtIndex:(NSUInteger)index;

@end
