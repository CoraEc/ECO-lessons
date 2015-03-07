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
//    ECOStructAdressElementsTest();
}

void ECOStructSizeTest(){
    ECOStructure *structure = malloc(sizeof(ECOStructure));
    printf("structure size = %lu\n", sizeof(*structure));
    
    ECOStructureOptimized *structureOptimized = malloc(sizeof(ECOStructureOptimized));
    printf("optimal structure size = %lu\n", sizeof(*structureOptimized));
    
    ECOStructureUnion *structureUnion = malloc(sizeof(ECOStructureUnion));
    printf("union structure size = %lu\n", sizeof(*structureUnion));

    free(structure);
    free(structureOptimized);
    free(structureUnion);
}

// void ECOStructAdressElementsTest(){
//};
