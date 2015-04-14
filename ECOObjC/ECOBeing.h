//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ECOBeing : NSObject;

typedef NS_ENUM(NSInteger, ECOBeingGender) {
    ECOBeingMale,
    ECOBeingFemale
};

@property (nonatomic, assign) enum      ECOBeingGender  gender;
@property (nonatomic, retain)           NSString        *name;
@property (nonatomic, assign)           uint64_t        age;
@property (nonatomic, assign)           uint64_t        weight;
@property (nonatomic, retain, readonly) NSArray         *posterity;


+ (instancetype)being;
+ (instancetype)beingWithName:(NSString *)name
                       gender:(enum ECOBeingGender)gender
                          age:(uint64_t)age
                       weight:(uint64_t)weight;

- (void)goToWar;
- (void)makePosterity;
- (void)sayHi;

- (void)addPosterity:(ECOBeing *)descendant;
- (void)removePosterity:(ECOBeing *)descendant;

@end