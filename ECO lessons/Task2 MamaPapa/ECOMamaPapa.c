//
//  ECOMamaPapa.c
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMamaPapa.h"

ECOResultType ECOMamaPapaOutput(int value) {
    ECOResultType result = ECOResultNone;
    printf("value =  %d"" ", value);
    if (0 != value){
        if (0 == (value % 3)){
            printf("mama");
            result = result + ECOResultMama;
        }
        
        if (0 == value % 5){
            printf("papa");
            result = result + ECOResultPapa;
        }
    }
    
    printf("\n");
    
    return result;
}