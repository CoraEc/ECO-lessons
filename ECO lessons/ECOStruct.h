//
//  ECOStruct.h
//  ECO lessons
//
//  Created by Oleg Kobets on 07.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOStruct__
#define __ECO_lessons__ECOStruct__

#include <stdio.h>
#include "stdbool.h"

struct ECOStructure {
    bool firstBoolValue;
    float floatValue;
    bool secondBoolValue;
    int intValue;
    bool thirdBoolValue;
    long long longValue;
    bool fourthBoolValue;
    short firstShortValualue;
    bool fifthBoolValue;
    double doubleValue;
    short secondShortValue;
    bool sixthBoolValue;
    char *pointerString;
    short thirdShortValue;
};
typedef struct ECOStructure ECOStructure;

struct ECOStructureOptimized {
    long long longValue;
    double doubleValue;
    char *pointerString;
    int intValue;
    bool firstBoolValue;
    bool secondBoolValue;
    short firstShortValualue;
    float floatValue;
    bool thirdBoolValue;
    bool fourthBoolValue;
    short secondShortValue;
    bool sixthBoolValue;
    bool fifthBoolValue;
    short thirdShortValue;
};
typedef struct ECOStructureOptimized ECOStructureOptimized;

struct ECOStructureUnion {
    long long longValue;
    double doubleValue;
    char *pointerString;
    int intValue;
    float floatValue;
    short firstShortValualue;
    short secondShortValue;
    short thirdShortValue;
    union {
        struct {
            bool firstBoolValue : 1;
            bool secondBoolValue : 1;
            bool thirdBoolValue : 1 ;
            bool fourthBoolValue : 1;
            bool sixthBoolValue : 1 ;
            bool fifthBoolValue : 1;
        } bits;
        uint8_t flags;
    } data;
};
typedef struct ECOStructureUnion ECOStructureUnion;

    
    
#endif /* defined(__ECO_lessons__ECOStruct__) */
