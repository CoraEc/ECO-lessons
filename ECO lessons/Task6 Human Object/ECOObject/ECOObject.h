//
//  ECOObject.h
//  ECO lessons
//
//  Created by Oleg Kobets on 20.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOObject__
#define __ECO_lessons__ECOObject__


#include <stdio.h>
#include <stdlib.h>

struct ECOObject {
    uint64_t _referenceCount;
};
typedef struct ECOObject ECOObject;

#endif /* defined(__ECO_lessons__ECOObject__) */
