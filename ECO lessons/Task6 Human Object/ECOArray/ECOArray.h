//
//  ECOArray.h
//  ECO lessons
//
//  Created by Oleg Kobets on 26.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOArray__
#define __ECO_lessons__ECOArray__

#include <stdio.h>
#include <stdlib.h>
#include "ECOObject.h"

struct ECOArray{
    ECOObject _object;
    
    
};
typedef struct ECOArray ECOArray;

extern
ECOArray *ECOArrayCreate();


#endif /* defined(__ECO_lessons__ECOArray__) */
