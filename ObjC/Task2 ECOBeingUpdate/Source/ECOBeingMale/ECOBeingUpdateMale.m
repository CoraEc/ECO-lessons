//
//  ECOBeingUpdateMale.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeingUpdateMale.h"

@implementation ECOBeingUpdateMale

- (void)performGenderSpecificOperation {
    [self goToWar];
}

- (void)goToWar {
    NSLog(@"I need to Kill someone");
}

@end