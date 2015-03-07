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


#define ECOTypeOutput(type)\
    type type ## Value; \
        printf(#type" size = %lu\n", sizeof(type ## Value));


