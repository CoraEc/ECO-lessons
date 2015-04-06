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

static
void ECOArrayObjectOwner(ECOArray *array, ECOHuman *object);

#pragma mark -
#pragma mark Public Implementations

ECOArray *ECOArrayCreate() {
    ECOArray *array = ECOObjectCreate(ECOArray);
   
    ECOArraySetSize(array, 2);
    ECOArraySetAmountOfObjects(array, 0);
    
    return array;
}

void ECOArrayAddObject(ECOArray *array, ECOHuman *object) {
    assert(NULL != array);
    
    if (array->_objectAmount == array->_lenght) {
        ECOArrayResizeIfNeeded(array);
    }
    ECOArrayObjectOwner(array, object);
    ECOArraySetAmountOfObjects(array, array->_objectAmount++);
}

void ECOArraySetAmountOfObjects(ECOArray *array, uint64_t objectAmount) {
    assert(NULL !=array);
    
    if (array->_objectAmount != objectAmount) {
        array->_objectAmount = objectAmount;
    }
}

uint64_t ECOArrayGetAmountOfObjects(ECOArray *array) {
    assert(NULL != array);
    
    return array->_objectAmount;
}

#pragma mark -
#pragma mark Private Implementations

void ECOArrayObjectOwner(ECOArray *array, ECOHuman *object) {
    assert(NULL != array);
    
    if (array->_object[array->_objectAmount] != object) {
        if (NULL != array->_object[array->_objectAmount]) {
            ECOObjectRelease(array->_object[array->_objectAmount]);
        }
        
        array->_object[array->_objectAmount] = object;
        
        if (NULL != object) {
            ECOObjectRetain(object);
        }
    }
}

void ECOArraySetSize(ECOArray *array, uint64_t lenght) {
    assert(NULL != array);
    
    if (array->_lenght != lenght) {
        array->_lenght = lenght;
    }
}

void ECOArrayResize(ECOArray *array) {
    assert(NULL != array);
    
    if (0 != array->_objectAmount) {
        array->_object = realloc(array->_object, array->_lenght * sizeof(*array->_object));
        
        assert(NULL != array->_object);
        
        memset(array->_object + array->_objectAmount, 0, array->_lenght - array->_objectAmount);
    } else {
        free(array->_object);
        array->_object = NULL;
    }
}

void __ECOArrayDeallocate(ECOArray *array) {
    ECOArrayRemoveAllObjects(array);
    __ECOObjectDeallocate(array);
}
