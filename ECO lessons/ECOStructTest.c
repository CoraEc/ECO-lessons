//
//  ECOStructTest.c
//  ECO lessons
//
//  Created by Oleg Kobets on 07.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOStructTest.h"

typedef struct ECOStructure ECOStructure;

void ECOStructPerfomTest(){
    ECOStructSizeTest();
    ECOStructOffsetElementsTest();
}

void ECOStructSizeTest(){
    ECOStrutrureSizeOutpute(ECOStructure, structure, non-optimized);
    ECOStrutrureSizeOutpute(ECOStructureOptimized, structureOptimized, optimal);
    ECOStrutrureSizeOutpute(ECOStructureUnion, structureUnion, union);
}

void ECOStructOffsetElementsTest(){
    ECOStructOffsetElementsOytpute(ECOStructure, firstBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, secondBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, thirdBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, fourthBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, fifthBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, sixthBoolValue);
    ECOStructOffsetElementsOytpute(ECOStructure, firstShortValue);
    ECOStructOffsetElementsOytpute(ECOStructure, secondShortValue);
    ECOStructOffsetElementsOytpute(ECOStructure, thirdShortValue);
    ECOStructOffsetElementsOytpute(ECOStructure, intValue);
    ECOStructOffsetElementsOytpute(ECOStructure, longValue);
    ECOStructOffsetElementsOytpute(ECOStructure, floatValue);
    ECOStructOffsetElementsOytpute(ECOStructure, doubleValue);
    ECOStructOffsetElementsOytpute(ECOStructure, pointerString);
}
