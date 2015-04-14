//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeing.h"


@interface ECOBeing;

@property (nonatomic, retain) NSMutableArray    *posterity;

@end

@implementation ECOBeing;

- (void)goToWar {
    NSLog(@"KILL!!!");
}

- (void)makePosterity {
    ECOBeing *descendant = [[ECOBeing new]autorelease];
}

- (void)sayHi {
    NSLog(@"HI!");
}

@end
