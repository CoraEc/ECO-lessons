//
//  ECOCarWashBuildings.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECOCarWashBuildingRoom.h"

@interface ECOCarWashBuildings : NSObject

@property (nonatomic, readonly) NSArray     *rooms;
@property (nonatomic, assign)   NSUInteger  capasity;

- (void)addRooms:(ECOCarWashBuildingRoom *)room;
- (void)removeRooms:(ECOCarWashBuildingRoom *)room;
- (void)removeRoomsAtIndexes:(NSIndexSet *)indexes;

@end
