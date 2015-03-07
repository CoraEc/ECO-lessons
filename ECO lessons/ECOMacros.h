//
//  ECOMacros.h
//  ECO lessons
//
//  Created by Admin on 04.03.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#ifndef __ECO_lessons__ECOMacros__
#define __ECO_lessons__ECOMacros__
#include <stdio.h>

#define ECOOutputValueType(type, specifier)\
    static void ECOOutput_##type(type value) { \
        printf("value = %"#specifier" type = "#type"\n", value); \
}

#define ECOOutputValue(type, value) \
    ECOOutput_##type(value);

#endif /* defined(__ECO_lessons__ECOMacros__) */