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
        Class class;
        if (0 == index %2) {
            class = [ECOBeingUpdateMale class];
        } else {
            class = [ECOBeingUpdateFemale class];
        }
        
        ECOBeingUpdate *newBeing = [class beingUpdate];
        
        newBeing.name = isMale ? nameMale : nameFemale;
        newBeing.age = 20;
        newBeing.weight = 45;
        
        [beingsUpdate addObject: newBeing];
    }
    
    for (ECOBeingUpdate *beingUpdate in beingsUpdate) {
        [beingUpdate  performGenderSpecificOperation];
    }
}
    
