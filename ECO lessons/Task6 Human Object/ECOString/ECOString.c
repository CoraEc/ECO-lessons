//
//  ECOString.c
//  ECO lessons
//
//  Created by Oleg Kobets on 22.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOString.h"
#include <string.h>

static
void ECOStringDealloc(ECOString *string);

ECOString *ECOStringCreate() {
    ECOString *string = malloc(sizeof(*string));
    string->_data = NULL;
    string->_referenceCount= 1;
    
    return string;
}

void ECOStringRetain(ECOString *string) {
    string->_referenceCount++;
}

void ECOStringRelease(ECOString *string) {
    string->_referenceCount--;
    if (0 == string->_referenceCount) {
        ECOStringDealloc(string);
    }
}

uint64_t ECOStringGetLength(ECOString *string) {
    return string->_length;
}

void ECOStringSetLength(ECOString *string, uint64_t length) {
    if (string->_length != length) {
        string->_data = realloc(string->_data, length * sizeof(*string->_data));
        memset(string->_data + string->_length, 0, length - string->_length);
        
        string->_length = length;
    }
}

void ECOStringSetData(ECOString *string, char *data) {
    if (NULL != data) {
        string->_data = data;
    }
    return;
}

char *ECOStringGetData(ECOString *string) {
    return string->_data;
}

void ECOStringDealloc(ECOString *string) {
    if (NULL != string->_data) {
        free(string->_data);
    }
    
    free(string);
}