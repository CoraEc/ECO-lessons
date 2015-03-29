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
    
    if (0 == array->_indexCount || 0 != array->_indexCount) {
        if (1 > (array->_indexCount - array->_childerAmount)) {
            ECOArrayAddSize(array);
        }
    }
    
    if (NULL != child) {
        if (0 == array->_childerAmount) {
            array->_children[array->_childerAmount] = child;
            array->_childerAmount++;
        
            return;
        }
    
        array->_children[array->_childerAmount+1] = child;
        array->_childerAmount++;
    }
}

ECOHuman *ECOArrayGetChildAtIndex(ECOArray *array);

void ECOArrayRemoveChild(ECOArray *array);

void ECOArrayRemoveAllChildren(ECOArray *array);

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
        free(array->_children);
    }
}


void __ECOArrayDeallocate(ECOArray *array) {
    ECOArrayRemoveAllChildren(array);
    ECOArrayRemoveSize(array);
    __ECOObjectDeallocate(array);
}
