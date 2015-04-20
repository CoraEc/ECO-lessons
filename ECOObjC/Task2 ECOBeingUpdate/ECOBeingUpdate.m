//
//  ECOBeing.m
//  ECO lessons
//
//  Created by Oleg Kobets on 16.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeingUpdate.h"

@implementation ECOBeingUpdate

#pragma mark -
#pragma mark Class Methods

+ (instancetype)beingUpdate {
    return [[[self alloc] init] autorelease];
}

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.name = nil;
    self.age = 0;
    self.weight = 0;
    
    [super dealloc];
}

#pragma mark -
#pragma mark Public Methods

- (void)performGenderSpecificOperation {

}

@end
