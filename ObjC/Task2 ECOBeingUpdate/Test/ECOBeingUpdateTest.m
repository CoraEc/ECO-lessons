//
//  ECOBeingUpdateTest.m
//  ECO lessons
//
//  Created by Oleg Kobets on 19.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeingUpdateTest.h"

void ECOBeingUpdatePerfomTest() {
    
    NSMutableArray *beingsUpdate = [NSMutableArray array];
    NSString *nameMale = @"typeMale";
    NSString *nameFemale = @"typeFemale";
    
    for (NSUInteger index = 0; index < 10; index ++) {
        BOOL isMale;
        Class class = isMale ? ECOBeingUpdateMale : ECOBeingUpdateFemale;
        
        [beingsUpdate addObject:[class beingUpdate]];
        
        class *beingUpdate = beingsUpdate[index];
        beingUpdate.name = nameMale;
        beingUpdate.age = 20;
        beingUpdate.weight = 45;
    }
    
    for (ECOBeingUpdate *beingUpdate in beingsUpdate) {
        [beingUpdate  performGenderSpecificOperation];
    }
}
    
