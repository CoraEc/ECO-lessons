//
//  ECOString.c
//  ECO lessons
//
//  Created by Oleg Kobets on 22.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOString.h"
#include <string.h>


#pragma mark -
#pragma mark Private Declarations

static
void ECOStringDealloc(ECOString *string);

#pragma mark -
#pragma mark Public Implementations

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

size_t ECOStringGetLength(ECOString *string) {
    return string->_length;
}


void ECOStringSetLength(ECOString *string, size_t length) {
    if (string->_length != length) {
        if (0 != length) {
            string->_data = realloc(string->_data, length);
            memset(string->_data, 0, length);
        }
        
        if (0 != string->_length && 0 == length){
            free(string->_data);
        }
        
        string->_length = length;
    }
}
    

void ECOStringSetData(ECOString *string, char *data) {
    if (string->_data != data) {
        if (NULL != data) {
            size_t length = strlen(data)+1;
            ECOStringSetLength(string, length);
            memcpy (string->_data, data, length);
        }
        
        if (NULL == data){
            ECOStringSetLength(string, 0);
        }
    }
}


char *ECOStringGetData(ECOString *string) {
    return string->_data;
}

#pragma mark -
#pragma mark Private Implementations

void ECOStringDealloc(ECOString *string) {
    ECOStringSetLength(string, 0);
    free(string);
}
