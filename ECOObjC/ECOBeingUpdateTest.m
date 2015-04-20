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
    
    for (NSUInteger iter = 0; iter < 5; iter ++) {
        [beingsUpdate addObject:[ECOBeingUpdateMale beingUpdate]];
        
        ECOBeingUpdateMale *beingUpdate = beingsUpdate[iter];
        beingUpdate.name = nameMale;
        beingUpdate.age = 20;
        beingUpdate.weight = 45;
    }
    
    for (NSUInteger iter = 0; iter < 5; iter ++) {
        [beingsUpdate addObject:[ECOBeingUpdateFemale beingUpdate]];
            
        ECOBeingUpdateFemale *beingUpdate = beingsUpdate[iter + 5];
        beingUpdate.name = nameFemale;
        beingUpdate.age = 20;
        beingUpdate.weight = 45;
    }
    
    for (ECOBeingUpdate *beingUpdate in beingsUpdate) {
        [beingUpdate  performGenderSpecificOperation];
    }
}
    
