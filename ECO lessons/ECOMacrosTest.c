//
//  ECOMacrosTest.c
//  ECO lessons
//
//  Created by Oleg Kobets on 04.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMacrosTest.h"

ECOOutputValueType(int,d);
ECOOutputValueType(double, f);
ECOOutputValueType(float, f);
ECOOutputValueType(char, c);
ECOOutputValueType(short, d);
ECOOutputValueType(long, lu);


int intValue = 0;
double doubleValue = 0.0;
float floatValue = 0.0;
char charValue = 'A';
short shortValue = 0;
long longValue = 0;


void ECOMacrosPerfomTest(){
    ECOOutputValue(int, intValue);
    ECOOutputValue(double, doubleValue);
    ECOOutputValue(float, floatValue);
    ECOOutputValue(char, charValue);
    ECOOutputValue(short, shortValue);
    ECOOutputValue(long, longValue);
}