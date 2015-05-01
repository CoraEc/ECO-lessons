//
//  ECOCarWashStaff.h
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NSObject+ECOExtensions.h"

@protocol ECOStaffProtocol <NSObject>

@optional
- (void)performWorkerSpecificOperation;

@end

@interface ECOStaff : NSObject
@property (nonatomic, assign) NSUInteger ID;
@property (nonatomic, assign) NSUInteger money;

- (void)transferMoneyFrom:(id)keeper To: (ECOStaff *)staff;

@end
