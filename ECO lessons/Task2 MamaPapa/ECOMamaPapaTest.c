//
//  ECOMamaPapaPerfomTest.c
//  ECO lessons
//
//  Created by Admin on 02.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#include "ECOMamaPapaTest.h"
#include "ECOMamaPapa.h"

void ECOMamaPapaTest() {
    for (int iter = 0; iter < 1000; iter++) {
        ECOMamaPapaOutput(iter);
    }
}