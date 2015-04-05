//
//  ECOArray.h
//  ECO lessons
//
//  Created by Oleg Kobets on 26.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOArray__
#define __ECO_lessons__ECOArray__

#include <stdio.h>
#include <stdlib.h>
#include "ECOObject.h"
#include "ECOHuman.h"

typedef struct ECOHuman ECOHuman;

typedef struct ECOArray ECOArray;
struct ECOArray{
    ECOObject _super;
 
    ECOHuman **_object;
    uint64_t _lenght;
    uint64_t _objectAmount;
};

extern
ECOArray *ECOArrayCreate();

extern
void ECOArrayAddObject(ECOArray *array, ECOHuman *object);

extern
uint64_t ECOArrayGetIndexOfObject(ECOArray *array, ECOHuman *object);

extern
void ECOArrayRemoveObject(ECOArray *array, ECOHuman *object);

extern
void ECOArrayRemoveAllObjects(ECOArray *array);

extern
uint64_t ECOArrayGetAmountOfObjects(ECOArray *array);

extern
void ECOArraySetAmountOfObjects(ECOArray *array, uint64_t objectAmount);


#endif /* defined(__ECO_lessons__ECOArray__) */
