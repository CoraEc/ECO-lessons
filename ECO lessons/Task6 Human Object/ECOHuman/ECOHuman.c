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

void ECOHumanSetAge(ECOHuman *human, uint64_t age) {
    human->_age = age;
}

uint64_t ECOHumanGetAge(ECOHuman *human) {
    return human->_age;
}

void ECOHumanSetName(ECOHuman *human, char *name) {
    human->_name = ECOStringCreate();
    ECOStringSetData(human->_name, name);
}

void ECOHumanSetPartner(ECOHuman *partner1, ECOHuman *partner2) {
    partner1->_partner = partner2;
    ECOHumanRetain(partner2);
    partner2->_partner = partner1;
    ECOHumanRetain(partner1);
}

ECOHuman *ECOHumanGetPartner(ECOHuman *human) {
    return human->_partner;
}

void ECOHumanDivorse(ECOHuman *partner1, ECOHuman *partner2) {
    partner1->_partner = NULL;
    partner2->_partner = NULL;
    ECOHumanRelease(partner1);
    ECOHumanRelease(partner2);
}

void ECOHumanDealloc(ECOHuman *human) {
    ECOHumanSetAge(human, 0);
    ECOStringRelease(human->_name);
    
      
    free(human);
}