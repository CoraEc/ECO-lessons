//
//  ECOAcountant.h
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOStaff.h"

@interface ECOAcountant : ECOStaff <ECOStaffProtocol>

- (void)performWorkerSpecificOperation;

@end
