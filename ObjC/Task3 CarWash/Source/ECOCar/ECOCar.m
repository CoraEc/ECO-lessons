//
//  ECOCar.m
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOCar.h"

@implementation ECOCar

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    [super dealloc];
}

- (instancetype) init {
    self.money = 100;
    self.isClean = NO;
}

@end
