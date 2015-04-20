//
//  ECOCarWash.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECOCarWashBuildings.h"
#import "ECOCarWashStaff.h"

@interface ECOCarWash : NSObject

@property (nonatomic, readonly) NSArray *buildings;
@property (nonatomic, readonly) NSArray *staff;


+ (instancetype)carWash;

- (void)addBuildings:(ECOCarWashBuildings *)building;
- (void)removeBuildings:(ECOCarWashBuildings *)building;
- (void)removeBuildingsAtIndexes:(NSIndexSet *)indexes;

- (void)addStaff:(ECOCarWashStaff *)building;
- (void)removeStaff:(ECOCarWashStaff *)building;
- (void)removeStaffAtIndexes:(NSIndexSet *)indexes;

@end
