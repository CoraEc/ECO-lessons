//
//  ECOWasher.m
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOWasher.h"

@implementation ECOWasher

- (void)performWorkerSpecificOperation:(ECOCar *) car {
    NSLog(@"Tram Ta Tam");
    car.isClean = YES;
}

@end
