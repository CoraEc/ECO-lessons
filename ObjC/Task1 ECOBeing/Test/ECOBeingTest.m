//
//  ECOBeingTest.m
//  ECO lessons
//
//  Created by Oleg Kobets on 13.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOBeing.h"
#import "ECOBeingTest.h"

void ECOBeingPerfomTest() {
    
    NSMutableArray *beings = [NSMutableArray array];
    NSMutableArray *children = [NSMutableArray array];
    
    for (int iter = 0; iter < 10; iter ++) {
        [beings addObject:[ECOBeing being]];
        
        ECOBeing *being = beings[iter];
        
        if (0 == iter % 2) {
            being.gender = ECOBeingGenderMale;
        } else {
            being.gender = ECOBeingGenderFemale;
        }
        
        being.age = 20;
        being.weight = 40;
    
        if (being.gender == ECOBeingGenderMale) {
            [being goToWar];
        } else if (being.gender == ECOBeingGenderFemale) {
            [children addObject: [being makeChild]];
        }
        
        for (ECOBeing *child in children) {
            [being addChildren:child];
        }
    }
    
    NSLog(@"Children count: %lu\n", [children count]);
    
}
    
    
