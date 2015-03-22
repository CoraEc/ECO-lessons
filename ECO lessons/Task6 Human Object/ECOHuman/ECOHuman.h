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
    ECOString _name;
    uint64_t _age;
    ECOGender _gender;
    ECOHuman *_partner;
    ECOHuman *_mother;
    ECOHuman *_father;
    
    uint64_t _referenceCount;
};

extern
void ECOHumanReteine();

extern
void ECOHumanRelease();

extern
ECOHuman *ECOHumanCreate();

extern
void ECOSetHuman();

extern
void ECOHumanSetPartner();

extern
ECOHuman ECOHumanGetPartner();

extern
void ECOHumanDivorse();

extern
void ECOHumanGetMaried();


#endif /* defined(__ECO_lessons__ECOHuman__) */
