//
//  ECOBeingUpdateTest.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeingUpdateTest.h"

@implementation ECOBeingUpdateTest

void ECOBeingUpdatePerfomTest() {
    
    NSMutableArray *beings = [NSMutableArray array];
    
    for (NSUInteger iter = 0; iter < 5; iter ++) {
        [beings addObject:[ECOBeingUpdateMale beingUpdate]];
        
        ECOBeingUpdateMale *being = beings[iter];
        being.name = @"type Male";
        being.age = 20;
        being.weight = 45;
    }
    
    for (NSUInteger iter = 0; iter < 5; iter ++) {
        [beings addObject:[ECOBeingUpdateFemale beingUpdate]];
            
        ECOBeingUpdateFemale *being = beings[iter + 5];
        being.name = @"type Female";
        being.age = 20;
        being.weight = 45;
    }
    
    for (ECOBeingUpdate *being in beings) {
        [being performGenderSpecificOperation];
    }
}
    
@end
