//
//  ECOHuman.c
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOHuman.h"
#include <assert.h>

#pragma mark -
#pragma mark Private Declarations

#pragma mark -
#pragma mark Public Implementations

ECOHuman *ECOHumanCreate() {
    ECOHuman *human = ECOObjectCreate(ECOHuman);
    
    return human;
}

void ECOHumanSetName(ECOHuman *human, ECOString *name) {
    assert(NULL !=human);
    
    human->_name = name;
    ECOObjectRetain(name);
}

ECOString *ECOHumanGetName(ECOHuman *human) {
    assert(NULL != human);
    
    return human->_name;
}

void ECOHumanSetAge(ECOHuman *human, uint64_t age) {
    assert(NULL != human);
    
    human->_age = age;
}

uint64_t ECOHumanGetAge(ECOHuman *human) {
    assert(NULL != human);
    
    return human->_age;
}

extern
void ECOHumanSetGender(ECOHuman *human, ECOGender gender) {
    assert(NULL != human);
    
    human->_gender = gender;
}

extern
ECOGender ECOHumanGetGender(ECOHuman *human) {
    assert(NULL != human);
    
    return human->_gender;
}


void ECOHumanSetPartner(ECOHuman *human, ECOHuman *partner) {
    assert(NULL != human);
    
    if (human->_partner != partner) {
        if (NULL != human->_partner) {
            ECOObjectRelease(human->_partner);
        }
        
        human->_partner = partner;
        
        if (NULL != partner) {
            ECOObjectRetain(partner);
        }
    }
}

ECOHuman *ECOHumanGetPartner(ECOHuman *human) {
    assert(NULL != human);
    
    return human->_partner;
}

void ECOHumanDivorce(ECOHuman *human) {
    ECOHumanSetPartner(ECOHumanGetPartner(human), NULL);
    ECOHumanSetPartner(human, NULL);
}

void ECOHumanGetMarried(ECOHuman *human, ECOHuman *partner) {
    assert(NULL != human);
    
    if (human->_partner != partner) {
        if (NULL != human->_partner) {
            ECOHumanDivorce(human);
        }
        
        if (NULL != partner->_partner) {
            ECOHumanDivorce(partner);
        }
        
        ECOHumanSetPartner(human, partner);
        ECOHumanSetPartner(partner, human);
    }
}

bool ECOHumanIsMarried(ECOHuman *human) {
    return NULL == human->_partner;
}

void __ECOHumanDeallocate(ECOHuman *human) {
    ECOHumanSetAge(human, 0);
    ECOObjectRelease(human->_name);
    
    if (ECOHumanIsMarried(human)) {
        ECOHumanDivorce(human);
    }
    
    __ECOObjectDeallocate(human);
}

#pragma mark -
#pragma mark Private Implementations



