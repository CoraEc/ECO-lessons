//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeing.h"
#import "NSOBject+ECOExtentions.h"


@interface ECOBeing()
@property (nonatomic, retain) NSMutableArray    *mutableChildren;

@end

@implementation ECOBeing

@dynamic children;

#pragma mark -
#pragma mark Class Methods

+ (instancetype)being {
    return [self object];
}

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    self.name = nil;
    self.mutableChildren = nil;
    
    [super dealloc];
}

- (instancetype)init {
    self = [super init];
    if (self) {
        self.mutableChildren = [NSMutableArray array];
    }
    return self;
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
    
    for (ECOBeing *child in self.mutableChildren) {
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

