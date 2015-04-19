//
//  ECOCarWashBuildingRoom.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECOCarWashBuildings.h"
#import "ECOCarWashStaff.h"


@interface ECOCarWashBuildingRoom : NSObject

@property (nonatomic, readonly) NSArray     *staff;
@property (nonatomic, assign)   NSUInteger  capasity;

- (void)addStaff:(ECOCarWashStaff *)staff;
- (void)removeStaff:(ECOCarWashStaff *)staff;
- (void)removeStaffAtIndexes:(NSIndexSet *)indexes;

@end
