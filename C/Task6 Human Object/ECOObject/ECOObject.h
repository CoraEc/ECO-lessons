//
//  ECOObject.h
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOObject__
#define __ECO_lessons__ECOObject__


#include <stdio.h>
#include <stdlib.h>


typedef void(*ECODeallocateCallback)(void *);

struct ECOObject {
    uint64_t _referenceCount;
    ECODeallocateCallback _deallocateCallback;
};
typedef struct ECOObject ECOObject;

extern
void *__ECOObjectCreate(size_t objectSize, ECODeallocateCallback deallocateCallback);

#define ECOObjectCreate(type) \
__ECOObjectCreate(sizeof(type), (ECODeallocateCallback)__##type##Deallocate)

extern
void *ECOObjectRetain(void *object);

extern
void ECOObjectRelease(void *object);

extern
uint64_t ECOObjectGetReferenceCount(void *object);

extern
void __ECOObjectDeallocate(void *object);

#endif /* defined(__ECO_lessons__ECOObject__) */
