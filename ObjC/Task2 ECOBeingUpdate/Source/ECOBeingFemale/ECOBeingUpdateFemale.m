//
//  ECOBeingUpdateFemale.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeingUpdateFemale.h"

@implementation ECOBeingUpdateFemale

- (void)performGenderSpecificOperation {
    [self makeChild];
}

- (ECOBeingUpdate *)makeChild {
    ECOBeingUpdate * child = [[ECOBeingUpdate new] autorelease];
    NSLog(@"WELL DONE");
    return child;
}

@end
