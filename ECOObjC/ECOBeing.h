//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ECOBeing : NSObject

typedef NS_ENUM(NSInteger, ECOBeingGender) {
    ECOBeingGenderNone,
    ECOBeingMale,
    ECOBeingFemale
};

@property (nonatomic, assign)   ECOBeingGender  gender;
@property (nonatomic, retain)   NSString        *name;
@property (nonatomic, assign)   uint64_t        age;
@property (nonatomic, assign)   uint64_t        weight;
@property (nonatomic, readonly) NSArray         *children;


+ (instancetype)being;

- (instancetype)initBeingWithName:(NSString *)name
                           gender:(ECOBeingGender)gender
                              age:(uint64_t)age
                           weight:(uint64_t)weight;
- (void)goToWar;
- (ECOBeing *)makeChild;
- (void)sayHi;

- (void)addChildren:(ECOBeing *)child;
- (void)removeChildren:(ECOBeing *)child;

@end