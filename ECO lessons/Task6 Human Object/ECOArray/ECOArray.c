//
//  ECOArray.c
//  ECO lessons
//
//  Created by Oleg Kobets on 26.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOArray.h"
#include <assert.h>
#include <string.h>

#pragma mark -
#pragma mark Private Declarations

static
void __ECOArrayDeallocate(ECOArray *array);

static
void ECOArraySetSize(ECOArray *array, uint64_t lenght);

static
void ECOArrayResizeIfNeeded(ECOArray *array);

static
void ECOArrayResize(ECOArray *array);

#pragma mark -
#pragma mark Public Implementations

ECOArray *ECOArrayCreate() {
    ECOArray *array = ECOObjectCreate(ECOArray);
   
    ECOArraySetSize(array, 2);
    ECOArraySetAmountOfObjects(array, 0);
    
    return array;
}

void ECOArraySetAmountOfObjects(ECOArray *array, uint64_t objectAmount) {
    assert(NULL !=array);
    
    if (array->_objectAmount != objectAmount) {
        array->_objectAmount = objectAmount;
    }
}

uint64_t ECOArrayGetAmountOfChildren(ECOArray *array) {
    assert(NULL != array);
    
    return array->_objectAmount;
}

#pragma mark -
#pragma mark Private Implementations

static
void ECOArraySetSize(ECOArray *array, uint64_t lenght) {
    assert(NULL != array);
    
    if (array->_lenght != lenght) {
        array->_lenght = lenght;
    }
}

void __ECOArrayDeallocate(ECOArray *array) {
    ECOArrayRemoveAllObjects(array);
    __ECOObjectDeallocate(array);
}
