//
//  ECOMamaPapa.c
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMamaPapa.h"

void ECOMamaPapa(int value){
    if (0 != value){
        if (0 == (value % 3)){
            printf("mama");
        }
        if (0 == value%5){
            printf("papa");
        }
        if (0 == value%15){
            printf("mamapapa");
        }
        printf("\n");
    }
}