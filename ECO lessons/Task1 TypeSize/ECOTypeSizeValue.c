//
//  ECOTypeSizeValue.c
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOTypeSizeValue.h"

void ECOTypeSizeValue (){
    ECOSizeOfTypeOutput(int);
    ECOSizeOfTypeOutput(double);
    ECOSizeOfTypeOutput(float);
    ECOSizeOfTypeOutput(char);
    ECOSizeOfTypeOutput(short);
    ECOSizeOfTypeOutput(long);
    
    long long int LLintValue;
    long double LDoubleValue;
    int *pointValue;
    
    printf("long long size = %lu\n", sizeof(LLintValue));
    printf("long double size = %lu\n", sizeof(LDoubleValue));
    printf("pointer size = %lu\n", sizeof(pointValue));
}
