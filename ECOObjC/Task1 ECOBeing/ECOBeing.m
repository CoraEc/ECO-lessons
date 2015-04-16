//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeing.h"


@interface ECOBeing()
@property (nonatomic, retain) NSMutableArray    *mutableChildren;

@end

@implementation ECOBeing

@dynamic children;

#pragma mark -
#pragma mark Class Methods

+ (instancetype)being {
    return [[[self alloc] init] autorelease];
}

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.name = nil;
    self.gender = 0;
    self.age = 0;
    self.weight = 0;
    
    [super dealloc];
}

#pragma mark -
#pragma mark Accessors Methods

- (NSArray *)сhildren {
    return [[self.mutableChildren copy] autorelease];
}

#pragma mark -
#pragma mark Public Methods

- (void)goToWar {
    NSLog(@"KILL!!!");
}

- (ECOBeing *)makeChild {
    return [[ECOBeing new] autorelease];
}

- (void)sayHi {
    NSLog(@"HI!");
    
    for (ECOBeing *child in self.children) {
        [child sayHi];
    }
}

- (void)addChildren:(ECOBeing *)child {
    [self.mutableChildren addObject: child];
}

- (void)removeChildren:(ECOBeing *)child {
    [self.mutableChildren removeObject: child];
}

@end

