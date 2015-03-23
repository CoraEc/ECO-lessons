//
//  ECOObject.c
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOObject.h"

void ECOObjectRetaine(ECOObject *object) {
    object->_referenceCount++;
}

void ECOObjectRelease(ECOObject *object) {
    object->_referenceCount--;
    if (0 == object->_referenceCount) {
        ECOObjectDealloc(object);
    }
}