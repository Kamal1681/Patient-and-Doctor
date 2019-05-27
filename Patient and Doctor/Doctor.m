//
//  Doctor.m
//  Patient and Doctor
//
//  Created by Kamal Maged on 2019-05-27.
//  Copyright © 2019 Kamal Maged. All rights reserved.
//

#import "Doctor.h"

@implementation Doctor
-(instancetype)initWithName: (NSString *)name andSpecialization: (NSString *)specialization {
    self = [super init];
    if (self) {
        _name = name;
        _specialization = specialization;
    }
    return self;
}
-(BOOL)visit: (Patient *) patient {
    if (patient.healthCard) {
        [self.patientList addObject:patient];
    }
    return patient.healthCard;
}
@end
