//
//  ECOHuman.c
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOHuman.h"

#pragma mark -
#pragma mark Private Declarations

static
void __ECOHumanDeallocate(ECOHuman *human);

#pragma mark -
#pragma mark Public Implementations

ECOHuman *ECOHumanCreate() {
    ECOHuman *human = ECOObjectCreate(ECOHuman);
    return human;
}

void ECOSetHuman(ECOHuman *human, ECOString *name, ECOGender gender, uint64_t age) {
    ECOHumanSetName(human, name);
    ECOHumanSetAge(human, age);
    ECOHumanSetGender(human, gender);
}

void ECOSetHumaByGod(ECOHuman *human, ECOString *name, ECOGender gender, uint64_t age) {
    ECOHumanSetName(human, name);
    ECOHumanSetAge(human, age);
    ECOHumanSetGender(human, gender);
    human->_partner = NULL;
    human->_mother = NULL;
    human->_father = NULL;
    human->_children = NULL;
}
void ECOHumanSetName(ECOHuman *human, ECOString *name) {
    human->_name = name;
    ECOObjectRetain(name);
}

ECOString *ECOHumanGetName(ECOHuman *human) {
    return human->_name;
}

void ECOHumanSetAge(ECOHuman *human, uint64_t age) {
    human->_age = age;
}

uint64_t ECOHumanGetAge(ECOHuman *human) {
    return human->_age;
}

extern
void ECOHumanSetGender(ECOHuman *human, ECOGender gender) {
    human->_gender = gender;    
}

extern
ECOGender ECOHumanGetGender(ECOHuman *human) {
    return human->_gender;
}


void ECOHumanSetPartner(ECOHuman *partner1, ECOHuman *partner2) {
    if (partner1->_partner != partner2) {
        if (NULL != partner1->_partner) {
            ECOObjectRelease(partner1->_partner);
        }
        
        partner1->_partner = partner2;
        
        if (NULL != partner2) {
            ECOObjectRetain(partner2);
        }
    }
}

ECOHuman *ECOHumanGetPartner(ECOHuman *human) {
    return human->_partner;
}

void ECOHumanDivorse(ECOHuman *partner1, ECOHuman *partner2) {
    ECOHumanSetPartner(partner1, partner2);
    ECOHumanSetPartner(partner2, partner1);
}

void ECOHumanGetMaried(ECOHuman *partner1, ECOHuman *partner2) {
    if (partner1->_partner != partner2) {
        if (NULL != partner1->_partner) {
            ECOHumanDivorse(partner1, partner1->_partner);
        }
        
        if (NULL != partner2->_partner) {
            ECOHumanDivorse(partner2, partner2->_partner);
        }
        
        ECOHumanSetPartner(partner1, partner2);
        ECOHumanSetPartner(partner2, partner1);
    }
}

bool ECOHumanIsMaried(ECOHuman *human) {
    return NULL == human->_partner;
}

#pragma mark -
#pragma mark Private Implementations

void __ECOHumanDeallocate(ECOHuman *human) {
    ECOHumanSetAge(human, 0);
    ECOObjectRelease(human->_name);
    
    if (true == ECOHumanIsMaried(human)) {
        ECOHumanDivorse(human, human->_partner);
    }
    
    __ECOObjectDeallocate(human);
}