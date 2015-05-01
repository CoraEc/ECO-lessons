//
//  ECOCarWashStaff.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOStaff.h"

@implementation ECOStaff

#pragma mark -
#pragma mark Class Methods

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    [super dealloc];
}

#pragma mark -
#pragma mark Public Methods

- (void)transferMoneyFrom:(id)keeper To: (ECOStaff *)staff {
    self.money += keeper.money;
    keeper.money = 0;
}

@end
