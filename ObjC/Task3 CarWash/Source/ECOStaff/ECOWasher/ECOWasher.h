//
//  ECOWasher.h
//  ECOLessons
//
//  Created by Oleg Kobets on 28.04.15.
//  Copyright (c) 2015 Oleg Kobets. All rights reserved.
//

#import "ECOStaff.h"
#import "ECOCar.h"

@interface ECOWasher : ECOStaff <ECOStaffProtocol>

- (void)performWorkerSpecificOperation:(ECOCar *) car;

@end
