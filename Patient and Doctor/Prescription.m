//
//  Prescription.m
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-06-06.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import "Prescription.h"

@implementation Prescription
-(instancetype)initWithPrescription: (NSArray <NSString *> *) prescription
{
    self = [super init];
    if (self) {
        _prescription = prescription;
    }
    return self;
}
@end
