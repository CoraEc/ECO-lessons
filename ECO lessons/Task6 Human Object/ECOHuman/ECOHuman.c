//
//  ECOHuman.c
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOHuman.h"

static
void ECOHumanDealloc(ECOHuman *human);

void ECOHumanRetain(ECOHuman *human) {
    human->_referenceCount++;
}

void ECOHumanRelease(ECOHuman *human) {
    human->_referenceCount--;
    if (0 == human->_referenceCount) {
        ECOHumanDealloc(human);
    }
}

ECOHuman *ECOHumanCreate() {
    ECOHuman *human = malloc(sizeof(*human));
    human->_referenceCount= 1;
    
    return human;
}

void ECOHumanDealloc(ECOHuman *human) {
      
    free(human);
}