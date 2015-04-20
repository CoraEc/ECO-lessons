//
//  ECOObject.c
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOObject.h"


#pragma mark -
#pragma mark Public Implementation

void *__ECOObjectCreate(size_t objectSize, ECODeallocateCallback deallocateCallback) {
    ECOObject *object = calloc(1, objectSize);
    object->_referenceCount = 1;
    object->_deallocateCallback = deallocateCallback;
    
    return object;
}

void *ECOObjectRetain(void *object) {
    if (NULL != object) {
        ((ECOObject *)object)->_referenceCount++;
    }
    
    return object;
}

void ECOObjectRelease(void *voidObject) {
    if (NULL == voidObject) {
        return;
    }
    
    ECOObject *object = (ECOObject *)voidObject;
    object->_referenceCount--;
    if (0 == object->_referenceCount) {
        object->_deallocateCallback(object);
    }
}

uint64_t ECOObjectGetReferenceCount(void *object) {
    if (NULL == object) {
        return 0;
    }
    
    return ((ECOObject *)object)->_referenceCount;
}

void __ECOObjectDeallocate(void *object) {
    free(object);
}