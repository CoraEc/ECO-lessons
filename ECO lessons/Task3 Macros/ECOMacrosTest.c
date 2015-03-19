//
//  ECOMacrosTest.c
//  ECO lessons
//
//  Created by Oleg Kobets on 04.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMacrosTest.h"

ECOOutputValueFunction(int, d);
ECOOutputValueFunction(double, f);
ECOOutputValueFunction(float, f);
ECOOutputValueFunction(char, c);
ECOOutputValueFunction(short, d);
ECOOutputValueFunction(long, lu);


void ECOMacrosPerfomTest(){
    ECOOutputValue(int, 4);
    ECOOutputValue(double, 3.12);
    ECOOutputValue(float, 5.01987);
    ECOOutputValue(char, 'a');
    ECOOutputValue(short, 1);
    ECOOutputValue(long, 658777687);
}