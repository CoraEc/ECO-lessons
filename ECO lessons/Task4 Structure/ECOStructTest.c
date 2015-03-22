//
//  ECOStructTest.c
//  ECO lessons
//
//  Created by Oleg Kobets on 07.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOStructTest.h"

typedef struct ECOStructure ECOStructure;

void ECOStructPerfomTest() {
    ECOStructSizeTest();
    ECOStructOffsetElementsTest();
}

void ECOStructSizeTest() {
    ECOStructSizeOutpute(ECOStructure, structure, non-optimized);
    ECOStructSizeOutpute(ECOStructureOptimized, structureOptimized, optimal);
    ECOStructSizeOutpute(ECOStructureUnion, structureUnion, union);
}

void ECOStructOffsetElementsTest() {
    ECOStructOffsetElementsOutpute(ECOStructure, firstBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, secondBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, thirdBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, fourthBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, fifthBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, sixthBoolValue);
    ECOStructOffsetElementsOutpute(ECOStructure, firstShortValue);
    ECOStructOffsetElementsOutpute(ECOStructure, secondShortValue);
    ECOStructOffsetElementsOutpute(ECOStructure, thirdShortValue);
    ECOStructOffsetElementsOutpute(ECOStructure, intValue);
    ECOStructOffsetElementsOutpute(ECOStructure, longValue);
    ECOStructOffsetElementsOutpute(ECOStructure, floatValue);
    ECOStructOffsetElementsOutpute(ECOStructure, doubleValue);
    ECOStructOffsetElementsOutpute(ECOStructure, pointerString);
}
