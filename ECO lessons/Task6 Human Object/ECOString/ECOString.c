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
    return (NULL != string) ? string->_length : 0;
}


void ECOStringSetLength(ECOString *string, size_t length) {
    assert(NULL != string);
    
    if (string->_length != length) {
        if (NULL != string->_data && 0 == length) {
            free(string->_data);
            string->_data = NULL;
            
            return;
        }
        
        string->_data = realloc(string->_data, length);
            
        assert(NULL != string->_data);
            
        memset(string->_data, 0, length);
        
        string->_length = length;
    }
}
    

void ECOStringSetData(ECOString *string, char *data) {
    assert(NULL != string);
    
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
    return (NULL != string) ? string->_data : NULL;
}

#pragma mark -
#pragma mark Private Implementations

void __ECOStringDeallocate(ECOString *string) {
    if (NULL != string->_data) {
        ECOStringSetLength(string, 0);
    }
    
    __ECOObjectDeallocate(string);
}

