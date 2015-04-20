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
    size_t _length;
    uint64_t _count;
};

extern
ECOArray *ECOArrayCreate();

extern
void ECOArrayAddObject(ECOArray *array, ECOHuman *object);

extern
uint64_t ECOArrayGetIndexOfObject(ECOArray *array, ECOHuman *object);

//extern
//void ECOArrayRemoveObject(ECOArray *array, ECOHuman *object);

//extern
//void ECOArrayRemoveAllObjects(ECOArray *array);

extern
uint64_t ECOArrayGetObjectsCount(ECOArray *array);

extern
void ECOArraySetObjectsCount(ECOArray *array, uint64_t count);


#endif /* defined(__ECO_lessons__ECOArray__) */
