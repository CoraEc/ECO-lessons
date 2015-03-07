//
//  ECOMacrosTest.c
//  ECO lessons
//
//  Created by Oleg Kobets on 04.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMacrosTest.h"

ECOOutputValueType(int, d);
ECOOutputValueType(double, f);
ECOOutputValueType(float, f);
ECOOutputValueType(char, c);
ECOOutputValueType(short, d);
ECOOutputValueType(long, lu);


void ECOMacrosPerfomTest(){
    ECOOutputValue(int, 4);
    ECOOutputValue(double, 3.12);
    ECOOutputValue(float, 5.01987);
    ECOOutputValue(char, 'a');
    ECOOutputValue(short, 1);
    ECOOutputValue(long, 658777687);
}