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
#include "ECOObject.h"

struct ECOString {
    ECOObject _super;
    
    char *_data;
    size_t _length;    
};
typedef struct ECOString ECOString;

extern
ECOString *ECOStringCreate();

extern
void ECOStringSetLength(ECOString *string, size_t length);

extern
size_t ECOStringGetLength(ECOString *string);

extern
void ECOStringSetData(ECOString *string, char *data);

extern
char *ECOStringGetData(ECOString *string);

extern
void __ECOStringDeallocate(ECOString *string);

#endif /* defined(__ECO_lessons__ECOString__) */
