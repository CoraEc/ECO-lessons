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
#include "ECOArray.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum {
    ECOGenderNone,
    ECOMale,
    ECOFemale
} ECOGender;

typedef struct ECOHuman ECOHuman;
struct ECOHuman {
    ECOObject _super;
    
    ECOString *_name;
    
    uint64_t _age;
    ECOGender _gender;
    
    ECOHuman *_partner;
    ECOHuman *_mother;
    ECOHuman *_father;
    ECOArray *_children;
    
};

extern
ECOHuman *ECOHumanCreate();

extern
void ECOHumanSetName(ECOHuman *human, ECOString *name);

extern
ECOString *ECOHumanGetName(ECOHuman *human);

extern
void ECOHumanSetAge(ECOHuman *human, uint64_t age);

extern
uint64_t ECOHumanGetAge(ECOHuman *human);

extern
void ECOHumanSetGender(ECOHuman *human, ECOGender gender);

extern
ECOGender ECOHumanGetGender(ECOHuman *human);

extern
void ECOHumanSetPartner(ECOHuman *human, ECOHuman *partner);

extern
ECOHuman *ECOHumanGetPartner(ECOHuman *human);

extern
void ECOHumanDivorce(ECOHuman *human);

extern
void ECOHumanGetMarried(ECOHuman *human, ECOHuman *partner);

extern
bool ECOHumanIsMarried(ECOHuman *human);


#endif /* defined(__ECO_lessons__ECOHuman__) */
