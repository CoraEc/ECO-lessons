//
//  ECOHuman.h
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOHuman__
#define __ECO_lessons__ECOHuman__

#include "ECOObject.h"
#include "ECOString.h"
#include <stdio.h>
#include <stdlib.h>

typedef enum {
    ECOMale,
    ECOFemale
} ECOGender;

typedef struct ECOHuman ECOHuman;
struct ECOHuman {
    ECOString *_name;
    uint64_t _age;
    ECOGender _gender;
    ECOHuman *_partner;
    ECOHuman *_mother;
    ECOHuman *_father;
    
    uint64_t _referenceCount;
};

extern
void ECOHumanReteine(ECOHuman *human);

extern
void ECOHumanRelease(ECOHuman *human);

extern
ECOHuman *ECOHumanCreate();

extern
void ECOHumanSetName(ECOHuman *human, char *name);

extern
ECOString ECOHumanGetName();

extern
void ECOHumanSetAge(ECOHuman *human, uint64_t age);

extern
uint64_t ECOHumanGetAge(ECOHuman *human);

extern
void ECOSetHuman();

extern
void ECOSetHumaByGod();

extern
void ECOHumanSetPartner(ECOHuman *parner1, ECOHuman *partner2);

extern
ECOHuman *ECOHumanGetPartner(ECOHuman *human);

extern
void ECOHumanDivorse(ECOHuman *partner1, ECOHuman *partner2);

extern
void ECOHumanGetMaried();


#endif /* defined(__ECO_lessons__ECOHuman__) */
