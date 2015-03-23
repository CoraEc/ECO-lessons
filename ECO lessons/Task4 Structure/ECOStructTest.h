//
//  ECOStructTest.h
//  ECO lessons
//
//  Created by Oleg Kobets on 07.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOStructTest__
#define __ECO_lessons__ECOStructTest__

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "ECOStruct.h"

extern
void ECOStructPerfomTest();

extern
void ECOStructSizeTest();

extern
void ECOStructOffsetElementsTest();

#define ECOStructSizeOutpute(type, value, name) \
    { \
        type *value = malloc(sizeof(type)); \
        printf(#name " size = %lu\n", sizeof(*value)); \
        free(value); \
    }

#define ECOStructOffsetElementsOutpute(type, property)\
    { \
        size_t offset = offsetof(type, property); \
        printf("offset of "#property" = %lu\n", offset); \
    }
#endif /* defined(__ECO_lessons__ECOStructTest__) */
