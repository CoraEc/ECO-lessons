//
//  ECOTypeSizeValue.c
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOTypeSizeValue.h"

int intValue;
double doubleValue;
float floatValue;
char charValue;
short shortValue;
long longValue;
long long int LLintValue;
long double LDoubleValue;
int *pointValue;


void TypeSizeValue (){
    printf("int size = %lu\n", sizeof(intValue));
    printf("double size = %lu\n", sizeof(doubleValue));
    printf("float size = %lu\n", sizeof(floatValue));
    printf("char size = %lu\n", sizeof(charValue));
    printf("short size = %lu\n", sizeof(shortValue));
    printf("long size = %lu\n", sizeof(longValue));
    printf("long long size = %lu\n", sizeof(LLintValue));
    printf("long double size = %lu\n", sizeof(LDoubleValue));
    printf("pointer size = %lu\n", sizeof(pointValue));
}
