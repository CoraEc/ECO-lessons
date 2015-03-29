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
 
    ECOHuman *_children;
    uint64_t _childerCount;
};

extern
ECOArray *ECOArrayCreate();

extern
void ECOArrayAddChild(ECOArray *array, ECOHuman *child);

extern
void ECOArrayRemoveChild(ECOArray *array);

extern
void ECOArrayGetAmountOfChildren(ECOArray *array);


#endif /* defined(__ECO_lessons__ECOArray__) */
