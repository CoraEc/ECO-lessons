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
void ECOArraySetSize(ECOArray *array, size_t length);

static
void ECOArrayResizeIfNeeded(ECOArray *array);

static
size_t ECOArrayGetLengthByRulles(ECOArray *array);

static
void ECOArraySetObjectAtIndex(ECOArray *array, ECOHuman *object, uint64_t objectIndex);

#pragma mark -
#pragma mark Public Implementations

ECOArray *ECOArrayCreate() {
    ECOArray *array = ECOObjectCreate(ECOArray);
   
    array->_length = 0;
    ECOArraySetObjectsCount(array, 0);
    
    return array;
}

void ECOArrayAddObject(ECOArray *array, ECOHuman *object) {
    assert(NULL != array);
    
    if (array->_count == array->_length) {
        ECOArrayResizeIfNeeded(array);
    }
    ECOArraySetObjectAtIndex(array, object, array->_count);
    ECOArraySetObjectsCount(array, array->_count++);
}

void ECOArraySetObjectsCount(ECOArray *array, uint64_t count) {
    assert(NULL !=array);
    
    if (array->_count != count) {
        array->_count = count;
    }
}

uint64_t ECOArrayGetObjectsCount(ECOArray *array) {
    assert(NULL != array);
    
    return array->_count;
}

#pragma mark -
#pragma mark Private Implementations

void ECOArraySetObjectAtIndex(ECOArray *array, ECOHuman *object, uint64_t objectIndex) {
    assert(NULL != array);
    
    if (array->_object[objectIndex] != object) {
        if (NULL != array->_object[objectIndex]) {
            ECOObjectRelease(array->_object[objectIndex]);
        }
        
        array->_object[objectIndex] = object;
        
        if (NULL != object) {
            ECOObjectRetain(object);
        }
    }
}

void ECOArrayResizeIfNeeded(ECOArray *array) {
    size_t length = ECOArrayGetLengthByRulles(array);
    ECOArraySetSize(array, length);
}

size_t ECOArrayGetLengthByRulles(ECOArray *array) {
    size_t length = array->_length;
    
    if (0 == (array->_length - array->_count)) {
        return length = array->_length * 1.5;
    }
    if (array->_count == array->_length * 0.6) {
        return length = array->_length * 0.7;
    }
    
    return length;
}

void ECOArraySetSize(ECOArray *array, size_t length) {
    assert(NULL != array);
    
    if (array->_length != length) {
        if (length > array->_length) {
            array->_object = realloc(array->_object, length * sizeof(*array->_object));
        
            assert(NULL != array->_object);
        
            memset(array->_object + array->_count, 0, length - array->_count);
        } else {
            for (uint64_t index = array->_length; index > (array->_length - length) ; index-- ) {
                ECOArraySetObjectAtIndex(array, NULL, index);
            }
            if (0 != length) {
                array->_object = realloc(array->_object, length * sizeof(*array->_object));
            } else {
                free(array->_object);
                array->_object = NULL;
            }
        }
    }
}


void __ECOArrayDeallocate(ECOArray *array) {
    ECOArrayRemoveAllObjects(array);
    __ECOObjectDeallocate(array);
}
