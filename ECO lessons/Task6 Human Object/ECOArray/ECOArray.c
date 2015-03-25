//
//  ECOArray.c
//  ECO lessons
//
//  Created by Oleg Kobets on 26.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOArray.h"
#include <assert.h>


#pragma mark -
#pragma mark Private Declarations

static
void __ECOArrayDeallocate(ECOArray *array);

#pragma mark -
#pragma mark Public Implementations

ECOArray *ECOArrayCreate() {
    ECOArray *array = ECOObjectCreate(ECOArray);
    
    
    return array;
}

#pragma mark -
#pragma mark Private Implementations

void __ECOArrayDeallocate(ECOArray *array) {
    
    
    __ECOObjectDeallocate(array);
}