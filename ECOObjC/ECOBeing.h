//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ECOBeing;

@interface ECOBeing : NSObject;

enum ECOBeingGender : NSInteger {
    ECOBeingMale,
    ECOBeingFemale
};

@property (nonatomic, assign) enum ECOBeingGender gender;

@property (nonatomic, retain) NSString      *name;
@property (nonatomic, assign) uint64_t        age;
@property (nonatomic, assign) uint64_t     weight;
@property (nonatomic, retain) NSArray  *posterity;

+ (void)goToWar;
+ (void)makePosterity;

- (void)sayHi;

@end