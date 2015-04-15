//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeing.h"


@interface ECOBeing()
@property (nonatomic, retain) NSMutableArray    *children;

@end

@implementation ECOBeing


#pragma mark -
#pragma mark Class Methods

+ (instancetype)being {
    return [[[self alloc] init] autorelease];
}

#pragma mark -
#pragma mark Initializations and Deallocations

- (void)dealloc {
    [_name dealloc];
    self.name = nil;
    self.gender = 0;
    self.age = 0;
    self.weight = 0;
    [_children dealloc];
    
    [super dealloc];
}

- (instancetype)initBeingWithName:(NSString *)name
                       gender:(ECOBeingGender)gender
                          age:(uint64_t)age
                       weight:(uint64_t)weight; {
    
    self = [super init];
    if (self) {
        self.name = name;
        self.gender = gender;
        self.age = age;
        self.weight = weight;
    }
    
    return self;
}

#pragma mark -
#pragma mark Public Methods

- (void)goToWar {
    NSLog(@"KILL!!!");
}

- (ECOBeing *)makeChild {
    return [[ECOBeing new]autorelease];
}

- (void)sayHi {
    NSLog(@"HI!");
    
    for (ECOBeing *child in _children) {
        [child sayHi];
    }
}

- (void)addChildren:(ECOBeing *)child {
    [_children addObject: child];
}

- (void)removeChildren:(ECOBeing *)child {
    [_children removeObject: child];
}
@end
