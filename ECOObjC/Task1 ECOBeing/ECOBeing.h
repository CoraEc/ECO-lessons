//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ECOBeingGender) {
    ECOBeingGenderNone,
    ECOBeingGenderMale,
    ECOBeingGenderFemale
};

@interface ECOBeing : NSObject
@property (nonatomic, assign)   ECOBeingGender  gender;
@property (nonatomic, copy)     NSString        *name;
@property (nonatomic, assign)   uint64_t        age;
@property (nonatomic, assign)   uint64_t        weight;
@property (nonatomic, readonly) NSArray         *children;


+ (instancetype)being;

- (void)goToWar;
- (ECOBeing *)makeChild;
- (void)sayHi;

- (void)addChildren:(ECOBeing *)child;
- (void)removeChildren:(ECOBeing *)child;

@end