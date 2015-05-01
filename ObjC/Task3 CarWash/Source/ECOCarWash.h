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

- (void)addBuildings:(ECOBuilding *)building;
- (void)removeBuildings:(ECOBuilding *)building;

- (void)addStaff:(ECOStaff *)building;
- (void)removeStaff:(ECOStaff *)building;


@end
