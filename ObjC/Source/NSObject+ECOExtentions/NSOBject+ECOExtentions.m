//
//  NSOBject+ECOExtentions.m
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "NSOBject+ECOExtentions.h"

@implementation NSObject (ECOExtention)

+ (instancetype)object {
    return [[[self alloc] init] autorelease];
}

@end
