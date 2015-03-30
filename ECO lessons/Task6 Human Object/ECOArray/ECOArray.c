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
void ECOArrayAddSize(ECOArray *array);

static
void ECOArrayRemoveSize(ECOArray *array);

#pragma mark -
#pragma mark Public Implementations

ECOArray *ECOArrayCreate() {
    ECOArray *array = ECOObjectCreate(ECOArray);
   
    ECOArrayAddSize(array);
    array->_childerAmount = 0;
    
    return array;
}

void ECOArrayAddChild(ECOArray *array, ECOHuman *child) {
    assert(NULL != array);
    
    if (1 > (array->_indexCount - array->_childerAmount)) {
            ECOArrayAddSize(array);
    }
    
    if (NULL != child) {
        array->_children[array->_childerAmount] = child;
        array->_childerAmount++;
    }
}

uint64_t ECOArrayGetIndexOfChild(ECOArray *array, ECOHuman *child) {
    assert(NULL != array);
    
    uint64_t childIndex = 0;
    for (childIndex = 0; childIndex < array->_childerAmount - 1; childIndex++) {
        if (array->_children[childIndex] == child) {
            return childIndex;
        }
    }
    if (childIndex == array->_childerAmount) {
        assert(childIndex != array->_childerAmount);
    }
}

void ECOArrayRemoveChild(ECOArray *array, ECOHuman *child) {
    assert(NULL != array);
    
    uint64_t childIndex = ECOArrayGetIndexOfChild(array, child);
    array->_children[childIndex] = 0;
    array->_children[childIndex] = array->_children[array->_childerAmount-1];
    array->_children[array->_childerAmount-1] = 0;
    array->_childerAmount--;
    ECOArrayRemoveSize(array);
}

void ECOArrayRemoveAllChildren(ECOArray *array) {
    memset(array->_children, 0, array->_childerAmount * (sizeof(array->_children)));
    array->_childerAmount = 0;
    ECOArrayRemoveSize(array);
}

uint64_t ECOArrayGetAmountOfChildren(ECOArray *array) {
    return ((NULL != array) ? array->_childerAmount : 0);
}

#pragma mark -
#pragma mark Private Implementations

void ECOArrayAddSize(ECOArray *array) {
    assert(NULL != array);
    
    if (0 == array->_indexCount) {
        array->_children = calloc(2, sizeof(array->_children));
        array->_indexCount = 2;
    
        return;
    } else {
        array->_children = realloc(array->_children,
                                  (array->_indexCount + (array->_indexCount / 2)) * sizeof(array->_children));
        
        assert(NULL != array->_children);
        
        memset(array->_children + array->_indexCount, 0, (array->_indexCount / 2) * sizeof(array->_children));
        
        array->_indexCount += (array->_indexCount / 2);
    }
}

void ECOArrayRemoveSize(ECOArray *array) {
    assert(NULL != array);
    
    if (2 < (array->_indexCount - array->_childerAmount)) {
        array->_children = realloc(array->_children, (array->_indexCount - 2) * sizeof(array->_children));
        array->_indexCount -= 2;
    }
    
    if (0 == array->_childerAmount) {
        array->_indexCount = 0;
        free(array->_children);
    }
}


void __ECOArrayDeallocate(ECOArray *array) {
    ECOArrayRemoveAllChildren(array);
    __ECOObjectDeallocate(array);
}
