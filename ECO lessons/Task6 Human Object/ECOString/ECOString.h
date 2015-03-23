//
//  ECOString.h
//  ECO lessons
//
//  Created by Oleg Kobets on 22.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOString__
#define __ECO_lessons__ECOString__

#include <stdio.h>
#include <stdlib.h>

struct ECOString {
    char *_data;
    size_t _length;
    
    uint64_t _referenceCount;
};
typedef struct ECOString ECOString;

extern
ECOString *ECOStringCreate();

extern
void ECOStringRetain(ECOString *string);

extern
void ECOStringRelease(ECOString *string);

extern
void ECOStringSetLength(ECOString *string, size_t length);

extern
size_t ECOStringGetLength(ECOString *string);

extern
void ECOStringSetData(ECOString *string, char *data);

extern
char *ECOStringGetData(ECOString *string);

#endif /* defined(__ECO_lessons__ECOString__) */
