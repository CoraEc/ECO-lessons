//
//  ECOCarWashBuildingRoom.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECOStaff.h"


@interface ECORoom : NSObject

@property (nonatomic, readonly) NSArray     *staff;
@property (nonatomic, assign)   NSUInteger  capacity;

- (void)addStaff:(ECOStaff *)staff;
- (void)removeStaff:(ECOStaff *)staff;
//- (void)removeStaffAtIndexes:(NSIndexSet *)indexes;

@end