//
//  ECOTypeSizeValue.h
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//


#include <stdio.h>


extern
void ECOTypeSizeValue ();


#define ECOSizeOfTypeOutput(type)\
    { \
    type __##type##Value = 0; \
    printf(#type" size = %lu\n", sizeof(__##type##Value));\
    }

