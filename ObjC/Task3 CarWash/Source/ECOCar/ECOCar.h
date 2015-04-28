//
//  ECOCar.h
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ECOCar : NSObject
@property (nonatomic, assign)       NSUInteger  carNumber;
@property (nonatomic, assign)       NSUInteger  money;
@property (nonatomic, readwrite)    BOOL        isClean;

+ (instancetype)staff;

@end
