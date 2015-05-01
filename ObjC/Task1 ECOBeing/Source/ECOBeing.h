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
@property (nonatomic, copy)     NSString        *name;
@property (nonatomic, assign)   ECOBeingGender  gender;
@property (nonatomic, assign)   NSUInteger      age;
@property (nonatomic, assign)   NSUInteger      weight;
@property (nonatomic, readonly) NSArray         *children;

+ (instancetype)being;

- (void)goToWar;
- (ECOBeing *)makeChild;
- (void)sayHi;

- (void)addChildren:(ECOBeing *)child;
- (void)removeChildren:(ECOBeing *)child;

@end