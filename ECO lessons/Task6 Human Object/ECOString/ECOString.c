//
//  ECOString.c
//  ECO lessons
//
//  Created by Oleg Kobets on 22.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOString.h"
#include <string.h>
#include <assert.h>


#pragma mark -
#pragma mark Private Declarations

static
void __ECOStringDeallocate(ECOString *string);

#pragma mark -
#pragma mark Public Implementations

ECOString *ECOStringCreate() {
    ECOString *string = ECOObjectCreate(ECOString);
    
    string->_data = NULL;
    
    return string;
}


size_t ECOStringGetLength(ECOString *string) {
    return string->_length;
}


void ECOStringSetLength(ECOString *string, size_t length) {
    if (string->_length != length) {
        if (NULL != string->_data) {
            string->_data = realloc(string->_data, length);
            
            assert(NULL != string->_data);
            
            memset(string->_data, 0, length);
        }
        
        if (0 == length){
            free(string->_data);
            string->_data = NULL;
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
            
        } else {
            ECOStringSetLength(string, 0);
        }
    }
}


char *ECOStringGetData(ECOString *string) {
    return string->_data;
}

#pragma mark -
#pragma mark Private Implementations

void __ECOStringDeallocate(ECOString *string) {
    if (NULL != string->_data) {
        ECOStringSetLength(string, 0);
    }
    
    __ECOObjectDeallocate(string);
}

